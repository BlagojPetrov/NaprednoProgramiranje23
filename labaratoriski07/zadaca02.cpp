#include <iostream>
using namespace std;
//INKI 1033 (?????? 02)

/* Definira klasa narecena "operations" so 5 javni funkcii koi vrsat
razlicni aritmeticki operacii na dva celi broevi */
class operations {
public:
    int num1, num2;

    void input() {
        cout << "Enter two numbers to perform operations on:\n";
        cin >> num1 >> num2;
    }

    void addition() {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void subtraction() {
        cout << "Subtraction = " << num1 - num2 << endl;
    }

    void multiplication() {
        cout << "Multiplication = " << num1 * num2 << endl;
    }

    void division() {
        cout << "Division = " << (float) num1 / num2 << endl;
    }
};
/*Ovoj kod ja definira glavnata funkcija koja sozdava instanca od
klasata "operations" i gi povikuva nejzinite funkcii za izvrsuvanje
na operaciite na dva broja.*/
int main() {
    cout << " ===== Program to perform basic operations using Class, in CPP ===== \n\n";
    operations op;
    cout << "Calling the input() function from the main() method\n";
    op.input();
    cout << "\nCalling the addition() function from the main() method\nAddition = ";
    op.addition();
    cout << "\nCalling the subtraction() function from the main() method\nSubtraction = ";
    op.subtraction();
    cout << "\nCalling the multiplication() function from the main() method\nMultiplication = ";
    op.multiplication();
    cout << "\nCalling the division() function from the main() method\nDivision = ";
    op.division();
    cout << "\nExiting the main() method\n\n\n";
    return 0;
}