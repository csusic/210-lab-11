// COMSC-210 | Lab 11 | Christine Susic

#include <iostream>
#include <string>
using namespace std;

//const size integers for cars and color
const int CAR_NUM = 3;
const int COLOR_NUM = 4;

//car struct to hold name, vehicleNum, and color array
struct Car {
    string name;
    int vehicleNum;
    int* color = new int[CAR_NUM];
    
    //delete memory and set pointer to null
    ~Car() {
        if (color) 
            delete [] color;
        color = nullptr;
    }
};

//function prototypes
void inputCar(Car *);
void displayCar(Car *);

int main() {
    //pointer to car struct
    Car *data = new Car[CAR_NUM];
    
    //input car struct
    for (int i = 0; i < CAR_NUM; i++)
        inputCar(&data[i]);
    
    //display car struct
    for (int i = 0; i < CAR_NUM; i++)
        displayCar(&data[i]);
    
    return 0;
}

//input car function
void inputCar(Car * iptr) {
    //header
    cout << "Car" << endl;
    //input name
    cout << "Name: ";
    getline(cin, iptr->name);
    //input vechicle number
    cout << "Vehicle Number: ";
    cin >> iptr->vehicleNum;
    //input color array
    iptr->color = new int[COLOR_NUM];
    for (int i = 0; i < COLOR_NUM; i++) {
        cout << "Color #" << i + 1 << " : ";
        cin >> iptr->color[i]; 
    }
    cout << endl;
    cin.ignore();
}

//display car function
void displayCar(Car * iptr) {
    //header
    cout << "Car Summary" << endl; 
    //output name
    cout << "Name: " << iptr->name << endl;
    //output vechicle number
    cout << "Vehicle Number: " << iptr->vehicleNum << endl;
    //output color array
    for (int i = 0; i < COLOR_NUM; i++) {
        cout << "Color #" << i + 1 << " : ";
        cout << iptr->color[i] << endl;
    }
    cout << endl;
}   