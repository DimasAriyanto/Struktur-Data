/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>

using namespace std;

int main(){

    string name[100];
    string matkul[100];
    int nilai[100], jml_mhs;

    cout << "---PROGRAM INPUT NILAI MAHASISWA---\n";

    //input jumlah mahasiswa
    cout << "\nMasukkan jumlah mahasiswa = ";
    cin >> jml_mhs;

    cout << endl;

    //perulangan untuk input setiap mahasiswa
    for( int i = 1; i <= jml_mhs; i++ ) {

        // memasukkan nilai mahasiswa
        cout << "Masukkan Nama Mahasiswa = ";
        cin.ignore();
        getline(cin, name[i]);
        cout << "Masukkan Mata Kuliah = ";
        getline(cin, matkul[i]);
        cout << "Masukkan Nilai Mahasiswa = ";
        cin >> nilai[i];

        cout << endl;

    }

    // menampilkan nilai mahasiswa
    cout << "Tampikan Data";
    for (int i = 1; i <= jml_mhs; i++)
        cout << "\nNama Mahasiswa : " << name[i] << "\nMata Kuliah : " << matkul[i] << "\nNilai : " << nilai[i] << endl;

    exit;

    return 0;
}