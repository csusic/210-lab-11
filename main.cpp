// COMSC-210 | Lab 11 | Christine Susic

#include <iostream>
using namespace std;

const int INVENTORY_SIZE = 2;
const int QTY_SIZE = 3;

struct Inventory {
    string name;
    int partNum;
    int* qty = new int[INVENTORY_SIZE];
    
    ~Inventory() {
        if (qty) 
            delete [] qty;
        qty = nullptr;
    }
};

//function prototypes
void inputInventory(Inventory *);
void displayInventory(Inventory *);

int main() {
    Inventory *qty = new Inventory[INVENTORY_SIZE];
    
    for (int i = 0; i < INVENTORY_SIZE; i++)
        inputInventory(&qty[i]);
    
    for (int i = 0; i < INVENTORY_SIZE; i++)
        displayInventory(&qty[i]);
    
    return 0;
}

void inputInventory(Inventory * iptr) {
    int counter = 1; //number counter
    for (int i = 0; i < QTY_SIZE; i++) {
        cout << "Inventory #" << counter++ << ":\n";
        cout << "Name: ";
        getline(cin, iptr->name);
        cout << "Part Number: ";
        cin >> iptr->partNum;
        iptr->qty = new int[QTY_SIZE];
        cout << "Quantity: ";
        cin >> iptr->qty[i];
        cout << endl;
    }
}
    
void displayInventory(Inventory * iptr) {
    int counter = 1; //number counter
    for (int i = 0; i < QTY_SIZE; i++) {
        cout << "Inventory Summary" << endl; 
        cout << "Inventory #" << counter++ << ":";
        cout << "Name: " << iptr->name << endl;
        cout << "Part Number: " << iptr->partNum << endl;
        cout << "Quantity: " << iptr->qty[i] << endl;
    }
}