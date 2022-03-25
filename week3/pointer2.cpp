#include <iostream>

using namespace std;

int main()
{
    int x = 100, y = 130, z;
    int *ptrX, *ptrY;
    cout << "Nilai x = " << x << " y = " << y << endl
         << endl;
    cout << "Alamat x = " << &x << " alamat y = " << &y << endl
         << endl;

    ptrX = &x;
    cout << "Isi ptrX = " << ptrX << "(alamat x), nilai yang ditunjuk ptrX = " << *ptrX << endl
         << endl;

    ptrY = &y;
    cout << "Isi ptrY = " << ptrY << "(alamat y), nilai yang ditunjuk ptrY = " << *ptrY << endl
         << endl;

    z = *ptrX;
    cout << "Nilai z = " << z << " sama dengan nilai x = " << x << endl
         << endl;

    *ptrY = 70;
    cout << "Isi ptrY = " << ptrY << " (tetap), nilai y = " << *ptrY << " (yang berubah)" << endl
         << endl;

    *ptrX = *ptrY + 5;
    cout << "Isi ptrX = " << ptrX << " (tetap), nilai x = " << *ptrX << " (yang berubah)" << endl
         << endl;

    ptrX = ptrY;
    cout << "Nilai yang ditunjuk ptrX = " << *ptrX << " dan ptrY = " << *ptrY << endl;

    system("pause");
    return 0;
}