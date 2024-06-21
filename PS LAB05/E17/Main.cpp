/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 17.
Utilizando estructuras en C++ mostrar como el operador sizeof genera 1 en una estructura vacía en
C++ el comportamiento de sizeof en C es diferente al generar 0 en la misma situación
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

//estructura vacia
struct Record{
};

//Programa principal
int main() {
    struct Record s;
    cout << sizeof(s) << endl;
    return 0;
}