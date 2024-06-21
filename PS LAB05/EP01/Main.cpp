/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 1. Escribir un programa para calcular el número de días que hay entre dos fechas; declarar fecha
como una estructura.
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

// structu de una fecha
struct Fecha {
    int dia;
    int mes;
    int año;
};

int main()
{
    
    Fecha f1, f2;
    int dif_days;
    int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout <<"Ingrese la fecha 1" <<endl;
    cout <<"Dia: "; cin >> f1.dia;
    cout <<"Mes: "; cin >> f1.mes;
    cout <<"Año: "; cin >> f1.año;
    cout <<"Ingrese la fecha 2" <<endl;
    cout <<"Dia: "; cin >> f2.dia;
    cout <<"Mes: "; cin >> f2.mes;
    cout <<"Año: "; cin >> f2.año;
    
    if(f1.año < f2.año)
    {
        
    }


    

    if(f1.dia == f1.dia){
        if(f1.mes == f1.mes){
            cout <<"FELIZ CUMPLEAÃ‘OS. FELICITACIONES!!!!" <<endl;
        }else{
            cout <<"Hoy es el mismo dia de tu cumpleaÃ±os." <<endl;
            cout <<"Pero de diferente mes. ";
        }
    }else{
        cout <<"Hoy no es tu cumpleaÃ±os." <<endl;
    }
    
    return 0;
}