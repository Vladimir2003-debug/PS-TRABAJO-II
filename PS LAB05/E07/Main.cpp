/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 7.
Utilizando estructuras en C++, crear una estructura en la clase main y asignarle el nombre "Juan", letra
inicial "J", la edad de 20 años, nota de 7.5 y que imprima la edad
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

using namespace std;

int main()
{
    struct
    {
        string nombre;
        char inicial;
        int edad;
        float nota;
    } persona;
    
    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    cout << "La edad es " << persona.edad << endl;
    return 0;
}
