//
// Created by Khadi on 20/11/2024.
//

#ifndef DESSERT_H
#define DESSERT_H
#include "Item.h"

class Dessert : public Item {
private:
    int sweetnessLevel;

public:

// Constructor
    Dessert (int itemID, string name, double price, int sweetnessLevel);

// Accessors
    int getSweetnessLevel ();

// Mutators
    void setSweetnessLevel (int sweetnessLevel);
};



#endif //DESSERT_H
