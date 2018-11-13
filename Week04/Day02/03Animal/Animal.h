#ifndef INC_03ANIMAL_ANIMAL_H
#define INC_03ANIMAL_ANIMAL_H

class Animal {

    public:

       void eat(int x);
       void drink(int x);
       void play(int x);

       int getHunger();
       int getThirst();

    Animal(){
        _hunger = 50;
        _thirst = 50;
    }

private:

    int _hunger;
    int _thirst;

};

#endif