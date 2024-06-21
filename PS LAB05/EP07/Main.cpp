/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 7. Un programa que pida datos de ocho personas: nombre, dia de nacimiento, mes de nacimiento,
y año de nacimiento (que se deben almacenar en una tabla de structs). Después deberá repetir lo
siguiente: preguntar un número de mes y mostrar en pantalla los datos de las personas que cumplan
los años durante ese mes. Terminará de repetirse cuando se teclee 0 como número de mes.
 * @copyright Copyright (c) 2024
 * 
 */
#include<iostream>

using namespace std;

struct Persona {
    string nombre;
    int dia_nacimiento;
    int mes_nacimiento;
    int año_nacimiento;
};

int main()
{
    Persona *personas = new Persona[8];
    for(int i = 0; i < 8; i++){
        cout << "Persona " << i+1 << endl;
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "Día de nacimiento: ";
        cin >> personas[i].dia_nacimiento;
        cout << "Mes de nacimiento: ";
        cin >> personas[i].mes_nacimiento;
        cout << "Año de nacimiento: ";
        cin >> personas[i].año_nacimiento;
    }

    int mes;
    while(true)
    {
        cout << "Introduce un número de mes (0 para salir): " << endl;
        cin >> mes;
        if(mes == 0)
            break;

        for(int i = 0;i<8;i++)
        {
            if(personas[i].mes_nacimiento == mes )
            {
                cout << "Persona " << i+1 << endl;
                cout << "Nombre: " << personas[i].nombre << endl;
                cout << "Día de nacimiento: " << personas[i].dia_nacimiento << endl;
                cout << "Mes de nacimiento: " << personas[i].mes_nacimiento << endl;
                cout << "Año de nacimiento: " << personas[i].año_nacimiento << endl;
                
            }
        }
    }
    return 0;


}