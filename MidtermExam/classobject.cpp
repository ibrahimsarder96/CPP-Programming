#include<bits/stdc++.h>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
main()
{
     Car myCar; // Declaration of an object of class Car

    myCar.brand = "Toyota"; // Assign values to the object's data members
    myCar.model = "Camry";
    myCar.year = 2022;

    myCar.displayInfo(); // Call the object's method to display information

  return 0;
}