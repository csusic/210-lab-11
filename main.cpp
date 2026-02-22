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