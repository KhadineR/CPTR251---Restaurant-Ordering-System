//
// Created by Khadi on 20/11/2024.
//
#include <iostream>
using namespace std;
#include <string>
#include "Dessert.h"

// Constructor
    Dessert::Dessert (int itemID, string name, double price, int sweetnessLevel) : Item (itemID, name, price), sweetnessLevel(sweetnessLevel) {}

// Accessors
    int Dessert::getSweetnessLevel () {
        return sweetnessLevel;
    };

// Mutators
    void Dessert::setSweetnessLevel (int sweetnessLevel) {
        this->sweetnessLevel = sweetnessLevel;
    };
