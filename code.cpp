#include <iostream>
using namespace std;

const int MAX_ITEMS = 1000;

// arrays declared to store details about item
string itemNames[MAX_ITEMS];
int itemQuantities[MAX_ITEMS];
double itemPrices[MAX_ITEMS];

// Function to add items to inventory
void addItem(int &count) {
    if (count < MAX_ITEMS) {
        cout << "Enter item name: ";
        cin >> itemNames[count];
        cout << "Enter item quantity: ";
        cin >> itemQuantities[count];
        cout << "Enter item price: ";
        cin >> itemPrices[count];
        count++;
        cout << "Item added successfully!" << endl;
    } 
    else {
        cout << "Inventory is full!" << endl;
    }
}

// Function to display all items in inventory
void displayInventory(int count) {
    if (count == 0) {
        cout << "Inventory is empty!" << endl;
    } 
    else {
        cout << "Inventory list:" << endl;
        for (int i = 0; i < count; i++) {
            cout << "Item " << i + 1 << ": " << itemNames[i]
                 << ", Quantity: " << itemQuantities[i]
                 << ", Price: " << itemPrices[i] << endl;
        }
    }
}

// Function to search for items in inventory
void searchItem(int count) {
    string name;
    cout << "Enter item name to search: ";
    cin >> name;
    for (int i = 0; i < count; i++) {
        if (itemNames[i] == name) {
            cout << "Item found: " << itemNames[i]
                 << ", Quantity: " << itemQuantities[i]
                 << ", Price: " << itemPrices[i] << endl;
            return;
        }
    }
    cout << "Item not found!" << endl;
}

// Function to edit existing items in inventory
void editItem(int count) {
    string name;
    cout << "Enter item name to edit: ";
    cin >> name;
    for (int i = 0; i < count; i++) {
        if (itemNames[i] == name) {
            cout << "Enter new quantity: ";
            cin >> itemQuantities[i];
            cout << "Enter new price: ";
            cin >> itemPrices[i];
            cout << "Item updated successfully!" << endl;
            return;
        }
    }
    cout << "Item not found!" << endl;
}

// Function to delete items from inventory
void deleteItem(int &count) {
    string name;
    cout << "Enter item name to delete: ";
    cin >> name;
    for (int i = 0; i < count; i++) {
        if (itemNames[i] == name) {
            for (int j = i; j < count - 1; j++) {
                itemNames[j] = itemNames[j + 1];
                itemQuantities[j] = itemQuantities[j + 1];
                itemPrices[j] = itemPrices[j + 1];
            }
            count--;
            cout << "Item deleted successfully!" << endl;
            return;
        }
    }
    cout << "Item not found!" << endl;
}

int main() {
    int count = 0; 

    int choice;
    do {
        cout << "\nInventory Management System" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Display Inventory" << endl;
        cout << "3. Search Item" << endl;
        cout << "4. Edit Item" << endl;
        cout << "5. Delete Item" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addItem(count);
                break;
            case 2:
                displayInventory(count);
                break;
            case 3:
                searchItem(count);
                break;
            case 4:
                editItem(count);
                break;
            case 5:
                deleteItem(count);
                break;
            case 6:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } 
    while (choice != 6);

    return 0;
}
