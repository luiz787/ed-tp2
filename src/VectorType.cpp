#include "VectorType.hpp"
/*
* Função que retorna um tipo de vetor baseado em um parâmetro.
*
* @param arg - parâmetro: OrdC, OrdD ou Ale
*
* @returns tipo do vetor.
*/
VectorType::Type VectorType::getType(std::string arg) {
    if (arg == "OrdC") {
        return ORDERED_ASC;
    }
    if (arg == "OrdD") {
        return ORDERED_DESC;
    }
    return RANDOM;
}
