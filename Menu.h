//
// Created by Khadine on 20/11/2024.
//

#ifndef MENU_H
#define MENU_H

#include <string>
#include "Item.h"
using namespace std;
#include "Menu.h"
#include "LinkedList.h"


class Menu {
private:
    Item item;
    LinkedList<Item> menuList;

public:
    void addItem (Item& item);
    void removeItem (string itemName);
    void displayMenu();
    int searchItem (string itemName);
    void sortItems ();

// Constructor
    Menu ();

// Accessors
    LinkedList<Item>& getItem ();

//Mutators
    void setItem (LinkedList<Item>& menuList, Item item);
    void setMenuList (LinkedList<Item>& menuList);
};

#endif //MENU_H
