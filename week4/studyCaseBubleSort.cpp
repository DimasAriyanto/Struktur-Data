#include <iostream>

using namespace std;

int jmlArray;

void inputArray(int angka[]);

void printArray(int angka[]);

void bubbleSort(int arr[]);

int main()
{
    cout << "Masukkan berapa angka yang ingin anda masukkan :  ";
    cin >> jmlArray;
    int nilaiArray[jmlArray];
    inputArray(nilaiArray);

    cout << "Sebelum Array di sorting :  ";
    printArray(nilaiArray);
    cout << endl;
    bubbleSort(nilaiArray);
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

void bubbleSort(int arr[])
{
    int i, j;
    bool fleg;
    for (i = 0; i < jmlArray; i++)
    {
        fleg = false;
        for (j = 0; j < jmlArray - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                fleg = true;
            }
        }
    }
}