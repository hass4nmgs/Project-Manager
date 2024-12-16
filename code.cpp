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

