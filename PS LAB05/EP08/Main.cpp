/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 8. Un programa que sea capaz de almacenar los datos de cincuenta personas: nombre, dirección,
teléfono, edad (usando una tabla de structs). Deberá ir pidiendo los datos uno por uno, hasta que un
nombre se introduzca vacío (se pulse Intro sin teclear nada). Entonces deberá aparecer un menú que
permita:
• Mostrar la lista de todos los nombres.
• Mostrar las personas de una cierta edad.
• Mostrar las personas cuya inicial sea la que el usuario indique.
• Salir del programa
• (lógicamente, este menú debe repetirse hasta que se escoja la opción de “salir”).

 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

struct Fecha{
    int dia;
    int mes;
    int año;
}

struct Persona
{
    string nombre;
    string direccion;
    int telefono;
    int edad;
    Fecha ;
};

int main(){

}
