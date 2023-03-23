#include <iostream>
#include <cstring>
//INKI1033

using namespace std;

int main() {
    // Deklariranje na niza i pokazuvac
    char song[] = "What you want- Evanscence";
    char* songPtr = song;
    
    cout << "\n**********************\n" << endl;
    cout << "Pesna: " << song << endl;
    cout << "Cela sodrzina - p: " << songPtr << endl;
    cout << "Pocetna pozicija - p: " << *songPtr << endl;
    cout << "Adresa - p: " << &songPtr << endl;

    // Pronaogjanje na izveduvachot vo song nizata
    const char* performer = strstr(song, "-");
    // Premestuvanje na pokazuvach do imeto na izveduvachot
    performer += strlen("-");
    int c = performer - songPtr;
    
    cout << "\n**********************\n" << endl;
    cout << "Premestuvanje do ime na izveduvach- p+" << c <<": " << endl;
    cout << "Sodrzina po premesten pocetok: " << performer << endl;
    cout << "Adresa od koja pocnuva segasna sodrzina: " << &performer << endl;

    return 0;
}