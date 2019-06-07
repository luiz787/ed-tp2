#include "VectorType.hpp"

VectorType::Type VectorType::getType(std::string arg) {
    if (arg == "OrdC") {
        return ORDERED_ASC;
    }
    if (arg == "OrdD") {
        return ORDERED_DESC;
    }
    return RANDOM;
}
