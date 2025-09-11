//
// Created by Khadi on 19/12/2024.
//

#include <iostream>
using namespace std;
#include "Customer.h"

// Constructor
    Customer::Customer (int customerID, string name, string address, int phoneNumber) {
        this->customerID = customerID;
        this->name = name;
        this->address = address;
        this->phoneNumber = phoneNumber;
    };

// Accessors
    int Customer::getCustomerID() {
        return customerID;
    };

    string Customer::getName() {
        return name;
    };

    string Customer::getAddress() {
        return address;
    };
    int Customer::getPhoneNumber() {
        return phoneNumber;
    };

// Mutators
    void Customer::setCustomerID(int customerID) {
        this->customerID = customerID;
    };

    void Customer::setName(string name) {
        this->name = name;
    };

    void Customer::setAddress(string address) {
        this->address = address;
    };

    void Customer::setPhoneNumber(int phoneNumber) {
        this->phoneNumber = phoneNumber;
    };

// Methods
    void Customer::viewMenu(LinkedList &menuList) {
        menuList.display();
    };

    void Customer::viewOrder(stack<Item> &orderStack) {
        cout << "Your current order:" << endl;
        stack<Item> tempStack = orderStack;
        while (!tempStack.empty()) {
            Item currentItem = tempStack.top();
            cout << "Item: " << currentItem.getName() << endl;
            cout << " Price: " << currentItem.getPrice() << endl;
            tempStack.pop();
        }
    };

    void Customer::updateOrder(stack<Item> &orderStack, string itemName) {
        cout << "Updating order..." << endl;
        stack<Item> tempStack = orderStack;
        int option;

        cout << "If you want to remove an item, enter 1" << endl;
        cin >> option;
        if (option == 1) {
            while (!orderStack.empty()) {
                Item currentItem = orderStack.top();
                if (currentItem.getName() != itemName) {
                    tempStack.push(currentItem);
                }
                else {
                    orderStack.pop();
                }
            };

            while (!tempStack.empty()) {
                orderStack.push(tempStack.top());
                tempStack.pop();
            }

        cout << "Order updated successfully!" << endl;
        }
    }

    void Customer::completeOrder(LinkedList &orderList) {
        cout << "Order completed! Details:" << endl;
        orderList.display();
    };
