/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 3. Modificar el programa de facturación de clientes de tal modo que puedan obtenerse los
siguientes listados.
• Clientes en estado moroso.
• Clientes en estado pagado con factura mayor de una determinada cantidad.
 * @copyright Copyright (c) 2024
 * 
 */

#include<iostream>
#include<cstring>

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

    int select;
    cout << "Seleccione que clientes desea revisar" << endl;
    cout << "1. Clientes morosos" << endl;
    cout << "2. Clientes pagados con factura mayor de una determinada cantidad" << endl;
    cin >> select;

    if(select == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if(!clientes[i].estado.compare("moroso"))
            {
                cout << "Nombre cliente " << i << ": " << clientes[i].nombre << endl;
                cout << "Unidades solicitadas: " << clientes[i].n_unidades_soli << endl;
                cout << "Precio unidad: " << clientes[i].precio_unidad << endl;
                cout << "Estado: " << clientes[i].estado << endl << endl;
            }
        }

    }
    else if (select == 2)
    {
        for (int i = 0; i < n; i++)
        {
            int cant;
            cout << "Ingrese cantidad minima" << endl;
            cin >> cant;

            if(!clientes[i].estado.compare("pagado") && clientes[i].n_unidades_soli > cant)
            {
                cout << "Nombre cliente " << i << ": " << clientes[i].nombre << endl;
                cout << "Unidades solicitadas: " << clientes[i].n_unidades_soli << endl;
                cout << "Precio unidad: " << clientes[i].precio_unidad << endl;
                cout << "Estado: " << clientes[i].estado << endl << endl;
            }
        }
    }


    return 0;
}