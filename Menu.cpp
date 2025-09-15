/* Student      Khadine Rambert
 * Student ID   2024051065
 * School       University of the Southern Caribbean
 * Project      Restaurant Ordering System
 */

#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

#include "LinkedList.h"
#include "Customer.h"
#include "Menu.h"
#include "Order.h"
#include "Item.h"
#include "Food.h"
#include "Drink.h"
#include "Dessert.h"


    // Functions
    void viewMenu (LinkedList<Item> chineseMenu, stack<Order> orderStack, LinkedList<Item> itemsList);
    void searchMenu(LinkedList<Item> chineseMenu, LinkedList<Item> itemsList);
    void viewOrder(stack<Order> orderStack);
    void updateDeleteOrder(stack<Order> orderStack);
    void completeOrder(stack<Order> orderStack, queue<Order> ordersQ);
    void exit();

    void bubbleSort (int arr[], int size) {
        for (int i = 0; i <= size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void selectionSort (int array[], int size) {
        for (int i = 0; i < size-1; i++) {
            int min = i;
            for (int j = i + 1; j < size; j++) {
                if (array[j] < array[min]) {
                    min = j;
                }
            }
            if (min != i) {
                int temp = array[i];
                array[i] = array[min];
                array[min] = temp;
            }
        }
    }

void saveMenuToFile(const LinkedList<Item>& itemsList, const string& filename) {
        ofstream outFile(Customers.txt);
        if (!outFile) {
            cout << "Error opening file for writing.\n";
            return;
        }
        queue<Customer> tempQueue = customers;
        while (!tempQueue.empty()) {
            Customer c = tempQueue.front();
            outFile << c.getCustomerID() << ","
                    << c.getName() << ","
                    << c.getAddress() << ","
                    << c.getPhoneNumber() << "\n";
            tempQueue.pop();
        }
        outFile.close();
        cout << "Customers saved successfully to " << filename << "!\n";




        int main() {
            // Data structures
            LinkedList<Item> menu;
            LinkedList<Item> itemsList;
            queue<Customer> customersQ;
            stack<Order> orderStack;
            queue<Order> ordersQ;

            Customer customer1 (001, "Anderson John", "#26 Tom Trace, Chase Village", 3256447);
            Customer customer2 (002, "Colin Henry", "3 Hibiscus Drive, Forte Lorde Dale", 2147841);
            Customer customer3 (003, "Iesha Matthews", "#358 Rock Road Village, Penal", 7486980);
            Customer customer4 (004, "Maria Gomez", "12 Oak Street, San Fernando", 9876543);
            Customer customer5 (005, "David Lee", "7 Willow Lane, Chaguanas", 5678912);
            Customer customer6 (006, "Aisha Khan", "25 Mango Avenue, Couva", 1234567);
            Customer customer7 (007, "Ravi Singh", "34 Pine Street, Point Fortin", 8765432);
            Customer customer8 (010, "Sarah Brown", "19 Cedar Drive, Arima", 2345678);
            Customer customer9 (011, "Michael Johnson", "5 Maple Lane, Maraval", 9123456);
            Customer customer10 (012, "Emily Davis", "8 Palm Street, Tunapuna", 4567891);

            customersQ.push(customer1);
            customersQ.push(customer2);
            customersQ.push(customer3);
            customersQ.push(customer4);
            customersQ.push(customer5);
            customersQ.push(customer6);
            customersQ.push(customer7);
            customersQ.push(customer8);
            customersQ.push(customer9);
            customersQ.push(customer10);

            saveMenuToFile(customersQ, menu);

            Menu chineseMenu;
            Order order ();
            Food wantons (01, "Burger", 30, "small, medium, large");
            Food noodles (02, "Noodles", 15.50, "small");
            Drink sprite (1, "Sprite", 10.00, "small, 1L", 18);
            Dessert iceCream (1, "Ice Cream", 25.75, 4);

            itemsList.insert (wantons);
            itemsList.insert (noodles);
            itemsList.insert (sprite);
            itemsList.insert (iceCream);


            // Menu
            int choice = 0;

            while (choice <=6) {
                cout << "MENU OPTIONS" << endl;
                cout << "1. View Menu" << endl;
                cout << "2. Search Menu" << endl;
                cout << "3. View Order" << endl;
                cout << "4. Update/Delete Order" << endl;
                cout << "5. Complete Order" << endl;
                cout << "6. Exit" << endl;

                cout << "Enter your choice: ";
                cin >> choice;

                if (choice == 1) {
                    viewMenu (chineseMenu, orderStack,itemsList);
                }
                else if (choice == 2) {
                    searchMenu (chineseMenu, itemsList);
                }
                else if (choice == 3) {
                    viewOrder (orderStack);
                }
                else if (choice == 4) {
                    updateDeleteOrder (orderStack);
                }
                else if (choice == 5) {
                    completeOrder (orderStack, ordersQ);
                }
                else if (choice == 6) {
                    exit ();
                }
                else {
                    cout << "Invalid choice. Please try again." << endl;
                }

                cout << "Thank you for using the system!" << endl;
            };

            void viewMenu (LinkedList<Item> chineseMenu, stack<Order> orderStack, LinkedList<Item> itemsList) {
                cout << "CHINESE MENU" << endl;
                itemsList.display();

                int option = 0;
                string itemName;
                int itemCount = 0;
                int sortOption = 0;

                cout << "If you would like to add an item to your order please enter '1'. " << endl;
                cout << "To return to Main Menu, enter '-1': ";
                cin >> option;

                while (option != -1) {
                    if (option == 1) {
                        cout << "Enter item name to add to order:" << endl;
                        cin >> itemName;

                        if ((itemsList.searchValue(itemName) = 1)) {
                            cout << "Item Name: " << itemName << endl;
                            orderStack.push;
                            itemCount++;
                            cout << "Item added successfully.";
                        } else {
                            cout << "Item not found." << endl;
                        }
                    } else {
                        cout << "Invalid option. Enter 1 to add an item, or -1 to return." << endl;
                        cin >> option;
                    }
                }
            }

            void searchMenu (LinkedList<Item> chineseMenu, LinkedList<Item> itemsList) {
                int sortOption;
                int searchOption;
                string searchName;

                cout << "Would you like to sort the menu? Enter 1 for YES or 0 for NO: ";
                cin >> sortOption;

                if (sortOption == 1) {
                    bubbleSort(itemsList);
                    cout << "Menu sorted successfully!" << endl;
                } else if (sortOption == 0) {
                    cout << "Displaying unsorted menu." << endl;
                } else {
                    cout << "Invalid option." << endl;
                    return;
                }

                cout << "Do you want to search for an item? Enter 1 for YES or 0 for NO: ";
                cin >> searchOption;

                if (searchOption == 1) {
                    cout << "Enter the item name to search: ";
                    cin >> searchName;


                    Item* foundItem = itemsList.search(searchName);
                    if (foundItem) {
                        cout << "Item Found: " << endl;
                        cout << "Name: " << foundItem->getName() << endl;
                        cout << "Price: $" << foundItem->getPrice() << endl;
                    } else {
                        cout << "Item not found." << endl;
                    }
                } else if (searchOption == 0) {
                    cout << "Returning to the main menu." << endl;
                } else {
                    cout << "Invalid option." << endl;
                }
            }

            void viewOrder (stack<Order> orderStack) {
                if (orderStack.empty()) {
                    cout << "There are no orders to display." << endl;
                    return;
                }

                cout << "Current Orders: " << endl;
                int orderNumber = 1;

                while (!orderStack.empty()) {
                    Order currentOrder = orderStack.top();
                    cout << "Order #" << orderNumber << ":" << endl;
                    cout << "Customer Name: " << currentOrder.getCustomerName() << endl;
                    cout << "Address: " << currentOrder.getAddress() << endl;
                    cout << "Phone Number: " << currentOrder.getPhoneNumber() << endl;
                    cout << "Total Price: $" << currentOrder.getTotalPrice() << endl;
                    cout << "Order Details:" << endl;
                    currentOrder.displayOrderDetails();
                    cout << "-------------------------" << endl;

                    orderStack.pop();
                    orderNumber++;
                }
            }

            void updateDeleteOrder (stack<Order> orderStack) {
                stack<Item> tempStack;
                cout << "If you want to remove an item, enter 1" << endl;
                cin >> option;
                if (option == 1) {
                    while (!orderStack.empty()) {
                        Order currentOrder = orderStack.top();
                        if (currentOrder.getItem() != itemName) {
                            tempStack.push(currentOrder);
                        }
                        else {
                            orderStack.pop();
                        }
                    }
                }
            }

            void completeOrder (stack<Order> orderStack, queue<Order> ordersQ) {
                string name;
                string address;
                int phoneNumber;

                if (ordersQ.empty()) {
                    cout << "No items in order." << endl;
                }
                else {
                    for (!ordersQ.empty) {
                        queue <Item> tempQueue;
                        Item currentItem = tempQueue.front();
                        cout << "Item: " << currentItem.getName() << endl;
                        cout << " Price: " << currentItem.getPrice() << endl;
                        tempQueue.pop();

                        cout << "Enter your name: ";
                        cin >> name;
                        cout << "Enter your address: ";
                        cin >> address;
                        cout << "Enter your phone number: ";
                        cin >> phoneNumber;

                        customersQ.push(Customer(013, name, address, phoneNumber));
                        cout << "Order completed successfully!" << endl;

                        ordersQ = tempQueue;
                    }
                }
            }


            void exit () {
                cout << "Exiting system...\n";
                viewMenu();
            }
        }
    };
