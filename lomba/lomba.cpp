#include <iostream>

using namespace std;

int main()
{
    int hewan;

    cout << "jml hewan : ";
    cin > hewan;

    int tahun[hewan];
    int jumlah[hewan];

    for (int i = 0; i < hewan; i++)
    {
        cout << "tahun : ";
        cin >> tahun[i];
        cout << "jumlah : ";
        cin >> jumlah[i];
    }
}