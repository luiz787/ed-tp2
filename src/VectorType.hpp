#ifndef ED_TP2_VECTORTYPE_HPP
#define ED_TP2_VECTORTYPE_HPP

#include <string>

class VectorType {
public:
    enum Type : int {
        ORDERED_ASC, ORDERED_DESC, RANDOM
    };
    static Type getType(std::string arg);
};


#endif //ED_TP2_VECTORTYPE_HPP
