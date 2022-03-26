#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    // deklarasi variable
    char data[256];
    char lower, upper, kapital;

    // memasukan input user
    cout << "Masukkan kalimat = ";
    gets(data);

    // perulangan untuk mengubah setiap karakter menjadi uppercase
    char *ptrUpper = data;
    for (int i = 0; i < strlen(ptrUpper); i++)
    {
        // convert to uppercase
        ptrUpper[i] = toupper(ptrUpper[i]);
    }

    cout << "kalimat dalam upper case = " << ptrUpper << endl;

    // perulangan untuk mengubah setiap karakter menjadi lowercase
    char *ptrLower = data;
    for (int i = 0; i < strlen(ptrLower); i++)
    {
        // convert] to uppercase
        ptrLower[i] = tolower(ptrLower[i]);
    }

    cout << "kalimat dalam upper case = " << ptrLower << endl;

    // perulangan untuk mengubah karakter awal menjadi uppercase dengan memfaatkan if
    char *ptrKapital = data;
    for (int i = 0; i < strlen(ptrKapital); i++)
    {
        if (ptrKapital[i] == ptrKapital[0])
        {
            // convert to uppercase
            ptrKapital[i] = toupper(ptrKapital[i]);
        }
        else
        {
            // convert] to uppercase
            ptrKapital[i] = tolower(ptrKapital[i]);
        }
    }

    cout << "kalimat awal dalam upper case = " << ptrKapital << endl;

    system("pause");
    return 0;
}