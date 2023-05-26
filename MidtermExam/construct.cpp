#include<bits/stdc++.h>
using namespace std;
  class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int calculateArea() {
        return length * width;
    }
};

main()
{
    Rectangle rect1; // Creating an object using the default constructor
    cout << "Area of rect1: " << rect1.calculateArea() << endl;

    Rectangle rect2(4, 5); // Creating an object using the parameterized constructor
    cout << "Area of rect2: " << rect2.calculateArea() << endl;

  return 0;
}