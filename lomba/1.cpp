#include <iostream>

using namespace std;

int main()
{
    int nilai;

    cin >> nilai;

    if (nilai >= 0 && nilai <= 100)
    {
        cout << "YA";
    }
    else
    {
        cout << "TIDAK";
    }
}