#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int jmlMhs;
    int kiri, kanan, tengah;
    string key, temp;
    bool isKetemu = false;

    while (1)
    {
        cout << "--- PROGRAM SEARCH NAMA MAHASISWA ---" << endl
             << endl;

        cout << "Masukkan berapa jumlah mahasiswa : ";
        cin >> jmlMhs;

        string namaMhs[jmlMhs];
        for (int i = 0; i < jmlMhs; i++)
        {
            cout << "Nama mahasiswa ke - [" << (i + 1) << "] : ";
            cin >> namaMhs[i];
        }

        for (int i = 0; i < jmlMhs; i++)
        {
            for (int j = 0; j < jmlMhs - i - 1; j++)
            {
                if (namaMhs[j] > namaMhs[j + 1])
                {
                    temp = namaMhs[j];
                    namaMhs[j] = namaMhs[j + 1];
                    namaMhs[j + 1] = temp;
                }
            }
        }

        cout << "Data yang diurutkan adalah :  ";
        for (int i = 0; i < jmlMhs; i++)
        {
            cout << namaMhs[i] << " ";
        }

        cout << "\nMasukkan nama yang dicari :  ";
        cin >> key;
        kiri = 0;
        kanan = jmlMhs - 1;
        while (kiri <= kanan)
        {
            tengah = (kiri + kanan) / 2;

            if (key == namaMhs[tengah])
            {
                isKetemu = true;
                break;
            }
            else if (key < namaMhs[tengah])
            {
                kanan = tengah - 1;
            }
            else
            {
                kiri = tengah + 1;
            }
        }

        if (isKetemu == true)
        {
            cout << "Nama ditemukan " << endl;
        }
        else
        {
            cout << "Nama tidak ditemukan" << endl;
        }
    }
}