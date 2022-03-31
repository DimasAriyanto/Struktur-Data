#include <iostream>

using namespace std;

void print(int arr[], int n);
void insortingSort(int n, int arr[]);

int main()
{
    int arr[] = {20, 12, 10, 15, 2};
    int i, j, n, temp;
    n = sizeof(arr) / sizeof(int);
    cout << "Sebelum Array di sorting :  ";
    print(arr, n);
    cout << endl;
    insortingSort(n, arr);
    cout << "Setelah Array di sorting : ";
    print(arr, n);

    return 0;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insortingSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}