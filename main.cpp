// COMSC-210 | Lab 11 | Christine Susic

#include <iostream>
using namespace std;

const int SIZE = 4;

struct Inventory {
    string name;
    int partNum;
    int* quantity = new int[SIZE];
    
    ~Inventory() {
        if (quantity) 
            delete [] quantity;
        quantity = nullptr;
    }
}

//function prototypes
void inputInventory(Inventory *);
void displayInventory(Inventory *);

int main() {
    
    return 0;
}

void inputInventory(Inventory * iptr) {
    int counter = 0; //number counter
    for (int i = 0; i < SIZE; i++) {
        cout << "Inventory #" << counter++ << ":";
        cout << "Name: ";
        getline(cin, iptr->name)
        cout << "Part Number: ";
        cin >> iptr->partNum;
        sptr->quantity = new int[SIZE];
        for 
        cout << "Quantity: ";
        cin >> iptr->quantity[i];
    }