/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 3.
Utilizando estructuras mostrar que loos atributos de una estructura pueden ser inicializados con
declaraciones en C++, inicializar exitosamente los atributos sin mostrar error
 * @copyright Copyright (c) 2024
 * 
 */

//En C++ podemos inicializar las variables con declaraciones en la estructura
#include <iostream>

using namespace std;

struct Point {
    int x = 0; // Esto es considerado argumentos por defecto
    int y = 1; // sin error
};

int main()
{
    struct Point p1;
    //accediendo a los atribucos del punto p1
    //Como no hay valor para inicializar se mantiene los valores iniciales
    cout << "x = " << p1.x << ", y = " << p1.y <<endl;
    //Inicializando el valor de y = 20
    p1.y = 20;
    cout << "x = " << p1.x << ", y = " << p1.y <<endl;
    return 0;
}
