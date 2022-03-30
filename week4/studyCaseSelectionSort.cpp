#include <iostream>

using namespace std;

int jmlArray;

void inputArray(int angka[]);

void printArray(int angka[]);

void selectionSort(int arr[]);

int main()
{
    cout << "Masukkan berapa angka yang ingin anda masukkan :  ";
    cin >> jmlArray;
    int nilaiArray[jmlArray];
    inputArray(nilaiArray);

    cout << "Sebelum Array di sorting :  ";
    printArray(nilaiArray);
    cout << endl;
    selectionSort(nilaiArray);
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

void selectionSort(int arr[])
{
    int i, j, min_in;
    for (i = 0; i < jmlArray; i++)
    {
        min_in = i;
        for (j = i + 1; j < jmlArray; j++)
        {
            if (arr[j] < arr[min_in])
            {
                min_in = j;
            }
            swap(arr[i], arr[min_in]);
        }
    }
}