#include <iostream>

using namespace std;

struct Karyawan
{
    int karyawanID;
    int umur;
    float gaji;
};

int main()
{
    Karyawan Joko;
    Joko.karyawanID = 10;
    Joko.umur = 25;
    Joko.gaji = 24.25;

    Karyawan paijo = {11, 26, 28.23};

    float totalGaji = Joko.gaji + paijo.gaji;
    cout << "Total gaji joko dan paijo adalah " << totalGaji << endl;

    if (paijo.gaji > Joko.gaji)
    {
        cout << "Gaji paijo lebih besar daripada gaji joko" << endl;
    }

    Joko.gaji += 2.5;
    cout << "gaji joko setelah kenaikan gaji = " << Joko.gaji << endl;

    system("pause");
    return 0;
}