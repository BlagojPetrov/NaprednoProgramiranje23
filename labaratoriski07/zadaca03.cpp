#include <iostream>
#include <cmath>
using namespace std;
//INKI 1033 (?????? 3)
/*Klasata "Shape" e definirana so zastiteni clenski promenlivi
sirina i visina i public method.
setDimensions () za postavuvanje na dimenziite na oblikot
Dve klasi, "Rectangle" i "Triangle", nasleduvaat od klasata "Shape"
so pomos na specifikatorot za "public access"
Ovie klasi imaat svoi metodi "area()" koi go otfrlaat metodot "area()" na klasta "Shape"
Funkcijata main() sozdava objekti od klasite "Rectangle" i "Triangle". 
Metodot setDimensions() se povikuva na objektite za da gi postavi dimenziite na formite.
Metodot area() se povikuva na objektite da ja presmetaat i ispecatat
plostinata na pravoagolnikot i triagolnikot*/
//Ja definira klasata "shape" za da se demonstrira konceptot na "Hierarchical Inheritance in CPP"
class Shape {
// Variablite na "protected member" se dostapni samo vo ramkite na klasata i nejzinite desendetni klasi.
protected:
    float width, height;
    //public members are accessible everywhere
public:
    void setDimensions(float w, float h) {
        cout << "Setting the Dimensions using the parent Class: Shape\n";
        cout << "The dimensions are: " << w << " and " << h << "\n\n";
        width = w;
        height = h;
    }
};

//Class Rectangle inherites the Shape class
class Rectangle : public Shape {
public:
    //Method Overriding
    float area() {
        return (width * height);
    }

};

//Class Triangle inherites the Shape class
class Triangle : public Shape {
    //private member variables are only accessible within the class
private:
    float hypotenuse;

public:
    //Method Overriding
    float area() {
        return (width * height / 2);
    }

};

//Defining the main method to access the members of the class
int main() {
    cout << " ===== Program to demonstrate the concept of Hierarchical Inheritance in CPP ===== \n\n";
    //Declaring the Class objects to access the class members
    Rectangle rectangle;
    Triangle triangle;

    rectangle.setDimensions(13, 3);
    triangle.setDimensions(1, 33);

    cout << "Area of the Rectangle computed using Rectangle Class is : " << rectangle.area() << "\n\n";

    cout << "Area of the Triangle computed using Triangle Class is: " << triangle.area() << "\n";

    return 0;
}