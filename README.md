# CPTR251---Restaurant-Ordering-System
The following is a Restaurant Ordering System using Object Oriented Programming Project completed for my CPTR251 course.

# 🍽️ Restaurant Ordering System  

## 📖 Overview  
A C++ console application simulating a **restaurant ordering system**, developed for **CPTR251 – Object Oriented Programming**. The program allows users to:  
- View and search the restaurant’s menu  
- Add items to their order  
- View their current order with total price  
- Update or delete items from their order  
- Complete the order with customer details  

The project demonstrates **object-oriented programming principles**:  
- **Encapsulation** (accessors, mutators, constructors)  
- **Abstraction** (header files, public/private access)  
- **Inheritance** (Food, Drink, Dessert inherit from Item)  
- **Composition** (Menu contains Items, Orders contain Items)  

---

## 🛠️ Features  
- View/search menu (with sorting and searching)  
- Manage order (add, update, delete)  
- Queue-based processing of customers and orders  
- File handling for storing order details  
- Object-oriented design using multiple classes  

---

## 🧩 UML Diagram  
![UML Diagram](./UML_Diagram.png)  
![Final Assignment UML Diagram](https://github.com/user-attachments/assets/0904e1c1-27fe-4363-be8c-3721b42e914b)

---

## 📂 Class Structure  
- `Customer` – stores customer details & manages order actions  
- `Order` – manages items, calculates total, links to Customer  
- `Menu` – stores available items, supports search & sort  
- `Item` – base class for menu items  
- `Food`, `Drink`, `Dessert` – child classes inheriting from Item  
- `LinkedList` – used for dynamic data storage  
- `Sorting` – supports alphabetical sorting of menu items  

---

## 🚀 How it Ran   
restaurant-ordering-system/
│── README.md
│── UML_Diagram.png
│── main.cpp           
│── Customer.h / Customer.cpp
│── Menu.h / Menu.cpp
│── Item.h / Item.cpp
│── Order.h / Order.cpp
│── Food.h / Food.cpp
│── Drink.h / Drink.cpp
│── Dessert.h / Dessert.cpp
│── LinkedList.h / LinkedList.cpp
│── Sorting.h / Sorting.cpp
│── docs/
│     └── Final_Report.pdf
