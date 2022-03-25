/**
 * @file main.cpp
 * @author Dimas Ariyanto
 * @brief Array
 * @version 0.1
 * @date 2022-03-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int nilaiArray[] = {21, 25, 75, 80};

    for (int i = 0; i < 4; i++)
    {
        cout << "Array ke #" << (i + 1) << " = " << nilaiArray[i] << endl;
    }

    return 0;
}