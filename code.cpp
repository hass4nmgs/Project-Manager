#include <iostream>
using namespace std;

const int MAX_ITEMS = 1000;

string itemNames[MAX_ITEMS];
int itemQuantities[MAX_ITEMS];
double itemPrices[MAX_ITEMS];

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

