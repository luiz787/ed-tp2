#ifndef ED_TP2_VECTORTYPE_HPP
#define ED_TP2_VECTORTYPE_HPP

#include <string>

class VectorType {
public:
    // Enumeração dos tipos de vetores.
    enum Type : int {
        ORDERED_ASC, ORDERED_DESC, RANDOM
    };
    /*
     * Função que retorna um tipo de vetor baseado em um parâmetro.
     *
     * @param arg - parâmetro: OrdC, OrdD ou Ale
     *
     * @returns tipo do vetor.
     */
    static Type getType(std::string arg);
};


#endif //ED_TP2_VECTORTYPE_HPP
