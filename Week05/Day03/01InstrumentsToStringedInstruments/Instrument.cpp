#include "Instrument.h"

Instrument::Instrument(const std::string &name) : _name(name) {}

std::string Instrument::getName() {
    return _name;
}