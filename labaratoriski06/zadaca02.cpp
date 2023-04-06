#include <iostream>
#include <time.h>
#include <cstdlib>
//INKI1033
/*Prvo se deklarirani potrebnite dadoteki koi se iostream, time.h i cstdlib. 
6te kocki se deklarirani kako funkcii so iminjata one()two()...
Ovie pecatat graficki prikaz na sekoe lice od kockata
Vo glavnata funkcija se deklariraat nekolku neoznaceni promenlivi
kako sto se "score" "compScore "num1" itn.. Se deklalria
i variablata "letter" od tipot "char" ovaa promenliva se koristi
za skladiranje na input vrednosta od korisnikot za da ja frli kocakta ili da se otkaze od igrata.
Potoa funkcijata srand() se koristi za da se povrze generatorot
na slucaen broj so tekovnoto vreme. "While" se izvrsuva dodeka
korisnikot ne ja vnese bukvata "q" za da izleze od igrata.
Ako zbirot na korisnikot e pogolem od zbirot na kompjuterot
korisnikot pobeduva i negoviot rezultat se zgolemuva, vo 
sprotivno kompjuterot pobeduva. Potoa od korisnikot se bara da stisne na bilo koe kopce od tastaturata
za da prodolze, a ekranot se brise so funkcijata (system). 
Kodot si raboti se dodeka korisnikot ne vnese "q" za da izleze od igrata. 
Otkako ke zavrsi, glavnata funkcija "returns 0" za da pokaze izvrsuvanje.*/

//#include <windows.h>
using namespace std;
void one();
void two();
void three();
void four();
void five();
void six();
//Declare Functions used
int main()
{
short unsigned int score = 0;
short unsigned int compScore = 0;
short unsigned int num = 0;
short unsigned int num2 = 0;
short unsigned int compNum = 0;
short unsigned int compNum2 = 0;
short unsigned int sum = 0;
short unsigned int compSum = 0;
char letter;
//Declare Variables
srand(time(NULL));
while (letter != 'q')
{
cout << "Your Score: " << score << endl;
cout << "computer's Score: " << compScore << endl << endl;
cout << "Press r to roll or q to quit: ";
cin >> letter;
num = 1 + rand()%6;
num2 = 1 + rand() %6;
compNum = 1 + rand() %6;
compNum2 = 1 + rand() %6;
//sto se sluciva so redovite 32 do 36 i koi se vrednostite na promenlivite ?

sum = num + num2;
compSum = compNum + compNum2;

//Calculate Sums

if (letter == 'q')
break;
if (letter != 'r')
{
system("cls");
continue;
}

switch (num)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default: //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ?
cout << "Error...";
break;
} //end switch

switch (num2)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default:// //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ?
cout << "Error...";
break;
} //end switch

cout << endl << "Yours: " << num << ", " << num2 << endl;
cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";

//Display dice and numbers

if (sum > compSum)
{
cout << "You won!!" << endl << endl;
score++;
}
else
{
compScore++;
cout << "you lost..." << endl << endl;
}

//shto rabotat naredbite 119 i 120 ?

system("pause");
system("cls");


}
return 0;
}

void one()
{
cout << "-----" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "-----" << endl;
}
void two()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void three()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void four()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|   |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void five()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "| O |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void six()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}