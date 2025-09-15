//
// Created by Khadi on 20/11/2024.
//
#include <iostream>
using namespace std;
#include "Drink.h"

// Constructor
    Drink::Drink (int itemID, string name, double price, string size, int temperature) : Item (itemID, name, price), size(size), temperature(temperature) {}

// Accessors
    string Drink::getSize () {
        return size;
    };

    int Drink::getTemperature () {
        return temperature;
    }

// Mutators
    void Drink::setSize (string size) {
        this->size = size;
    };

    void Drink::setTemperature (int temperature) {
        this->temperature = temperature;
    }

// Methods
    int Drink::isHotOrCold () {
        if (temperature > 25) {
            cout << "Drink is hot." << endl;
            return 1;
        }
        else {
            cout << "Drink is cold." << endl;
            return 0;
        }

    };
