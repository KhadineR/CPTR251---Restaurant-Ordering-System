//
// Created by Khadi on 20/11/2024.
//
#include <iostream>
using namespace std;
#include "Item.h"
#include "LinkedList.h"
LinkedList<Item> menuList;

// Constructor
    Item::Item (int itemID, string name, double price) {
        this->itemID = itemID;
        this->name = name;
        this->price = price;
    };

// Accessors
    int Item::getItemID() {
        return itemID;
    }

    string Item::getName() {
        return name;
    }

    double Item::getPrice() {
        return price;
    }

// Mutators
    void Item::setItemID (int itemID) {
        this->itemID = itemID;
    }

    void Item::setName (string name) {
        this->name = name;
    }

    void Item::setPrice (double price) {
        this->price = price;
    }

// Methods
    void Item::displayItem (LinkedList<Item> &itemsList) {
        cout << "ITEMS " << endl;

        for (int i = 0; i < itemsList.size(); i++) {
            Item* item = itemsList.get(i);  // Example accessor
            cout << "Item ID: " << item->getItemID() << endl;
            cout << "Name: " << item->getName() << endl;
            cout << "Price: $" << item->getPrice() << endl;
            cout << "-------------------" << endl;
        }
    }
