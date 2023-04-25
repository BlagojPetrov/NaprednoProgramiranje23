#include <iostream>
#include <cstdlib>
#include <ctime>
//INKI1033
using namespace std;

int main() {
    srand(time(NULL));
    int randomNumber = rand() % 100 + 1; // Generira random broj pomegju 100 i 1
    int userGuess; // So ova deklarira poromenlivi za da ja zadrzat pretpostavkata na korisnikot i brojot na obidi sto se potrebni za da se pogodi tocniot broj.
    int numAttempts = 0;

    cout << "Pogodi go brojot koj go zamisliv pomegju 100 i 1?" << endl;

    do {
        cout << "Vnesi go brojot: ";
        cin >> userGuess;
        numAttempts++;

        if (userGuess < randomNumber) { //proveruva dali pretpostavkata e mnogu niska ili previsoka vo sporedba so generiraniot broj.
            cout << "Tvojot broj e mnogu mal. Vnesi povtorno." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Tvojot broj e mnogu golem. Vnesi povtorno." << endl;
        } else {
            cout << "Bravo, go pogodivte brojot vo " << numAttempts << " obidi!" << endl;
        }
    } while (userGuess != randomNumber); //go zatvora ciklusot "do-while" i prodolzuva da se vrti dodeka korisnikot ne go pogodi tocniot broj.

    return 0;
}
