#ifndef INC_03AIRCRAFTCARRIER_AIRCRAFT_H
#define INC_03AIRCRAFTCARRIER_AIRCRAFT_H

#include <iostream>

enum class AircraftType
{
    F16,
    F35
};

class Aircraft
{
public:
    Aircraft(AircraftType type, int actualAmmo);

    int fight();
    int refill(int refilledAmmo);
    std::string getType();
    void getStatus();
    bool isPriority();

private:
    AircraftType _type;
    int _maxAmmo;
    int _actualAmmo;
    int _baseDamage;
};


#endif //INC_03AIRCRAFTCARRIER_AIRCRAFT_H
