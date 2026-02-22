// COMSC-210 | Lab 11 | Christine Susic

#include <iostream>
using namespace std;

const int INVENTORY_SIZE = 3;
const int COLOR_SIZE = 4;

struct Inventory {
    string name;
    int partNum;
    int* color = new int[INVENTORY_SIZE];
    
    ~Inventory() {
        if (color) 
            delete [] color;
        color = nullptr;
    }
};

//function prototypes
void inputInventory(Inventory *);
void displayInventory(Inventory *);

int main() {
    Inventory *color = new Inventory[INVENTORY_SIZE];
    
    for (int i = 0; i < INVENTORY_SIZE; i++)
        inputInventory(&color[i]);
    
    for (int i = 0; i < INVENTORY_SIZE; i++)
        displayInventory(&color[i]);
    
    return 0;
}

void inputInventory(Inventory * iptr) {
    int counter = 1; //number counter
    //output header
    cout << "Inventory #" << counter++ << ":\n";
    //input name
    cout << "Name: ";
    getline(cin, iptr->name);
    //input part number
    cout << "Part Number: ";
    cin >> iptr->partNum;
    iptr->color = new int[COLOR_SIZE];
    //input color
    for (int i = 0; i < COLOR_SIZE; i++) {
        cout << "Color #: " << counter++;
        cin >> iptr->color[i]; 
    }
    cout << endl;
    cin.ignore();
}

//display inventory function
void displayInventory(Inventory * iptr) {
    int counter = 1; //number counter
    //output headers
    cout << "Inventory Summary" << endl; 
    cout << "Inventory #" << counter++ << ":";
    //output name
    cout << "Name: " << iptr->name << endl;
    //output part number
    cout << "Part Number: " << iptr->partNum << endl;
    //output color
    for (int i = 0; i < COLOR_SIZE; i++) {
        cout << "Color #: " << counter++;
        cout << iptr->color[i] << endl;
    }
}