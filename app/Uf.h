#ifndef UF_H
#define UF_H

#include <string>
#include <vector>
#include <curl/curl.h>
#include <nlohmann/json.hpp>
#include "ValorUf.h"

namespace Uf {

    size_t callback_escritura(void* contenido, size_t tamano, size_t nmemb, void* userp);
    
    std::vector<ValorUf> obtenerUf();

}

#endif /* UF_H */

