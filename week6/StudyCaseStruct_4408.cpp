#include <iostream>

using namespace std;

struct Mahasiswa
{
    char npm[11];
    char nama[30];
    char alamat[100];
    int tahunMasuk;
    float ipk;
};

int main()
{
    cout << "--- PROGRAM INPUT DATA MAHASISWA ---" << endl
         << endl;

    // input jumlah mahasiswa
    int jumlahMahasiswa;
    cout << "Jumlah mahasiswa yang ingin diinputkan : ";
    cin >> jumlahMahasiswa;
    cout << endl;

    // deklarsi variabel array mhs dg tipe struct Mahasiswa
    Mahasiswa mhs[jumlahMahasiswa];

    // input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Data Mahasiswa ke #" << (i + 1) << endl;
        cout << " NPM : ";
        cin >> mhs[i].npm;
        cin.ignore();
        cout << " Nama : ";
        cin.getline(mhs[i].nama, 30);
        cout << " Alamat : ";
        cin.getline(mhs[i].alamat, 100);
        cout << " Tahun Masuk : ";
        cin >> mhs[i].tahunMasuk;
        cout << " IPK : ";
        cin >> mhs[i].ipk;

        cout << endl;
    }
    cout << endl;

    // menampilkan data mahasiswa yg sudah diinputkan
    cout << "Laporan Data Mahasiswa" << endl;
    cout << "======================" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "No. #" << (i + 1) << endl;
        cout << " NPM : " << mhs[i].npm << endl;
        cout << " Nama : " << mhs[i].nama << endl;
        cout << " Alamat : " << mhs[i].alamat << endl;
        cout << " Tahun Masuk : " << mhs[i].tahunMasuk << endl;
        cout << " IPK : " << mhs[i].ipk << endl;

        cout << endl
             << endl;
    }

    system("pause");
    return 0;
}