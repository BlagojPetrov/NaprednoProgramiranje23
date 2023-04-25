#include <iostream>
#include <string>
#include <ctype.h>
//INKI1033
/* Zapocnuvame so vklucuvanje na potrebnite biblioteki, potoa deklarirame variabli
za recenicata, brojot na mali bukvi, golemi bukvi, brojki, specialni znaci, i brojot
na karakteri. So "getline" mu kazuvame na korisnikot da vnese recenica, go naogjame
brojot na karakteri so "length()" so funkciite islower(), isupper() i isdigit() od "ctype"
proveruva dali sekoj znak e mala,golema, broj ili poseben znak.*/
using namespace std;

int main() {
    string sentence;
    int lowercase = 0, uppercase = 0, numbers = 0, special = 0, length = 0;

    cout << "Vnesi recenica: ";
    getline(cin, sentence);

    length = sentence.length();

    for (int i = 0; i < length; i++) {
        if (islower(sentence[i])) {
            lowercase++;
        }
        else if (isupper(sentence[i])) {
            uppercase++;
        }
        else if (isdigit(sentence[i])) {
            numbers++;
        }
        else {
            special++;
        }
    }

    cout << "Mali bukvi: " << lowercase << endl;
    cout << "Golemi bukvi: " << uppercase << endl;
    cout << "Broevi: " << numbers << endl;
    cout << "Specijalni znaci: " << special << endl;
    cout << "Broj na karakteri: " << length << endl;

    return 0;
}