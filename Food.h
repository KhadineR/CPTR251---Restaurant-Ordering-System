//
// Created by Khadi on 20/11/2024.
//

#ifndef FOOD_H
#define FOOD_H
#include "Item.h"


class Food : public Item {
private:
    string portion;
public:

// Constructor
    Food (int itemID, string name, double price, string portion);

// Accessors
    string getPortion ();

// Mutators
    void setPortion (string portion);
};

#endif //FOOD_H
