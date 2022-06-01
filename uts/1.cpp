#include <iostream>

using namespace std;

int main()
{
    char nama[] = "RATNA";

    int lenght = sizeof(nama) / sizeof(char);

    for (int i = 0; i < lenght; i++)
    {
        cout << nama[i];
    }

    cout << " Jika dibalik menjadi ";

    char *ptrNama = nama;

    for (int i = lenght - 1; i >= 0; i--)
    {
        cout << ptrNama[i];
    }

    cout << endl;
    system("pause");
    return 0;
}