#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
//INKI1033
using namespace std;

struct Covek {
    int redbroj;
    string ime;
    float poeni;

    bool operator<(const Covek& other) const {
        return poeni > other.poeni;
    }
};

int main() {
    vector<Covek> lugje;
    lugje.push_back({1, "Marko", 10.5});
    lugje.push_back({2, "Ana", 8.0});
    lugje.push_back({3, "Ivan", 9.3});

    cout << "Vektorskite sodrzini kako sto se vneseni:" << endl;
    for (auto it = lugje.begin(); it != lugje.end(); ++it) {
        cout << it->redbroj << " " << it->ime << " " << it->poeni << endl;
    }

    sort(lugje.begin(), lugje.end());

    cout << "Vektorskite sodrzini podredeni po cena po opagjacki redosled:" << endl;
    for (auto it = lugje.begin(); it != lugje.end(); ++it) {
        cout << it->redbroj << " " << it->ime << " " << it->poeni << endl;
    }

    ofstream outFile("INKI1033.Blagoj");
    for (auto it = lugje.begin(); it != lugje.end(); ++it) {
        outFile << it->redbroj << " " << it->ime << " " << it->poeni << endl;
    }
    outFile.close();

    return 0;
}
