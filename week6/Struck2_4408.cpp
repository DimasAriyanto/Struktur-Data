#include <iostream>

using namespace std;

struct Karyawan
{
    int karyawanID;
    int umur;
    float gaji;
};

void inputDataKaryawan(Karyawan &nama)
{
    cout << "Input data Karyawan" << endl;
    cout << "===================" << endl;
    cout << "ID\t:\t";
    cin >> nama.karyawanID;
    cout << "Umur\t:\t";
    cin >> nama.umur;
    cout << "Gaji\t:\t";
    cin >> nama.gaji;
}

void cetakDataKaryawan(Karyawan &nama)
{
    cout << "Data karyawan" << endl;
    cout << "===================" << endl;
    cout << "ID\t:\t" << nama.karyawanID << endl;
    cout << "Umur\t:\t" << nama.umur << endl;
    cout << "Gaji\t:\t" << nama.gaji << endl;
}

float getTotalGaji(Karyawan gaji1, Karyawan gaji2)
{
    return gaji1.gaji + gaji2.gaji;
}

int main()
{
    Karyawan joko, paijo;

    inputDataKaryawan(paijo);
    inputDataKaryawan(joko);

    cetakDataKaryawan(paijo);
    cetakDataKaryawan(joko);

    float totalGaji = getTotalGaji(joko, paijo);
    cout << "Total gaji joko dan  paijo : " << totalGaji << endl;

    system("pause");
    return 0;
}