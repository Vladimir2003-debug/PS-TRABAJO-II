/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 8.
Utilizando estructuras en C++, crear una estructura datospersona que ingrese los datos nombre, letra
inicial, edad, nota y que ingrese los datos "Juan", "J", 20, 7.5 y que muestre la edad, datospersona
sera un tipo y tendrá una variable persona en la implementación del programa
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct datosPersona
    {
        string nombre;
        char inicial;
        int edad;
        float nota;
    };
    
    datosPersona persona;
    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    cout << "La edad es " << persona.edad << endl;
    return 0;
}
