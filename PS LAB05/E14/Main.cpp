/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 14.
Utilizando estructuras en C++ mostrar como las estructuras en C no se pueden inicializar datos
miembros en las estructuras en C++ nosotros podemos hacerlo
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

struct Record {
    int x = 7;
};

//programa principal
int main()
{
    Record s;
    cout << s.x << endl;
    return 0;
}
