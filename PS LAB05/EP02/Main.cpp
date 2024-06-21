/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 2. Escribir un programa de facturación de clientes. Los clientes tienen un nombre, el número de
unidades solicitadas, el precio de cada unidad y el estado en que se encuentra: moroso, atrasado,
pagado. El programa debe generar a los diversos clientes
 * @copyright Copyright (c) 2024
 * 
 */

#include<iostream>

using namespace std;

struct Clientes{
    string nombre;
    int n_unidades_soli;
    float precio_unidad;
    string estado;
};

int main()
{
    string estado[3] = {"moroso","atrasado","pagado"};
    int n;
    cout << "Ingrese la cantidad de clientes" << endl;
    cin >> n;

    Clientes clientes[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del cliente " << i << endl;
        cin >> clientes[i].nombre;

        cout << "Ingrese el numero de unidades solictadas por el cliente " << i << endl;
        cin >> clientes[i].n_unidades_soli;

        cout << "Ingrese el precio unidad con el que se le vendio al cliente " << i << endl;
        cin >> clientes[i].precio_unidad;

        cout << "Seleccion el estado del cliente " << i << endl;
        cout << "1. Moroso" << endl;
        cout << "2. Atrasado" << endl;
        cout << "3. Pagado" << endl;
        int estado_seleccionado;
        cin >> estado_seleccionado;
        clientes[i].estado = estado[estado_seleccionado - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Nombre cliente " << i << ": " << clientes[i].nombre << endl;
        cout << "Unidades solicitadas: " << clientes[i].n_unidades_soli << endl;
        cout << "Precio unidad: " << clientes[i].precio_unidad << endl;
        cout << "Estado: " << clientes[i].estado << endl << endl;

    }

    return 0;
}