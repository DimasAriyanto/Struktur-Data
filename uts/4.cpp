#include <iostream>

using namespace std;

void print(int arr[], int n);
void selectionSort(int n, int arr[]);

int main()
{
    int arr[] = {5, 28, 19, 15, 20, 33, 12, 17, 10};
    int n;
    n = sizeof(arr) / sizeof(int);
    cout << "Sebelum Array di sorting :  ";
    print(arr, n);
    cout << endl;
    selectionSort(n, arr);
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

void selectionSort(int n, int arr[])
{
    int i, j, min_in;
    for (i = 0; i < n; i++)
    {
        min_in = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[min_in])
                min_in = j;
            swap(arr[i], arr[min_in]);
        }
    }
}