#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//INKI 1033 (?????? 01)

/* Klasata "Date" e definiran so tri "private" variabli i toa se
den, mesec i godina za da se zacuva "date".
Class isto taka definira dve "friend functions" 
operator>> i operator<< koi se preoptovareni
za da zemat input i output datum soodvetno. */ 

class date
{
private:
    int day, month, year;
public:
    date() {}
    friend void operator>>(istream &in, date &d); 
    friend void operator<<(ostream &out, date &d);
    ~date() {}
};
/* Ovaa funkcija zema podatoci od korisnikot za den, mesec i godina
i ja proveruva nivnata validnost. Proveruva dali vneseniot mesec
e validen, ako ne, izleguva "Nevaliden Mesec" i izleguva od programata. 
Potoa go proveruva brojot na denovi vo vneseniot mesec
vrz osnova na godinata i proveruva isto dali e validen kako vo mesecot. */

void operator>>(istream &in, date &d)
{
    cout<<"\n Enter Date\n";
    cout<<"-------------------\n";
    cout<<"Enter Day: ";
    in >> d.day;
    cout<<"Enter Month: ";
    in >> d.month;
    cout<<"Enter Year: ";
    in >> d.year;

    // Proveruva validnost na mesecot
    if (d.month < 1 || d.month > 12) {
        cout << "\n Invalid Month\n";
        exit(0);
    }

    // Proveruva validnost na denot vrz osnova na mesecot
    int max_day;
    switch(d.month) {
        case 1: //January
        case 3: //March
        case 5: //May
        case 7: //July
        case 8: //August
        case 10: //October
        case 12: //December
            max_day = 31;
            break;
        case 4: //April
        case 6: //June
        case 9: //September
        case 11: //November
            max_day = 30;
            break;
        case 2: //February
            if (d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0)) { // Leap year
                max_day = 29;
            } else {
                max_day = 28;
            }
            break;
        default:
            cout << "\n Invalid Month\n";
            exit(0);
    }
    
    if(d.day < 1 || d.day > max_day) {
        cout << "\n Invalid Day\n";
        exit(0);
    }
}

/* Ovaa funkcija zema "date object" kako input i go prikazuva datumot 
vo format "dd/mm/yyyy" */

void operator<<(ostream &out, date &d)
{
    out << "\n-------------------\n";
    out << "Date: ";
    out << d.day << "/";
    out << d.month << "/";
    out << d.year << "\n";
}

int main()
{
    date d;
    cin >> d;
    cout << d;
    return 0;
}