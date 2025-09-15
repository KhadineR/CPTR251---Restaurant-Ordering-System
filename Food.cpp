//
// Created by Khadi on 20/11/2024.
//
#include <iostream>
using namespace std;
#include "Food.h"

// Constructor
    Food::Food (int itemID, string name, double price, string portion) : Item (itemID, name, price), portion (portion) {}

// Accessors
    string Food::getPortion () {
        return portion;
    };

// Mutators
    void Food::setPortion (string portion) {
        this->portion = portion;
    };
