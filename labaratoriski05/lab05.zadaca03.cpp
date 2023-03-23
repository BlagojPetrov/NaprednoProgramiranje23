#include <iostream>
#include <cmath>
using namespace std;
//INKI1033

const int x = (int)'R'; // ASCII vrednost na 'R'
const int y = (int)'M'; // ASCII vrednost na 'M'

// Funkcija za sobiranje
int add(int a, int b) {
    return a + b;
}

// Funkcija za odzemanje
int subtract(int a, int b) {
    return a - b;
}

// Funkcija za delenje
float divide(int a, int b) {
    return (float)a / (float)b;
}

// Funkcija za stepenuvanje so koristenje na funkcijata pow()
double exponentiate(int a, int b) {
    return pow((double)a, (double)b);
}

// Void funkcija so pokazuvac za presmetuvanje
void calculate(int a, int b, void (*operation)(int, int)) {
    operation(a, b);
}


// Funkcii za printanje
void print_sum(int a, int b) {
    int sum = add(a, b);
    cout << "Sum of " << a << " and " << b << " is " << sum << endl;
}

void print_difference(int a, int b) {
    int diff = subtract(a, b);
    cout << "Difference between " << a << " and " << b << " is " << diff << endl;
}

void print_quotient(int a, int b) {
    float quotient = divide(a, b);
    cout << "Quotient of " << a << " and " << b << " is " << quotient << endl;
}

void print_power(int a, int b) {
    double power = exponentiate(a, b);
    cout << a << " raised to the power of " << b << " is " << power << endl;
}

int main() {
    int a = x, b = y;
    void (*op)(int, int);
    op = &print_sum;
    calculate(a, b, op);
    op = &print_difference;
    calculate(a, b, op);
    op = &print_quotient;
    calculate(a, b, op);
    op = &print_power;
    calculate(a, b, op);
    return 0;
}