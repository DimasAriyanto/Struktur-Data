#include <iostream>

using namespace std;

int main()
{
    int nilai[] = {20, 10, 40, 80, 70, 50, 30, 60, 100, 75, 85};

    int jmlArray = sizeof(nilai) / sizeof(int);

    cout << "Data Nilai : " << endl;
    for (int index = 0; index < jmlArray; index++)
    {
        cout << nilai[index] << endl;
    }
    cout << endl
         << endl;

    int cari = 0;
    cout << "Masukkan nilai yang anda cari :  ";
    cin >> cari;

    bool isKetemu = false;
    int index;
    for (index = 0; index < jmlArray; index++)
    {
        if (cari == nilai[index])
        {
            isKetemu = true;
            break;
        }
    }

    cout << endl;

    if (isKetemu)
    {
        cout << "Data ditemukan pada index ke-" << index << endl;
    }
    else
    {
        cout << "Data tidak ditemukan" << endl;
    }
}