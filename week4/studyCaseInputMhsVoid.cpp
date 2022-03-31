#include <iostream>

using namespace std;

int jmlArray;

void inputArray(string mhs[]);

void printArray(string mhs[]);

void selectionAsc(string arr[]);

void selectionDesc(string arr[]);

int main()
{
    cout << "--- SORTING NAMA MAHASISWA ---" << endl;
    cout << "present by Dimas Ariyanto " << endl
         << endl;

    cout << "Masukkan berapa jumlah mahasiswa yang ingin anda masukkan :  ";
    cin >> jmlArray;
    string nilaiArray[jmlArray];
    inputArray(nilaiArray);

    cout << "Daftar nama mahasiswa secara acak :  " << endl;
    printArray(nilaiArray);
    cout << endl;
    selectionAsc(nilaiArray);
    cout << "Daftar nama mahasiswa secara ascending: " << endl;
    printArray(nilaiArray);
    cout << endl;
    selectionDesc(nilaiArray);
    cout << "Daftar nama mahasiswa secara descanding: " << endl;
    printArray(nilaiArray);

    return 0;
}

void inputArray(string mhs[])
{
    cout << "Masukkan nama mahasiswa :  " << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << " ke- " << (i + 1) << " : ";
        cin >> mhs[i];
    }
}

void printArray(string mhs[])
{
    for (int i = 0; i < jmlArray; i++)
    {
        cout << (i + 1) << ". " << mhs[i] << endl;
    }
}

void selectionAsc(string arr[])
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

void selectionDesc(string arr[])
{
    int i, j, min_in;
    for (i = 0; i < jmlArray; i++)
    {
        min_in = i;
        for (j = i + 1; j < jmlArray; j++)
        {
            if (arr[j] > arr[min_in])
            {
                min_in = j;
            }
            swap(arr[i], arr[min_in]);
        }
    }
}