#include "Aircraft.h"

Aircraft::Aircraft(AircraftType type, int maxAmmo) : _type(type), _actualAmmo(actualAmmo)
{
    if (_type == AircraftType::F16) {
        _maxAmmo = 8;
    } else (_type == AircraftType::F35) {
        _maxAmmo =12;
    }
}

int Aircraft::fight()
{
    damage = _baseDamage * _actualAmmo;
    _actualAmmo = 0;
}

int Aircraft::refill(int refilledAmmo)
{
    refilledAmmo
}

std::string Aircraft::getType()
{
    if (_type == AircraftType::F16) {
        return "F16";
    } else if (_type == AircraftType::F35) {
        return "F35";
    } else {
        return "There is no such aircraft!";
    }
}

void Aircraft::getStatus()
{

}

bool Aircraft::isPriority()
{
    return false;
}
