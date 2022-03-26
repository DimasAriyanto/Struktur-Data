#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    // deklarasi variable
    char kalimat[1000];

    // memasukan input user
    cout << "Masukkan kalimat = ";
    gets(kalimat);

    // memasukkan character ke sebuah pointer untuk mangambil alamat
    char *ptrKalimat = kalimat;

    // perulangan untuk mnentukan jumlah kata
    int jmlKata = 1;
    while (*ptrKalimat != '\0')
    {
        if (*ptrKalimat == ' ')
        {
            jmlKata++;
        }
        ptrKalimat++;
    }

    cout << "Jumlah kata dalam kalimat " << kalimat << " adalah " << jmlKata << endl;

    system("pause");
    return 0;
}