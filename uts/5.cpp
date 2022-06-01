#include <iostream>
using namespace std;

struct Mahasiswa
{
    char nim[11];
    char nama[30];
    float nilai;
};

float rata(Mahasiswa StDat[], int jumlahMahasiswa)
{
    float rata = 0;
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        rata += StDat[i].nilai;
    }
    return rata / jumlahMahasiswa;
}

int lulus(Mahasiswa StDat[], int jumlahMahasiswa)
{
    int jumlahLulus = 0;
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        if (StDat[i].nilai >= 60)
        {
            jumlahLulus++;
        }
    }
    return jumlahLulus;
}

int main()
{ // input jumlah mahasiswa
    int jumlahMahasiswa;
    cout << "Jumlah mahasiswa yang ingin diinputkan : ";
    cin >> jumlahMahasiswa;
    cout << endl;

    // deklarsi variabel array mhs dg tipe struct Mahasiswa
    Mahasiswa StDat[jumlahMahasiswa];

    // input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Data Mahasiswa ke #" << (i + 1) << endl;
        cout << " NIM\t: ";
        cin >> StDat[i].nim;
        cin.ignore();
        cout << " Nama\t: ";
        cin.getline(StDat[i].nama, 30);
        cout << " Nilai\t: ";
        cin >> StDat[i].nilai;

        cout << endl;
    }
    cout << endl;

    // menampilkan data mahasiswa yg sudah diinputkan
    cout << "Laporan Data Mahasiswa" << endl;
    cout << "======================" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "No. #" << (i + 1) << endl;
        cout << " NIM\t: " << StDat[i].nim << endl;
        cout << " Nama\t: " << StDat[i].nama << endl;
        cout << " Nilai\t: " << StDat[i].nilai << endl;

        cout << endl
             << endl;
    }
    cout << "Rata-rata nilai mahasiswa adalah " << rata(StDat, jumlahMahasiswa) << endl;
    cout << "Jumlah mahasiswa yang lulus: " << lulus(StDat, jumlahMahasiswa) << endl;

    system("pause");
    return 0;
}