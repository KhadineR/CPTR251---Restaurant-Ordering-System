//
// Created by Khadi on 20/11/2024.
//

#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <queue>
#include <stack>
using namespace std;
stack<Item> orderStack;

class Order {
private:
    string item;
    double price;

public:
    void addItem (queue<Order> &ordersQ, Order order);
    void removeItem (queue<Order> &ordersQ, string itemName);
    void displayOrders (queue<Order> &ordersQ);
    void calculateTotal (queue<Order> &ordersQ);

// Constructor
    Order (string item, double price);

// Accessors
    string getItem ();
    double getPrice ();

//Mutators
    void setItem (string item);
    void setPrice (double price);
};



#endif //ORDER_H
