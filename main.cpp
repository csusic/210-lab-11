// COMSC-210 | Lab 11 | Christine Susic

#include <iostream>
using namespace std;

//const size integers for inventory and color
const int INVENTORY_SIZE = 3;
const int COLOR_SIZE = 4;

//inventory struct to hold name, partNum, and color array
struct Inventory {
    string name;
    int partNum;
    int* color = new int[INVENTORY_SIZE];
    
    //delete memory and set pointer to null
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
    //pointer to inventory struct
    Inventory *data = new Inventory[INVENTORY_SIZE];
    
    //input inventory function
    for (int i = 0; i < INVENTORY_SIZE; i++)
        inputInventory(&data[i]);
    
    //display inventory function
    for (int i = 0; i < INVENTORY_SIZE; i++)
        displayInventory(&data[i]);
    
    return 0;
}

//input inventory function
void inputInventory(Inventory * iptr) {
    //header
    cout << "Inventory" << endl;
    //input name
    cout << "Name: ";
    getline(cin, iptr->name);
    //input part number
    cout << "Part Number: ";
    cin >> iptr->partNum;
    //input color array
    iptr->color = new int[COLOR_SIZE];
    for (int i = 0; i < COLOR_SIZE; i++) {
        cout << "Color #" << i + 1 << " : ";
        cin >> iptr->color[i]; 
    }
    cout << endl;
    cin.ignore();
}

//display inventory function
void displayInventory(Inventory * iptr) {
    //header
    cout << "Inventory Summary" << endl; 
    //output name
    cout << "Name: " << iptr->name << endl;
    //output part number
    cout << "Part Number: " << iptr->partNum << endl;
    //output color array
    for (int i = 0; i < COLOR_SIZE; i++) {
        cout << "Color #" << i + 1 << " : ";
        cout << iptr->color[i] << endl;
    }
    cout << endl;
}   