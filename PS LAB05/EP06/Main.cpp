/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 6. Un programa que pida el nombre, el apellido y la edad de una persona, los almacene en un
“struct” y luego muestre los tres datos en una misma línea, separados por comas.
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

struct Persona {
    string nombre;
    string apellido;
    int edad;

};

int main(){
    Persona p;
    cout << "Ingrese su nombre: ";
    cin >> p.nombre;
    cout << "Ingrese su apellido: ";
    cin >> p.apellido;
    cout << "Ingrese su edad: ";
    cin >> p.edad;

    cout << p.nombre << ", " << p.apellido << ", " << p.edad << endl;

    return 0;
}