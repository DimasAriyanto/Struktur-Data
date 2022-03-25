#include <iostream>  // for cout
#include <string.h>  // for gets ( mengambil character )
#include <algorithm> // for upper & lower
#include <stdio.h>   // for strlen ( menghitung jumlah character )

using namespace std;

int main()
{
    // deklarasi variable
    char data[256];
    char lower, upper, kapital;

    // memasukan input user
    cout << "Masukkan kalimat = ";
    gets(data);

    char *ptrUpper = data;
    for (int i = 0; i < strlen(ptrUpper); i++)
    {
        // convert str[i] to uppercase
        ptrUpper[i] = toupper(ptrUpper[i]);
    }

    cout << "kalimat dalam upper case = " << ptrUpper << endl;

    char *ptrLower = data;
    for (int i = 0; i < strlen(ptrLower); i++)
    {
        // convert str[i] to uppercase
        ptrLower[i] = tolower(ptrLower[i]);
    }

    cout << "kalimat dalam upper case = " << ptrLower << endl;

    char *ptrKapital = data;
    for (int i = 0; i < strlen(ptrKapital); i++)
    {
        if (ptrKapital[i] == ptrKapital[0])
        {
            ptrKapital[i] = toupper(ptrKapital[i]);
        }
        else
        {
            ptrKapital[i] = tolower(ptrKapital[i]);
        }
    }

    cout << "kalimat dalam upper case = " << ptrKapital << endl;

    system("pause");
    return 0;
}