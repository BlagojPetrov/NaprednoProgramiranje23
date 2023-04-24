#include <iostream>
#include <fstream>
using namespace std;

void prasanje1(float &vkupno_poeni, ofstream &fout)
{
    char tocen_odgvovor = 'b';
    tocen_odgvovor = 'd';
    float poeni = 4;
    fout << "1. ";
    cout << "1. Koja komanda pecati nesto na ekran?" << endl;
    cout << "a) cin" << endl;
    cout << "b) cout" << endl;
    cout << "c) P" << endl;
    cout << "d) printf"<<endl;
    char moj_odgovor;
    cin >> moj_odgovor;
    fout << moj_odgovor << " ";
    if(moj_odgovor == tocen_odgvovor)
    {
        vkupno_poeni = vkupno_poeni + poeni;
        fout << "TOCNO" << endl;
    }
    else
    {
        fout << "NETOCNO" << endl;
    }
}
void prasanje2(float &vkupno_poeni, ofstream &fout)
{
    char tocen_odgvovor = 'a';
    tocen_odgvovor='c';
    float poeni = 3.5;
    fout << "2. ";
    cout << "2. Koja komanda ovozmozuva korisniko da vnesuva vo programata?" << endl;
    cout << "a) cin" << endl;
    cout << "b) cout" << endl;
    cout << "c) scanf" << endl;
    cout << "d) in" << endl;
    char moj_odgovor;
    cin >> moj_odgovor;
    fout << moj_odgovor << " ";
    if(moj_odgovor == tocen_odgvovor)
    {
        vkupno_poeni = vkupno_poeni + poeni;
        fout << "TOCNO" << endl;
    }
    else
    {
        fout << "NETOCNO" << endl;
    }
}
void prasanje3(float &vkupno_poeni, ofstream &fout)
{
    char tocen_odgvovor = 'c';
    tocen_odgvovor='d';
    float poeni = 3.5;
    fout << "3. ";
    cout << "3. Koj biblojteki se koristat za matematicki funkcii i za pokazuvanje na data i vreme" << endl;
    cout << "a) <cstring>" << endl;
    cout << "b) <cstdlib>" << endl;
    cout << "c) <cmath>" << endl;
    cout << "d) <ctime>" << endl;
    char moj_odgovor;
    cin >> moj_odgovor;
    fout << moj_odgovor << " ";
    if(moj_odgovor == tocen_odgvovor)
    {
        vkupno_poeni = vkupno_poeni + poeni;
        fout << "TOCNO" << endl;
    }
    else
    {
        fout << "NETOCNO" << endl;
    }
}
void prasanje4(float &vkupno_poeni, ofstream &fout)
{
    char tocen_odgvovor = 'd';
    float poeni = 4;
    fout << "4. ";
    cout << "4. Kolku pati se garantira deka ke vrti 'do while' loop-o" << endl;
    cout << "a) 0" << endl;
    cout << "b) beskrajno" << endl;
    cout << "c) varirano" << endl;
    cout << "d) 1" << endl;
    char moj_odgovor;
    cin >> moj_odgovor;
    fout << moj_odgovor << " ";
    if(moj_odgovor == tocen_odgvovor)
    {
        vkupno_poeni = vkupno_poeni + poeni;
        fout << "TOCNO" << endl;
    }
    else
    {
        fout << "NETOCNO" << endl;
    }
}
void prasanje5(float &vkupno_poeni, ofstream &fout)
{
    char tocen_odgvovor = 'a';
    float poeni = 4;
    fout << "5. ";
    cout << "5. Koja struktura NE e loop struktura" << endl;
    cout << "a) Repeat" << endl;
    cout << "b) Do" << endl;
    cout << "c) While" << endl;
    cout << "d) For" << endl;
    char moj_odgovor;
    cin >> moj_odgovor;
    fout << moj_odgovor << " ";
    if(moj_odgovor == tocen_odgvovor)
    {
        vkupno_poeni = vkupno_poeni + poeni;
        fout << "TOCNO" << endl;
    }
    else
    {
        fout << "NETOCNO" << endl;
    }
}
void prasanje6(float &vkupno_poeni, ofstream &fout)
{
    char tocen_odgvovor = 'b';
    float poeni = 4;
    fout << "6. ";
    cout << "6. Koja e poslednata vrednost na 'x' koga kodot int x; for(x=0;x<10;x++;)?" << endl;
    cout << "a) 0" << endl;
    cout << "b) 10" << endl;
    cout << "c) 1" << endl;
    cout << "d) 9" << endl;
    char moj_odgovor;
    cin >> moj_odgovor;
    fout << moj_odgovor << " ";
    if(moj_odgovor == tocen_odgvovor)
    {
        vkupno_poeni = vkupno_poeni + poeni;
        fout << "TOCNO" << endl;
    }
    else
    {
        fout << "NETOCNO" << endl;
    }
}

int main()
{
    string ime_datoteka;
    cout << "Vnesete go vaseto prezime,ime i broj na indeks(bez prazno mesto):" << endl;
    cin >> ime_datoteka;
    ofstream fout(ime_datoteka.c_str());
    float vkupno_poeni = 0.0;
    prasanje1(vkupno_poeni, fout);
    prasanje2(vkupno_poeni,fout);
    prasanje3(vkupno_poeni,fout);
    prasanje4(vkupno_poeni,fout);
    prasanje5(vkupno_poeni,fout);
    prasanje6(vkupno_poeni,fout);
    fout << "Vkupno poeni: " << vkupno_poeni << endl;
    cout<<"Vkupno poeni:"<<vkupno_poeni<<endl;
    fout.close();
    return 0;
}
