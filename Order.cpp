//
// Created by Khadi on 20/11/2024.
//
#include <iostream>
using namespace std;
#include "Customer.h"
#include "Order.h"
#include "Menu.h"

// Constructor
    Order::Order (string item, double price) {
        this->item = item;
        this->price = price;
    };

// Accessors
    string Order::getItem () {
        return item;
    }

    double Order::getPrice () {
        return price;
    }

//Mutators
    void Order::setItem (string item) {
        this->item = item;
    }

    void Order::setPrice (double price) {
        this->price = price;
    }

// Methods
    void Order::addItem (queue<Order> &ordersQ, Order order) {
        ordersQ.push(order);
        cout << "Item added to the order: " << order.getItem()
             << " - $" << order.getPrice() << endl;
    };

    void Order::removeItem (queue<Order> &ordersQ, string itemName) {
        queue<Order> tempQ;
        tempQ = ordersQ;

        while (!tempQ.empty()) {
           Order currentItem = tempQ.front();
           tempQ.pop();
           if (currentItem.getItem() == itemName) {
               tempQ.pop();
               cout << "Item removed: " << currentItem.getItem() << endl;
           }
           else {
               cout << "Item not found" << endl;
           }
        }
        ordersQ = tempQ;
        displayOrders(ordersQ);
    }


    void Order::displayOrders (queue<Order> &ordersQ) {
        queue<Order> tempQ = ordersQ;
        while (!tempQ.empty()) {
            Order currentOrder = tempQ.front();
            cout << "Item: " << currentOrder.getItem() << endl;
            cout << "Price: $" << currentOrder.getPrice() << endl;
            tempQ.pop();
        }
    }

    void Order::calculateTotal (queue<Order> &ordersQ) {
        double total = 0;
        queue<Order> tempQ = ordersQ;
        while (!tempQ.empty()) {
            total = total + tempQ.front().price;
            tempQ.pop();
        }
        cout << "Total Price: $" << total << endl;
    }


