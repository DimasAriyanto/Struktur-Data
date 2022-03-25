/**
 * @file main.cpp
 * @author Dimas Ariyanto
 * @brief implementasi array nilai terkecil dan terbesar
 * @version 0.1
 * @date 2022-03-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

using namespace std;

void cetakElementArray(int array[], int jumlahElemenArray);
int getNilaiTerkecil(int array[], int jumlahElemenArray);
int getNilaiTerbesar(int array[], int jumlahElemenArray);

int main()
{
    int jml_arr;

    cout << "Jumlah Array yang ingin diinputkan : ";
    cin >> jml_arr;

    int nilaiArray[jml_arr];

    for (int i = 0; i < jml_arr; i++)
    {
        cout << "Array ke " << (i + 1) << " = ";
        cin >> nilaiArray[i];
    }

    int jumlahElementArray = sizeof(nilaiArray) / sizeof(int);

    int nilaiTerkecil = getNilaiTerkecil(nilaiArray, jumlahElementArray);

    int nilaiTerbesar = getNilaiTerbesar(nilaiArray, jumlahElementArray);

    cout << "\nDaftar array berikut : " << endl
         << endl;

    cetakElementArray(nilaiArray, jumlahElementArray);

    cout << "Nilai terkecil Adalah : " << nilaiTerkecil << endl
         << endl;

    cout << "Nilai terbesar Adalah : " << nilaiTerbesar << endl
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
int getNilaiTerkecil(int array[], int jumlahElemenArray)
{
    int nilaiTerkecil = array[0];
    for (int i = 0; i < jumlahElemenArray; i++)
    {
        if (nilaiTerkecil > array[i])
            nilaiTerkecil = array[i];
    }

    return nilaiTerkecil;
}
int getNilaiTerbesar(int array[], int jumlahElemenArray)
{
    int nilaiTerbesar = array[0];
    for (int i = 0; i < jumlahElemenArray; i++)
    {
        if (nilaiTerbesar < array[i])
            nilaiTerbesar = array[i];
    }

    return nilaiTerbesar;
}