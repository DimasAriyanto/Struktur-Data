#include <iostream>
#include <array>
#include <algorithm>
#include <functional>

using namespace std;

int jmlArray, angkaCari;
string kataCari;
bool ketemu;

void inputAngka(int angka[]);
void printAngka(int angka[]);
void descAngka(int angka[]);
void ascAngka(int angka[]);
void inputKata(string kata[]);
void printKata(string kata[]);
void descKata(string kata[]);
void ascKata(string kata[]);
void searchAngka(int angka[]);
void searchKata(string kata[]);

int main()
{
    int menu;

    while (1)
    {
        cout << "\n--- Manipulation Array ---" << endl;
        cout << "present by Dimas Ariyanto" << endl
             << endl;
        cout << "1. Sort Angka" << endl;
        cout << "2. Sort Kata" << endl;
        cout << "3. Search Angka" << endl;
        cout << "4. Search Kata" << endl;
        cout << "\nMasukkan Pilihan: ";
        cin >> menu;

        if (menu == 1)
        {
            cout << "Masukkan berapa angka yang ingin anda masukkan = ";
            cin >> jmlArray;
            int angka[jmlArray];

            // input angka ke pointer
            int *ptrArrayAngka;
            ptrArrayAngka = &angka[jmlArray];
            inputAngka(ptrArrayAngka);

            printAngka(ptrArrayAngka);
            descAngka(ptrArrayAngka);
            ascAngka(ptrArrayAngka);
        }
        else if (menu == 2)
        {
            cout << "Masukkan berapa kata yang ingin anda masukkan = ";
            cin >> jmlArray;
            string kata[jmlArray];
            inputKata(kata);

            printKata(kata);
            descKata(kata);
            ascKata(kata);
        }
        else if (menu == 3)
        {
            cout << "Masukkan berapa angka yang ingin anda masukkan = ";
            cin >> jmlArray;
            int angka[jmlArray];

            // input angka ke pointer
            int *ptrArrayAngka;
            ptrArrayAngka = &angka[jmlArray];
            inputAngka(ptrArrayAngka);
            system("cls");

            searchAngka(ptrArrayAngka);
        }
        else if (menu == 4)
        {
            cout << "Masukkan berapa kata yang ingin anda masukkan = ";
            cin >> jmlArray;
            string kata[jmlArray];
            inputKata(kata);
            system("cls");

            searchKata(kata);
        }
    }
    cin.get();
    return 0;
}

void inputAngka(int angka[])
{
    cout << "Masukkan angka" << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << " ke- " << (i + 1) << " : ";
        cin >> angka[i];
    }
}

void printAngka(int angka[])
{
    for (int i = 0; i < jmlArray; i++)
    {
        cout << angka[i] << ", ";
    }
    cout << endl;
}

void descAngka(int angka[])
{
    sort(angka, angka + jmlArray, greater<int>());
    cout << "Array setelah descending :  ";
    printAngka(angka);
}

void ascAngka(int angka[])
{
    sort(angka, angka + jmlArray, less<int>());
    cout << "Array setelah ascending :  ";
    printAngka(angka);
}

void inputKata(string kata[])
{
    cout << "Masukkan kata: " << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << " ke- " << (i + 1) << " : ";
        cin.ignore();
        getline(cin, kata[i]);
    }
}

void printKata(string kata[])
{
    for (int i = 0; i < jmlArray; i++)
    {
        cout << kata[i] << ", ";
    }
    cout << endl;
}

void descKata(string kata[])
{
    sort(kata, kata + jmlArray, greater<string>());
    cout << "Array setelah descending :  ";
    printKata(kata);
}

void ascKata(string kata[])
{
    sort(kata, kata + jmlArray, less<string>());
    cout << "Array setelah ascending :  ";
    printKata(kata);
}

void searchAngka(int angka[])
{
    while (ketemu != true)
    {
        cout << "AYO MUMET GOLEK: \n";
        cin >> angkaCari;
        ketemu = binary_search(angka, angka + jmlArray, angkaCari);

        if (ketemu)
        {
            cout << "KOE MENANG" << endl;
        }
        else
        {
            cout << "SALAH, GOLEK MANEH" << endl;
        }
    }
}

void searchKata(string kata[])
{
    while (ketemu != true)
    {
        cout << "AYO MUMET GOLEK: \n";
        cin.ignore();
        getline(cin, kataCari);
        ketemu = binary_search(kata, kata + jmlArray, kataCari);

        if (ketemu)
        {
            cout << "KOE MENANG" << endl;
        }
        else
        {
            cout << "SALAH, GOLEK MANEH" << endl;
        }
    }
}
