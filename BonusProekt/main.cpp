#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int secretNumber = rand() % 10 + 1;
    int playerMoney = 100;
    int bet;

    cout << "Dobredojdovte vo Casino Number Guessing Game!" << endl;

    while (playerMoney > 0)
    {
        cout << " Imate " << playerMoney << " pari. Kolku sakate da vlozite? (1-" << playerMoney << ")?: ";
        cin >> bet;

        if (cin.fail())
        {
            cout << "Nevazecki. Obidi se povtorno." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (bet < 1 || bet > playerMoney)
        {
            cout << "Vasiot oblog e nevazecki. Obidi se povtorno." << endl;
            continue;
        }

        int guess;
        cout << "Vnesi go tvojot broj (pomegju 1 i 10): ";
        cin >> guess;

        if (cin.fail())
        {
            cout << "Nevazecki. Obidi se povtorno." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (guess < 1 || guess > 10)
        {
            cout << "Vasiot oblog e nevazecki. Obidi se povtorno." << endl;
            continue;
        }

        if (guess == secretNumber)
        {
            cout << "Cestitki! Go pogodivte brojot i dobivte " << bet << " paricki." << endl;
            playerMoney += bet;
            secretNumber = rand() % 10 + 1;
        }
        else
        {
            cout << "Izvinete, brojot e " << secretNumber << ". Izgubivte " << bet << " paricki." << endl;
            playerMoney -= bet;
        }

        if (playerMoney <= 0)
        {
            cout << "Ostanavte bez paricki. Kraj na igrata." << endl;
            break;
        }
    }

    return 0;
}
