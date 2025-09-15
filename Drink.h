//
// Created by Khadi on 20/11/2024.
//

#ifndef DRINK_H
#define DRINK_H
#include "Item.h"

class Drink : public Item {
private:
    string size;
    int temperature;

public:
    int isHotOrCold();

// Constructor
    Drink (int itemID, string name, double price, string size, int temperature);

// Accessors
    string getSize();
    int getTemperature();

// Mutators
    void setSize(string size);
    void setTemperature(int temperature);
};

#endif //DRINK_H
