#include <iostream>

using namespace std;

int fpb(int x)
{
    if (x <= 1)
    {
        return x;
    }
    else
    {
        return x * fpb(x - 1);
    }
}

int main()
{
    int jml;
    cin >> jml;

    int nilai[jml];

    // cout << "angka : " << fpb(n) << endl;
}
