#include <iostream>

using namespace std;

int main()
{
     int x = 100;

     int *ptrX;
     ptrX = &x;

     int *ptrY;
     ptrY = &x;

     cout << "Isi variable x = " << x << " ada di alamat (" << &x << ")" << endl
          << endl;

     cout << "Isi variable ptrX = " << ptrX << " sama dengan alamat x (" << &x << ")" << endl;
     cout << "Isi variable ptrY = " << ptrY << " sama dengan alamat x (" << &x << ")" << endl
          << endl;

     cout << "Nilai yang ditunjuk ptrX = " << *ptrX << " sama dengan nilai x (" << x << ")" << endl;
     cout << "Nilai yang ditunjuk ptrY = " << *ptrY << " sama dengan nilai x (" << x << ")" << endl;

     system("pause");
     return 0;
}