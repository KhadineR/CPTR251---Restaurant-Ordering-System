//
// Created by Khadine on 27/11/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node {
public:
    int data;
    Node* next;
    Node (int value) {
        data = value;
        next = nullptr;         //null pointer
    }
};

class LinkedList {
private:


public:
    LinkedList ();
    void insert (int value);
    void insertAfter (Node* prevNode, int value);
    void insertEnd (int value);
    void display ();
    int searchValue(int value);
    void remove (int value);
    void removeHead (int value);
};



#endif //LINKEDLIST_H
