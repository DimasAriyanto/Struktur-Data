#include <iostream>

using namespace std;

int main()
{
    int jmlArray;
    cout << "Jumlah nilai yang ingin anda inputkan :  ";
    cin >> jmlArray;

    int nilai[jmlArray];

    cout << "Data Nilai : " << endl;
    for (int index = 0; index < jmlArray; index++)
    {
        cout << "Nilai ke-" << (index + 1) << " = ";
        cin >> nilai[index];
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