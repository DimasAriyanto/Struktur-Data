#include <iostream>

using namespace std;

const int MAX_STACK = 5;

struct Stack
{
    int top;
    int data[MAX_STACK];
};

void inisialisasi();
void push(int data);
void pop();
void clear();
bool isEmpaty();
bool isFull();
void print();

Stack stack;

int main()
{

    inisialisasi();

    int PilihanMenu;
    int data;

    do
    {
        cout << ">>> Pilihan Menu Stack <<<" << endl;
        cout << "1. Menambah item stack" << endl;
        cout << "2. Menghapus item stack" << endl;
        cout << "3. Menampilkan item stack" << endl;
        cout << "4. Mengosongkan item stack" << endl;
        cout << "5. Selesai" << endl
             << endl;

        cout << "Masukkan Pilihan Anda :  ";
        cin >> PilihanMenu;

        cout << endl;

        switch (PilihanMenu)
        {
        case 1:
            cout << "Masukkan Data :  ";
            cin >> data;
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            print();
            break;
        case 4:
            clear();
            break;
        }

    } while (PilihanMenu != 5);

    cout << endl;

    system("pause");
    return 0;
}

void inisialisasi()
{
    stack.top = -1;
}

void push(int data)
{
    if (stack.top >= (MAX_STACK - 1))
    {
        cout << "Stack sudah penuh" << endl;
    }
    else
    {
        stack.top++;
        stack.data[stack.top] = data;
        cout << "Data berhasil ditambahkan :  " << endl;
    }
}

void pop()
{
    if (stack.top >= (MAX_STACK - 1))
    {
        cout << "Stack masih kosong" << endl;
    }
    else
    {
        cout << "Data " << stack.data[stack.top] << " sudah dihapus" << endl;
        stack.top--;
    }
}

void clear()
{
    stack.top = -1;
    cout << "Stack sudah dikosongkan" << endl;
}

bool isEmpaty()
{
    return (stack.top == -1);
}

bool isFull()
{
    return (stack.top >= (MAX_STACK - 1));
}

void print()
{
    cout << "Isi stack : " << endl;
    for (int i = stack.top; i >= 0; i--)
    {
        cout << stack.data[i] << endl;
    }
}