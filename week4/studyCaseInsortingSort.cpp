#include <iostream>

using namespace std;

int jmlArray;

void inputArray(int angka[]);

void printArray(int angka[]);

void insortingSort(int arr[]);

int main()
{
    cout << "Masukkan berapa angka yang ingin anda masukkan :  ";
    cin >> jmlArray;
    int nilaiArray[jmlArray];
    inputArray(nilaiArray);

    cout << "Sebelum Array di sorting :  ";
    printArray(nilaiArray);
    cout << endl;
    insortingSort(nilaiArray);
    cout << "Setelah Array di sorting : ";
    printArray(nilaiArray);

    return 0;
}

void inputArray(int angka[])
{
    cout << "Masukkan angka" << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << " ke- " << (i + 1) << " : ";
        cin >> angka[i];
    }
}

void printArray(int angka[])
{
    for (int i = 0; i < jmlArray; i++)
    {
        cout << angka[i] << ", ";
    }
    cout << endl;
}

void insortingSort(int arr[])
{
    int i, j, key;
    for (i = 0; i < jmlArray; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
    }
}