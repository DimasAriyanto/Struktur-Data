#include <iostream> // for cout
#include <string.h> // for gets ( mengambil character )
#include <stdio.h>  // for strlen ( menghitung jumlah character )

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
