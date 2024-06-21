/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 5.
Utilizando estructuras en C++, crear una variable de tipo arreglo que guarde una estructura punto
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
    //crear un arreglo de estructuras
    struct Point arr[10];
    //Accesando a los atributos del arreglo
    arr[0].x = 10;
    arr[0].y = 20;
    cout << arr[0].x << " " << arr[0].y << endl;
    return 0;
}

