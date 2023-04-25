#include <iostream>
#include <fstream> 
//INKI1033
using namespace std;

int main() {
    string filename, text;
    cout << "Vnesi go imeto na fajlot: ";
    getline(cin, filename);

    cout << "Vnesi tekst za da se napisi vo fajlot: ";
    getline(cin, text);

    ofstream outfile(filename, ios::app);
    if (!outfile.is_open()) {
        outfile.open(filename);
    }

    // Napisan tekst za fajlot
    outfile << text << endl;

    // Da se zatvori fajlot
    outfile.close();

    cout << "Fajlot \"" << filename << "\" e napisan." << endl;

    return 0;
}
