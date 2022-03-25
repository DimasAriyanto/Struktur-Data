/**
 * @file main.cpp
 * @author Dimas Ariyanto
 * @brief Array (mencari nilai terbesar)
 * @version 0.1
 * @date 2022-03-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

using namespace std;

void cetakElementArray(int array[], int jumlahElemenArray);
int getNilaiTerbesar(int array[], int jumlahElemenArray);

int main()
{
    int nilaiArray[] = {5, 7, 1, 45, 8, 100, 9, 10, 17};

    int jumlahElementArray = size(nilaiArray);

    int nilaiTerbesar = getNilaiTerbesar(nilaiArray, jumlahElementArray);

    cout << "Nilai terbesar dari daftar array berikut : " << endl
         << endl;

    cetakElementArray(nilaiArray, jumlahElementArray);

    cout << "Adalah : " << nilaiTerbesar << endl
         << endl;

    return 0;
}

void cetakElementArray(int array[], int jumlahElemenArray)
{
    for (int i = 0; i < jumlahElemenArray; i++)
        cout << array[i] << " ";
    cout << endl
         << endl;
}
int getNilaiTerbesar(int array[], int jumlahElemenArray)
{
    int nilaiTerbesar = 0;
    for (int i = 0; i < jumlahElemenArray; i++)
    {
        if (nilaiTerbesar < array[i])
            nilaiTerbesar = array[i];
    }

    return nilaiTerbesar;
}