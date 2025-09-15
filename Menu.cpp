//
// Created by Khadi on 20/11/2024.
//

#include "Menu.h"
#include <iostream>
using namespace std;


// Constructor
    Menu::Menu () {}

// Accessors
    LinkedList<Item>& Menu::getItem () {
        return menuList;
    }

//Mutators
    void Menu::setItem (LinkedList<Item>& menuList, Item item) {
        this->menuList->item = item;
    }

    void Menu::setMenuList(LinkedList<Item>& menuList) {
        this->menuList = menuList;
    }

// Methods
    void Menu::addItem (Item& item) {
        menuList.insertItem(item);
        cout << "Item added successfully!" << endl;
    }

    void Menu::removeItem (string itemName) {
        if (itemName == menuList.item->getName()) {
            menuList.removeItem(itemName);
            cout << "Item removed successfully!" << endl;
        }
        else {
            cout << "Item not found. Item removal unsuccessful!" << endl;
        }
        }

        void Menu::displayMenu() {
            cout << "Menu Items: " << endl;
            menuList.display();
        }

        int Menu::searchItem (string itemName) {
            cout << "Searching for item..." << endl;
            menuList.searchItem(itemName);
        }

        void Menu::sortItems () {
            menuList.sortItems();
            cout << "Menu items sorted!" << endl;
        }
