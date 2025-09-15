
//
// Created by Khadine on 27/11/2024.
//

#include <iostream>
using namespace std;
#include "LinkedList.h"

    Node* head;
    LinkedList::LinkedList() {
        head = nullptr;
    }

    //Insert a new node at the beginning of the linked list
    void LinkedList::insert (int value) {
        Node* newNode = new Node(value);
        newNode -> next = head;
        head = newNode;
    }

    //Insert a new node after a specific node in the linked list
    void LinkedList::insertAfter (Node* prevNode, int value) {
        if (prevNode == nullptr) {
            cout << "Previous node is null" << endl;
            return;
        }

        Node* newNode = new Node (value);
        newNode -> next = prevNode -> next;
        prevNode -> next = newNode;
    }

    //Insert a new node at the end of the linked list
    void LinkedList::insertEnd (int value) {
        Node* newNode = new Node(value);
        Node* current = head;

        while (current -> next) {
            current = current->next;
        }

        current->next = newNode;
    }

    //Display all the values within the node
    void LinkedList::display () {
        Node* current = head;

        while (current != nullptr) {
            cout << "Data:" << current->data << endl;
            current = current -> next;
        }
    }

    //Search for a value within the node
    int LinkedList::searchValue(int value) {
        Node* current = head;

        while (current!=nullptr) {
            if (current->data == value) {
                cout << "Found: " << current->data << endl;
                return 1;
            }
            else
                cout << "Not found" << endl;
                return 0;
        current = current->next;
       }
       return value;
    }

    //Delete a node with a specific value from the linked list
    void LinkedList::remove (int value) {
        Node* current = head;

        while (current!=nullptr) {
            if (current->next->data == value) {
                Node* temp = current->next;
                current->next = temp->next;
                delete temp;
                return;
            }

            current = current->next;
        }
    }

    //Delete head from the linked list
    void LinkedList::removeHead (int value) {
        Node* current = head;

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
    }
