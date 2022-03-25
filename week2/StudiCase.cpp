#include <iostream>

using namespace std;

int main()
{
    int jumlah_mp, jumlah_siswa;

    cout << "---APLIKASI INPUT NILAI SISWA---" << endl
         << endl;

    cout << "Masukkan Jumlah Siswa : ";
    cin >> jumlah_siswa;
    string nama_siswa[jumlah_siswa];

    for (int i = 0; i < jumlah_siswa; i++)
    {
        cout << "Masukkan Nama Siswa ke " << (i + 1) << " : ";
        cin >> nama_siswa[i];
    }
    cout << endl;

    cout << "Masukkan Jumlah Mapel : ";
    cin >> jumlah_mp;
    string nama_mp[jumlah_mp];

    for (int i = 0; i < jumlah_mp; i++)
    {
        cout << "Masukkan Nama Mapel ke " << (i + 1) << ": ";
        cin >> nama_mp[i];
    }
    cout << endl;
    double nilai[jumlah_siswa][jumlah_mp];

    for (int i = 0; i < jumlah_siswa; i++)
    {
        for (int j = 0; j < jumlah_mp; j++)
        {
            cout << "Masukkan Nilai Mapel " << nama_mp[j] << " Dari Siswa " << nama_siswa[i] << " : ";
            cin >> nilai[i][j];
        }
        cout << endl;
    }

    system("cls");
    cout << "|\tData Nilai Siswa\t|\t" << endl
         << endl;

    for (int i = 0; i < jumlah_siswa; i++)
    {
        int sum = 0;
        cout << nama_siswa[i] << " : " << endl;
        for (int j = 0; j < jumlah_mp; j++)
        {
            cout << (j + 1) << ". " << nama_mp[j] << " : " << nilai[i][j] << endl;
            sum += nilai[i][j];
        }
        cout << "Total Nilai : " << sum << endl;
        cout << "Rata-Rata Nilai : " << (sum / jumlah_mp) << endl
             << endl;
    }

    return 0;
}