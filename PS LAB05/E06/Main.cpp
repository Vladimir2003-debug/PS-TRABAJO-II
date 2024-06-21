/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 6.
Utilizando estructuras en C++, crear una estructura puntero para acceder a los atributos de un punto
p2, definido en una estructura, recordar que para acceder a los atributos de una estructura puntero se
usa el operador flecha ->
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

int main()
{
    struct Point p1 = { 1, 2};
    //p2 es un puntero a la estructura p1
    struct Point* p2 = &p1;
    //Accesando a los atributos usando la estructura puntero
    cout << p2 -> x << " " << p2 -> y << endl;
    return 0;
}
