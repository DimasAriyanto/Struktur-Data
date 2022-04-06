#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int arr[10];
    int kiri, kanan, tengah;
    int temp, key, n;
    bool isKetemu = false;

    cout << "Masukkan jumlah data :  ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Angka ke - [" << (i + 1) << "] : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Data yang diurutkan adalah :  ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nMasukkan angka yang dicari :  ";
    cin >> key;
    kiri = 0;
    kanan = n - 1;
    while (kiri <= kanan)
    {
        tengah = (kiri + kanan) / 2;

        if (key == arr[tengah])
        {
            isKetemu = true;
            break;
        }
        else if (key < arr[tengah])
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
        cout << "Angka ditemukan ";
    }
    else
    {
        cout << "Angka tidak ditemukan";
    }
}