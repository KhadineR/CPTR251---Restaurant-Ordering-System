//
// Created by Khadi on 20/11/2024.
//

#ifndef ITEM_H
#define ITEM_H
#include "LinkedList.h"
#include <string>

using namespace std;

class Item {
private:
    int itemID;
    string name;
    double price;

public:
    void displayItem (LinkedList<Item> &itemsList);

// Constructor
    Item (int itemID, string name, double price);

// Accessors
    int getItemID();
    string getName();
    double getPrice();

// Mutators
    void setItemID (int itemID);
    void setName (string name);
    void setPrice (double price);
};



#endif //ITEM_H
