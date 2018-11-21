#include "Instrument.h"

std::string Instrument::getName() {
    if (_name == Name::ELECTRIC_GUITAR) {
        return "electric guitar";
    } else if (_name == Name::BASS_GUITAR) {
        return "bass guitar";
    } else if (_name == Name::VIOLIN) {
        return  "violin";
    }
}