#include <iostream>
using namespace std;

int main()
{
    int amt;
    cout<< "ENTER THE AMOUNT";
     cin>> amt;
    int Rs100, Rs50, Rs10, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amt / 100;
        amt = amt % 100;
        cout << "no. of 100Rs notes are=" << Rs100 << endl;
    case 2:
        Rs50 = amt / 50;
        amt = amt % 50;
        cout << "no. of 50Rs notes are=" << Rs50 << endl;
    case 3:
        Rs20 = amt / 20;
        amt = amt % 20;
        cout << "no. of 20Rs notes are=" << Rs20 << endl;
    case 4:
        Rs10 = amt / 10;
        amt = amt % 10;
        cout << "no. of 10Rs notes are=" << Rs10 << endl;
    case 5:
        Rs1 = amt / 1;
        amt = amt % 1;
        cout << "no. of 1Rs notes are=" << Rs1 << endl;
    }
    
}