#include <iostream>

using namespace std;

int main()
{
    int umur[] = {21, 22, 23, 24, 25};

    int *ptrUmur = umur;

    cout << "Alamat dari umur " << umur[0] << " adalah " << &umur[0] << endl;
    cout << "Alamat dari umur " << umur[1] << " adalah " << &umur[1] << endl;
    cout << "Alamat dari umur " << umur[2] << " adalah " << &umur[2] << endl;
    cout << "Alamat dari umur " << umur[3] << " adalah " << &umur[3] << endl;
    cout << "Alamat dari umur " << umur[4] << " adalah " << &umur[4] << endl
         << endl;

    cout << "Nilai ptrUmur = " << ptrUmur << " sama dengan alamat dari umur " << umur[0] << " = " << &umur[0] << endl;

    ptrUmur += 3;
    cout << "Nilai ptrUmur = " << ptrUmur << " sama dengan alamat dari umur " << umur[3] << " = " << &umur[3] << endl;

    ptrUmur -= 2;
    cout << "Nilai ptrUmur = " << ptrUmur << " sama dengan alamat dari umur " << umur[1] << " = " << &umur[1] << endl;

    system("pause");
    return 0;
}