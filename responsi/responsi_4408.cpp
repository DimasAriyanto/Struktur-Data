#include <iostream>

using namespace std;

struct Karyawan
{
    int nik;
    char namaPegawai[100];
    char golongan[10];
    long gajiPokok;
};

int main()
{
    int jml;

    cout << "masukkan jumlah pegawai :   ";
    cin >> jml;
    Karyawan karyawan[jml];

    for (int i = 0; i < jml; i++)
    {
        cout << "Nik : ";
        cin >> karyawan->nik;
        cin.ignore();
        cout << "Nama : ";
        cin.getline(karyawan->namaPegawai, 100);
        cout << "Golongan : ";
        cin.getline(karyawan->golongan, 10);
        cout << "Gaji Pokok : ";
        cin >> karyawan->gajiPokok;
    }

    for (int i = 0; i < jml; i++)
    {
        cout << "Nik : " << karyawan->nikm << endl;
        cout << "Nama : " << karyawan->namaPegawai << endl;
        cout << "Golongan : " << karyawan->golongan << endl;
        cout << "Gaji Pokok : " << karyawan->gajiPokok << endl;
    }
}