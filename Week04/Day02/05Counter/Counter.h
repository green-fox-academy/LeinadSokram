#ifndef INC_05COUNTER_COUNTER_H
#define INC_05COUNTER_COUNTER_H

class Counter {

public:
    Counter(){
        _value = 0;
        _reset = 0;
    }

    Counter(int x){
        _value = x;
        _reset = x;
    }

    void add(int a);
    void add();
    int get();
    void reset();

private:
    int _value;
    int _reset;

};

#endif