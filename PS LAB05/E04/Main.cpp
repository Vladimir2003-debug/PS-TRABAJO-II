/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 4.
Utilizando estructuras en C++, inicializar una estructura utilizando llaves, también acceda a los
atributos utilizando el operador punto
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
    struct Point p1 = { 0, 1 };
    //Accesando a los atributos de un punto p1
    p1.x = 20;
    cout << "x = " << p1.x << ", y = " << p1.y << endl;
    return 0;
}