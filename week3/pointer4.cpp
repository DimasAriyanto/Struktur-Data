#include <iostream>

using namespace std;

int main()
{
    char kampus[] = "STMIK AMIKOM";

    int lenght = sizeof(kampus) / sizeof(char);

    for (int i = 0; i < lenght; i++)
    {
        cout << kampus[i];
    }

    cout << " Jika dibalik menjadi ";

    char *ptrKampus = kampus;

    for (int i = lenght - 1; i >= 0; i--)
    {
        cout << ptrKampus[i];
    }

    cout << endl;
    system("pause");
    return 0;
}