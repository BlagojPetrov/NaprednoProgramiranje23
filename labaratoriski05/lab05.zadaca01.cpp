#include <iostream>
#include <string>

using namespace std;

// Deklariranje funkcija koja gi menuva prvite 4 karakteri so simboli so dopolnitelni
// uslovi
string replaceSymbols(string str) {
    string symbols = "!@#$%^&*()_+";
    if (str.length() < 4) {
        str.replace(0, 2, symbols.substr(0, 2));
    } else if (str.length() < 5) {
        str.replace(0, 3, symbols.substr(0, 3));
    } else {
        str.replace(0, 4, symbols.substr(0, 4));
    }
    return str;
}

int main() {
    // Deklariranje na stringovite firstName i lastName
    string firstName = "Ramona";
    string lastName = "Markoska";
    
    // Pecatenje na dvata stringovi
    cout << "Original names: " << firstName << " " << lastName << endl;

    // Instanciranje na funkcijata replaceSymbols
    string firstNameModified = replaceSymbols(firstName);
    string lastNameModified = replaceSymbols(lastName);

    // Pecatenje na modificiranite stringovi
    cout << "Modified names: " << firstNameModified << " " << lastNameModified << endl;

    return 0;
}