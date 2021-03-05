
#include <memory>

#include "TipoDato.h"

class ElementoListaSimple {
    public:
        TipoDato datos;
        std::shared_ptr<ElementoListaSimple> next = nullptr;

    public:
        ElementoListaSimple(const TipoDato& datos);
};
