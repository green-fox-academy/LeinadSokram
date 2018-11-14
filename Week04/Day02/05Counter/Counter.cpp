#include "Counter.h"

void Counter::add(int a) {
    _value += a;
}

void Counter::add() {
    _value++;
}

int Counter::get() {
    return _value;
}

void Counter::reset() {
    _value = _reset;
}