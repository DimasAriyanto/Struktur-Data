#include <iostream>
#include <array>
#include <algorithm>
#include <functional>

using namespace std;

int jmlArray;

void inputKata(string kata[])
{
    cout << "Masukkan kata: " << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << " ke- " << (i + 1) << " : ";
        cin >> kata[i];
    }
}

void printKata(string kata[])
{
    for (int i = 0; i < jmlArray; i++)
    {
        cout << kata[i] << " ";
    }
    cout << endl;
}

void descKata(string kata[])
{
    sort(kata, kata + jmlArray, greater<string>());
    cout << "Array setelah descending:";
    printKata(kata);
}

void ascKata(string kata[])
{
    sort(kata, kata + jmlArray, less<string>());
    cout << "Array setelah ascending:";
    printKata(kata);
}

int main()
{
    int menu;

    cout << "--- Manipulation Array ---" << endl
         << endl;
    cout << "1. Sort Angka" << endl;
    cout << "2. Sort Kata" << endl
         << endl;
    cout << "Masukkan Pilihan: ";
    cin >> menu;

    switch (menu)
    {
    case 1:
        cout << "Masukkan berapa kata yang ingin anda masukkan = ";
        cin >> jmlArray;
        string kata[jmlArray];
        inputKata(kata);

        printKata(kata);
        descKata(kata);
        ascKata(kata);
        break;
    }

    cin.get();
    return 0;
}
