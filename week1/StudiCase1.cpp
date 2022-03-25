/**
 * @file main.cpp
 * @author Dimas Ariyanto
 * @brief Menukar nilai dari 2 variable
 * @version 0.1
 * @date 2022-03-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>

using namespace std;

int main(){

    int a, b, temp;

    cout << "Nilai varible A dan B sebelum ditukar : \nA= ";
    cin >> a;
    cout << "B= ";
    cin >> b;

    temp = a;
    a=b;
    b = temp;

    system("cls");

    cout << "Nilai varible A dan B setelah ditukar : \nA= " << a << "\nB= " << b << endl;

    return 0;
}