#include "Musician.h"

Musician::Musician() : instrument("null"), yearsofexp(0) {
}

Musician::Musician(std::string instrument, int experience)
    : instrument(instrument), yearsofexp(experience) {
}

std::string Musician::get_instrument() {
    return instrument;
}

int Musician::get_yearsofexp() {
    return yearsofexp;
}
