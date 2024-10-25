#include <iostream>
using namespace std;

class Shape {
public:
    int area(int length, int width) {
        return length * width;
    }

    int area(int radius) {
        return 22 * radius * radius / 7; 
    }
};

int main() {
    Shape shape;

    int length, width, radius;

    cout << "Enter length of rectangle = ";
    cin >> length ;
    
    cout<<"Enter width of rectangle = ";
    cin>>width ;

    cout << "Area of rectangle = " << shape.area(length, width) << endl;

    cout << "Enter radius of circle = ";
    cin >> radius;

    cout << "Area of circle: " << shape.area(radius) << endl;

    return 0;
}	
