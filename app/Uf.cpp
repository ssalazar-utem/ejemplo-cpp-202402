#include "Uf.h"

size_t Uf::callback_escritura(void* contenido, size_t tamano, size_t nmemb, void* userp) {
    size_t result = tamano * nmemb;
    ((std::string *)userp)->append((char *) contenido, result);
    return result;
}

std::vector<ValorUf> Uf::obtenerUf() {
    std::vector<ValorUf> datos;
    try {
        CURL* curl;
        CURLcode result;
        std::string bufferLectura;

        curl = curl_easy_init();
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, "https://mindicador.cl/api/uf");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Uf::callback_escritura);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, &bufferLectura);
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1);
            result = curl_easy_perform(curl);
            if (result == CURLE_OK) {
                nlohmann::json json = nlohmann::json::parse(bufferLectura);
                for (const auto& item : json["serie"]) {
                    ValorUf dato(item["fecha"], (double) item["valor"]);
                    datos.push_back(dato);
                }
            } else {
                std::cout << std::endl << curl_easy_strerror(result) << std::endl;
            }
        }
    } catch (nlohmann::json::parse_error& e) {
        std::cerr << "Ocurrió un error al procesar la información: " << e.what() << std::endl;
    }
    return datos;
}