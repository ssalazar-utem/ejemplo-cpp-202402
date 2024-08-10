#include <iostream>
#include <string>
#include <cstdlib>
#include "Uf.h"


/**
 * Función que muestra los participantes del grupo
 * @param programa nombre del ejecutable
 */
void participantes(std::string programa);

/**
 * Taller computacional
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main(int argc, char** argv) {


    std::vector<ValorUf> listado = Uf::obtenerUf();

    // Mostrar los integrantes
    participantes(argv[0]);
    return EXIT_SUCCESS;
}

void participantes(std::string programa) {
    std::cout << std::endl << "=== Programa de ejemplo " << programa << " ===" << std::endl;
    std::cout << std::endl << "Sebastián Salazar Molina." << std::endl; // Reemplazar por su nombre
}
