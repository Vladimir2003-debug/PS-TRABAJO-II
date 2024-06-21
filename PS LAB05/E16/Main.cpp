/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 16.
Utilizando estructuras en C++, crear un programa que muestre como las estructuras en C no pueden
tener constructores dentro de la estructura pero las estructuras en C++ pueden tener constructores
creados dentro
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

using namespace std;

struct Student {
    int roll;
    
    Student(int x)
    {
        roll = x;
    }
};

//Programa principal
int main()
{
    struct Student s(2);
    cout << s.roll << endl;
    return 0;
}
