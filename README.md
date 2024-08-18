# Library-Management-System
The Library Management System you've created in C++ is an object-oriented application designed to manage a library's inventory. It includes various functionalities for both administrators (admin) and regular users. Here's a detailed explanation of the code and its functionality:

### Overview

The system allows for the management of four types of items: Books, Magazines, Research Journals, and FYP Theses. The main users are admins who can manage these items by adding, modifying, deleting, or viewing them, while regular users can only view the items.

### Code Structure

1. **Classes and Inheritance:**
   - **Item (Base Class):** This class represents a general item in the library. It includes basic attributes like title, author, number of copies, and price. It serves as the base class for specific item types.
   - **Book, Magazine, ResearchJournal, FYP (Derived Classes):** These classes inherit from `Item` and represent specific types of library items. Each class may have additional attributes specific to that item type (e.g., edition for books, issue number for magazines).
   - **User (Base Class):** This class represents a general user of the system, with basic attributes like username and password.
   - **Admin and RegularUser (Derived Classes):** These classes inherit from `User`. The `Admin` class has additional methods for managing items, while `RegularUser` is limited to viewing items.

2. **Admin Functionalities:**
   - **Add Items:** The admin can add new items to the inventory by entering details such as title, author, number of copies, price, and specific details depending on the item type.
   - **Modify Items:** The admin can modify existing items by updating their number of copies and price.
   - **Delete Items:** The admin can remove items from the inventory.
   - **View All Items:** The admin can view all items in the inventory, with detailed information about each.

3. **User Functionalities:**
   - **View All Items:** Regular users can view the list of all available items in the library.

4. **File Handling:**
   - **Saving and Loading Data:** The system uses file handling to save and load user and item data, ensuring persistence between program executions.

5. **User Interface:**
   - **Menu-Driven Interface:** The system is operated through a menu-driven interface, where users and admins choose options to perform different tasks.
   - **Notifications:** The system provides feedback to users through loading animations and success/failure notifications.

### Key Functions

1. **Main Function:**
   - The main function initializes the system and presents the user with options to either log in as an admin or as a regular user.

2. **User Authentication:**
   - Admins and users must log in to access their respective functionalities. The system checks their credentials against stored data to verify their identity.

3. **Admin Functionalities Implementation:**
   - The admin functionalities (add, modify, delete, view) are implemented using member functions in the `Admin` class. These functions interact with the library's inventory, which is typically stored in a file or in memory.

4. **Polymorphism and Virtual Functions:**
   - The system likely uses polymorphism and virtual functions to handle different types of items through a common interface. This allows for operations on `Item` pointers or references, while the correct derived class functions are called based on the actual object type.


### Summary

This Library Management System is a comprehensive tool for managing a library's inventory. It uses object-oriented programming principles to create a modular and extensible system. The separation of admin and user functionalities ensures that data management is secure and user-friendly. The system's use of classes, inheritance, polymorphism, and file handling demonstrates a solid understanding of advanced C++ concepts.
