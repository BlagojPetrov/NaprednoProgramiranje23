#include <iostream>
using namespace std;
//INKI 1033
//Vo kodot definirame "enum" tip narecen mesec koj ima 12 konstantni sto odgovaraat na 
//mesecite vo godinata. Potoa koristime "for" za da se ispecatat site meseci koristejki "switch".
//Potoa korisnikot vnesuva mesec (kako broj) i go skladira vo promenlivata. Potoa pak koristeme
//"switch" za da se odredi vremeto od godinata i da se odredi koj broj vo godinata e toj mesec.
//Koristev "case" za godisnite vreminja.

enum Mesec {
    Januari=1, Februari, Mart, April, Maj, Juni,
    Juli, Avgust, Septemvri, Oktomvri, Noemvri, Dekemvri
};

int main() {
    
    for (int i = Januari; i <= Dekemvri; i++) {
        cout << i << ": ";
        switch (i) {
            case Januari: cout << "Januari"; break;
            case Februari: cout << "Februari"; break;
            case Mart: cout << "Mart"; break;
            case April: cout << "April"; break;
            case Maj: cout << "Maj"; break;
            case Juni: cout << "Juni"; break;
            case Juli: cout << "Juli"; break;
            case Avgust: cout << "Avgust"; break;
            case Septemvri: cout << "Septemvri"; break;
            case Oktomvri: cout << "Oktomvri"; break;
            case Noemvri: cout << "Noemvri"; break;
            case Dekemvri: cout << "Dekemvri"; break;
        }
        cout << endl;
    }

    
    int mesec;
    cout << "Vnesi mesec (broj): ";
    cin >> mesec;

    switch (mesec) {
        case Dekemvri:
        case Januari:
        case Februari:
            cout << "Zimo, ";
            break;
        case Mart:
        case April:
        case Maj:
            cout << "Prolet, ";
            break;
        case Juni:
        case Juli:
        case Avgust:
            cout << "Leto, ";
            break;
        case Septemvri:
        case Oktomvri:
        case Noemvri:
            cout << "Esen, ";
            break;
        default:
            cout << "Nepostoecki mesec. ";
            return 0;
            break;
    }
    cout << "mesec vo godinata " << mesec << endl;

    return 0;
}