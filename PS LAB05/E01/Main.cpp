/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 
 * @copyright Copyright (c) 2024
 * Ejercicio 1.
Hacer una estructura en C++ que registre los datos de cinco personas como: Nombre, apellido, edad,
sexo y teléfono
 */
#include <iostream>

using namespace std;

struct persona{
    char nombre[15];
    char apellido[15];
    int edad;
    char sexo[15];
    int telefono;
};

int main(){
    persona amigo[5];
    for (int i = 0; i < 5; i++){
        cout <<"Escriba el Nombre "<<i+1<<":";
        cin >> amigo[i].nombre;
        cout <<"\nEscriba el Apellido "<<i+1<<":";
        cin >> amigo[i].apellido;
        cout <<"\nEscriba la Edad de "<<i+1<<":";
        cin >> amigo[i].edad;
        cout <<"\nEscriba el sexo "<<i+1<<":";
        cin >> amigo[i].sexo;
        cout <<"\nEscriba el Telefono de "<<i+1<<":";
        cin >> amigo[i].telefono;
        cout <<endl;
    }

    cout<<"El registro de personas que se introdujeron es: \n\n";

    for (int i = 0; i < 5; i++){
        cout<<"\t"<<amigo[i].nombre;
        cout<<"\t"<<amigo[i].apellido;
        cout<<"\t"<<amigo[i].edad;
        cout<<"\t"<<amigo[i].sexo;
        cout<<"\t"<<amigo[i].telefono<<"\n\n";
    }
    return 0;
}