#include <iostream>

using namespace std;

int main()
{
    int jmlArray, i, j, min_in;

    cout << "--- SORTING NAMA MAHASISWA ---" << endl;
    cout << "present by Dimas Ariyanto " << endl
         << endl;

    cout << "Masukkan berapa jumlah mahasiswa yang ingin anda masukkan :  ";
    cin >> jmlArray;

    // input array
    string nilaiArray[jmlArray];
    cout << "Masukkan nama mahasiswa :  " << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << " ke- " << (i + 1) << " : ";
        cin >> nilaiArray[i];
    }

    // print array acak
    cout << "Daftar nama mahasiswa secara acak :  " << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << (i + 1) << ". " << nilaiArray[i] << endl;
    }

    // logic untuk mengurutkan string secara ascending
    for (i = 0; i < jmlArray; i++)
    {
        min_in = i;
        for (j = i + 1; j < jmlArray; j++)
        {
            if (nilaiArray[j] < nilaiArray[min_in])
            {
                min_in = j;
            }
            swap(nilaiArray[i], nilaiArray[min_in]);
        }
    }

    // print array secara ascending
    cout << "Daftar nama mahasiswa secara ascending: " << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << (i + 1) << ". " << nilaiArray[i] << endl;
    }

    // logic untuk mengurutkan string secara descanding
    for (i = 0; i < jmlArray; i++)
    {
        min_in = i;
        for (j = i + 1; j < jmlArray; j++)
        {
            if (nilaiArray[j] > nilaiArray[min_in])
            {
                min_in = j;
            }
            swap(nilaiArray[min_in], nilaiArray[min_in]);
        }
    }

    // print array secara descanding
    cout << "Daftar nama mahasiswa secara descanding: " << endl;
    for (int i = 0; i < jmlArray; i++)
    {
        cout << (i + 1) << ". " << nilaiArray[i] << endl;
    }

    return 0;
}
