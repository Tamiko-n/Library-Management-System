#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cstdlib> // for system("cls")
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;

class loading {
public:
    static void loadingScreen() {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tLoading";
        for (int i = 0; i < 3; ++i) {
            cout << ".";
            cout.flush(); // Ensure the dot is printed immediately
            this_thread::sleep_for(chrono::seconds(1));
        }
        cout << "\n";
    }
};

class LMS {
public:
    static void heading() {
        cout << "\t\t\t\t\t\t\t============================================\n";
        cout << "\t\t\t\t\t\t\t         LIBRARY MANAGEMENT SYSTEM          \n";
        cout << "\t\t\t\t\t\t\t============================================\n";
    }
};

class signUp {
public:
    static void signup() {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSIGNUP SUCCESSFUL";
        for (int i = 0; i < 3; ++i) {
            cout << "!";
            cout.flush(); // Ensure the ! is printed immediately
            this_thread::sleep_for(chrono::seconds(1));
        }
        cout << "\n";
    }
};

class login {
public:
    static void Login() {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tLOGIN SUCCESSFUL";
        for (int i = 0; i < 3; ++i) {
            cout << "!";
            cout.flush(); // Ensure the ! is printed immediately
            this_thread::sleep_for(chrono::seconds(1));
        }
        cout << "\n";
    }
};

class nametaken {
public:
    static void nameTaken() {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tUSER NAME IS ALREADY TAKEN";
        for (int i = 0; i < 3; ++i) {
            cout << "!";
            cout.flush(); // Ensure the ! is printed immediately
            this_thread::sleep_for(chrono::seconds(1));
        }
        cout << "\n";
    }
};

class invalid {
public:
    static void Invalid() {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tINVALID CREDENTIALS";
        for (int i = 0; i < 3; ++i) {
            cout << "!";
            cout.flush(); // Ensure the ! is printed immediately
            this_thread::sleep_for(chrono::seconds(1));
        }
        cout << "\n";
    }
};

class Item {
protected:
    string title;
    string author;
    int numberOfCopies;
    double price;

public:
    Item(string t, string a, int n, double p) : title(t), author(a), numberOfCopies(n), price(p) {}
    virtual void displayDetails() const = 0;
    virtual ~Item() = default;

    string getTitle() const { return title; }
    int getNumberOfCopies() const { return numberOfCopies; }
    double getPrice() const { return price; }
    void setNumberOfCopies(int n) { numberOfCopies = n; }
};

class Book : public Item {
    string publisher;
    string edition;

public:
    Book(string t, string a, int n, string p, string e, double pr)
        : Item(t, a, n, pr), publisher(p), edition(e) {}

    void displayDetails() const override {
        this_thread::sleep_for(seconds(1));
        cout << "\t\t   ___________\n";
        cout << "\t\t  |   BOOKS   | \n";
        cout << "\t\t  `````````````";
        this_thread::sleep_for(seconds(2));
        cout << "\n--------------------------------------------------\n";
        cout << "\nBook: " << title << "\nAuthor: " << author << "\nPublisher: " << publisher << "\nEdition: " << edition << "\nCopies: " << numberOfCopies << "\nPrice: $" << price << endl;
        cout << "--------------------------------------------------\n";
    }
};

class Magazine : public Item {
    string issue;

public:
    Magazine(string t, string a, int n, string i, double pr)
        : Item(t, a, n, pr), issue(i) {}

    void displayDetails() const override {
        this_thread::sleep_for(seconds(1));
        cout << "\t\t  ______________\n";
        cout << "\t\t |   MAGAZINE   | \n";
        cout << "\t\t ````````````````";
        this_thread::sleep_for(seconds(2));
        cout << "\n--------------------------------------------------\n";
        cout << "\nTitle: " << title << "\nAuthor: " << author << "\nIssue: " << issue << "\nCopies: " << numberOfCopies << "\nPrice: $" << price << endl;
        cout << "--------------------------------------------------\n";
    }
};

class ResearchJournal : public Item {
    string journalName;

public:
    ResearchJournal(string t, string a, int n, string jn, double pr)
        : Item(t, a, n, pr), journalName(jn) {}

    void displayDetails() const override {
        this_thread::sleep_for(seconds(1));
        cout << "\t\t ______________________\n";
        cout << "\t\t|   RESEARCH JOURNAL   | \n";
        cout << "\t\t````````````````````````";
        this_thread::sleep_for(seconds(2));
        cout << "\n--------------------------------------------------\n";
        cout << "\nTitle: " << title << "\nAuthor: " << author << "\nJournal: " << journalName << "\nCopies: " << numberOfCopies << "\nPrice: $" << price << endl;
        cout << "--------------------------------------------------\n";
    }
};

class FYPThesis : public Item {
    string supervisor;

public:
    FYPThesis(string t, string a, int n, string s, double pr)
        : Item(t, a, n, pr), supervisor(s) {}

    void displayDetails() const override {
        this_thread::sleep_for(seconds(1));
        cout << "\t\t ______________________\n";
        cout << "\t\t|      FYP THESIS      |\n";
        cout << "\t\t````````````````````````";
        this_thread::sleep_for(seconds(2));
        cout << "\n--------------------------------------------------\n";
        cout << "Type: FYP Thesis\n";
        cout << "Title: " << title << "\nAuthor: " << author << "\nSupervisor: " << supervisor << "\nCopies: " << numberOfCopies << "\nPrice: $" << price << endl;
        cout << "--------------------------------------------------\n";
    }
};

class Date {
    int dd, mm, yy;

public:
    Date() : dd(1), mm(1), yy(2000) {}

    void setDate() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> dd >> mm >> yy;
    }

    void rectifyDate() {
        // Add logic to correct the date if needed
    }

    void showDate() const {
        cout << "Current Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

class Menu {
    vector<Item*> items;
    map<string, string> adminUsers;
    map<string, string> normalUsers;
    Date currentDate;
    string currentAdmin;
    string currentUser;

public:
    Menu() {
        loadDefaultItems();
    }

    ~Menu() {
        for (auto item : items) {
            delete item;
        }
    }

    void loadDefaultItems() {
        items.push_back(new Book("C++ Programming", "Bjarne Stroustrup", 5, "Addison-Wesley", "4th", 59.99));
        items.push_back(new Book("The Mythical Man-Month", "Frederick P. Brooks Jr.", 3, "Addison-Wesley", "Anniversary Edition", 45.99));
        items.push_back(new Book("Clean Code", "Robert C. Martin", 4, "Prentice Hall", "1st", 49.99));
        items.push_back(new Book("Design Patterns", "Erich Gamma", 6, "Addison-Wesley", "1st", 54.99));
        items.push_back(new Book("The Pragmatic Programmer", "Andrew Hunt", 7, "Addison-Wesley", "20th Anniversary Edition", 39.99));

        items.push_back(new Magazine("National Geographic", "Multiple Authors", 10, "July 2023", 5.99));
        items.push_back(new Magazine("Time", "Multiple Authors", 8, "August 2023", 4.99));
        items.push_back(new Magazine("The Economist", "Multiple Authors", 12, "September 2023", 6.99));

        items.push_back(new ResearchJournal("Nature", "Multiple Authors", 2, "Nature Publishing Group", 89.99));
        items.push_back(new ResearchJournal("IEEE Transactions", "Multiple Authors", 3, "IEEE", 79.99));

        items.push_back(new FYPThesis("AI in Healthcare", "John Doe", 1, "Dr. Smith", 0.00));
        items.push_back(new FYPThesis("Blockchain Security", "Jane Doe", 1, "Dr. Brown", 0.00));
    }

    void adminActions() {
        LMS::heading();
        system("cls");
        loading::loadingScreen();
        system("cls");
        LMS::heading();
        string username, password;
        cout << "Admin Login\n";
        cout << "\nUsername: ";
        cin >> username;
        cout << "\nPassword: ";
        cin >> password;

        if (adminUsers.find(username) != adminUsers.end() && adminUsers[username] == password) {
            currentAdmin = username;
            login::Login();
            system("cls");
            adminMenu();
        }
        else {
            invalid::Invalid();
            system("cls");
        }
    }

    void adminSignup() {
        LMS::heading();
        system("cls");
        loading::loadingScreen();
        system("cls");
        LMS::heading();
        string username, password;
        cout << "Admin Signup\n";
        cout << "\nUsername: ";
        cin >> username;
        cout << "\nPassword: ";
        cin >> password;

        if (adminUsers.find(username) == adminUsers.end()) {
            adminUsers[username] = password;
            signUp::signup();
            system("cls");
        }
        else {
            nametaken::nameTaken();
            system("cls");
        }
    }

    void adminMenu() {
        int choice;
        do {
            LMS::heading();
            cout << "\n\n\n1. Add Item\n\n2. View All Items\n\n3. Modify Item\n\n4. Delete Item\n\n5. Logout\n\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: addItem(); break;
                case 2: viewAllItems(); break;
                case 3: modifyItem(); break;
                case 4: deleteItem(); break;
                case 5: cout << "Logging out..." << endl; break;
                default: cout << "Invalid choice! Please try again." << endl;
            }
        } while (choice != 5);
    }

    void addItem() {
        LMS::heading();
        string title, author, publisher, edition, issue, journalName, supervisor;
        int numberOfCopies, itemType;
        double price;

        cout << "Add Item\n";
        cout << "1. Book\n2. Magazine\n3. Research Journal\n4. FYP Thesis\nEnter item type: ";
        cin >> itemType;

        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter number of copies: ";
        cin >> numberOfCopies;
        cout << "Enter price: $";
        cin >> price;

        if (itemType == 1) {
            cout << "Enter publisher: ";
            cin.ignore();
            getline(cin, publisher);
            cout << "Enter edition: ";
            getline(cin, edition);
            items.push_back(new Book(title, author, numberOfCopies, publisher, edition, price));
        }
        else if (itemType == 2) {
            cout << "Enter issue: ";
            cin.ignore();
            getline(cin, issue);
            items.push_back(new Magazine(title, author, numberOfCopies, issue, price));
        }
        else if (itemType == 3) {
            cout << "Enter journal name: ";
            cin.ignore();
            getline(cin, journalName);
            items.push_back(new ResearchJournal(title, author, numberOfCopies, journalName, price));
        }
        else if (itemType == 4) {
            cout << "Enter supervisor: ";
            cin.ignore();
            getline(cin, supervisor);
            items.push_back(new FYPThesis(title, author, numberOfCopies, supervisor, price));
        }
        else {
            cout << "Invalid item type selected!\n";
        }
    }

    void viewAllItems() const {
        LMS::heading();
        for (const auto& item : items) {
            item->displayDetails();
        }
    }

    void modifyItem() {
        LMS::heading();
        string title;
        cout << "Modify Item\n";
        cout << "Enter title of the item to modify: ";
        cin.ignore();
        getline(cin, title);

        for (auto& item : items) {
            if (item->getTitle() == title) {
                int newCopies;
                double newPrice;
                cout << "Enter new number of copies: ";
                cin >> newCopies;
                cout << "Enter new price: $";
                cin >> newPrice;
                item->setNumberOfCopies(newCopies);
                item->setNumberOfCopies(newPrice);
                cout << "Item modified successfully!\n";
                return;
            }
        }
        cout << "Item not found!\n";
    }

    void deleteItem() {
        LMS::heading();
        string title;
        cout << "Delete Item\n";
        cout << "Enter title of the item to delete: ";
        cin.ignore();
        getline(cin, title);

        auto it = remove_if(items.begin(), items.end(), [&title](Item* item) {
            return item->getTitle() == title;
        });

        if (it != items.end()) {
            delete *it;
            items.erase(it, items.end());
            cout << "Item deleted successfully!\n";
        }
        else {
            cout << "Item not found!\n";
        }
    }

    void userActions() {
        LMS::heading();
        system("cls");
        loading::loadingScreen();
        system("cls");
        LMS::heading();
        string username, password;
        cout << "User Login\n";
        cout << "\nUsername: ";
        cin >> username;
        cout << "\nPassword: ";
        cin >> password;

        if (normalUsers.find(username) != normalUsers.end() && normalUsers[username] == password) {
            currentUser = username;
            login::Login();
            system("cls");
            userMenu();
        }
        else {
            invalid::Invalid();
            system("cls");
        }
    }

    void userSignup() {
        LMS::heading();
        system("cls");
        loading::loadingScreen();
        system("cls");
        LMS::heading();
        string username, password;
        cout << "User Signup\n";
        cout << "\nUsername: ";
        cin >> username;
        cout << "\nPassword: ";
        cin >> password;

        if (normalUsers.find(username) == normalUsers.end()) {
            normalUsers[username] = password;
            signUp::signup();
            system("cls");
        }
        else {
            nametaken::nameTaken();
            system("cls");
        }
    }

    void userMenu() {
        int choice;
        do {
            LMS::heading();
            cout << "\n\n\n1. View All Items\n\n2. Logout\n\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: viewAllItems(); break;
                case 2: cout << "Logging out..." << endl; break;
                default: cout << "Invalid choice! Please try again." << endl;
            }
        } while (choice != 2);
    }

    void mainMenu() {
        int choice;
        do {
            LMS::heading();
            cout << "\n\n\n1. Admin Login\n\n2. User Login\n\n3. Admin Sign Up\n\n4. User Sign Up\n\n5. Exit\n\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: adminActions(); break;
                case 2: userActions(); break;
                case 3: adminSignup(); break;
                case 4: userSignup(); break;
                case 5: cout << "Exiting..." << endl; break;
                default: cout << "Invalid choice! Please try again." << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    Menu menu;
    menu.mainMenu();
    return 0;
}
