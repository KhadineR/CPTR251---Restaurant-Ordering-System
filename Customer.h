//
// Created by Khadi on 19/12/2024.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Menu.h"
#include "Order.h"
#include <string>
#include <stack>
#include <queue>

using namespace std;

class Customer {
private:
    int customerID;
    string name;
    string address;
    int phoneNumber;

public:
    void viewMenu(LinkedList &menuList);
    void viewOrder(stack<Item> &orderStack);
    void updateOrder(stack<Item> &orderStack, string itemName);
    void completeOrder(LinkedList &orderList);

    // Constructor
    Customer (int customerID, string name, string address, int phoneNumber);

    // Accessors
    int getCustomerID();
    string getName();
    string getAddress();
    int getPhoneNumber();

    // Mutators
    void setCustomerID(int customerID);
    void setName(string name);
    void setAddress(string address);
    void setPhoneNumber(int phoneNumber);

};

#endif //CUSTOMER_H
