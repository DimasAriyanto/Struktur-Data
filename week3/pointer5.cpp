#include <iostream>
#include <string.h>

using namespace std;

struct Mahasiswa
{
    char nim[10];
    int nilai;
};

int main()
{
    Mahasiswa mhs;

    strcpy(mhs.nim, "21.11.4408");
    mhs.nilai = 80;

    cout << "NIM = " << mhs.nim << ", nilai = " << mhs.nilai << endl
         << endl;

    Mahasiswa *ptrMhs;
    ptrMhs = &mhs;

    strcpy(ptrMhs->nim, "21.11.4408");
    ptrMhs->nilai = 100;

    cout << "NIM = " << mhs.nim << ", nilai = " << mhs.nilai << endl;
    cout << "NIM = " << ptrMhs->nim << ", nilai = " << ptrMhs->nilai << endl;

    cout << endl;
    system("pause");
    return 0;
}