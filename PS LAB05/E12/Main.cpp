/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 12.
Utilizando estructuras en C++, crear un programa donde se ingrese la fecha actual y se comprube si
corresponde al día de tu cumpleaños. Mostrar un mensaje de felicitaciones si fuera el caso
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

struct Fecha{
    int dia,mes,anio;
};

int main(){
    Fecha hoy, cumpleanios;
    cout <<"Ingrese la fecha de hoy" <<endl;
    cout <<"Dia: "; cin >> hoy.dia;
    cout <<"Mes: "; cin >> hoy.mes;
    cout <<"AÃ±o: "; cin >> hoy.anio;
    cout <<"Ingrese su cumpleaÃ±os" <<endl;
    cout <<"Dia: "; cin >> cumpleanios.dia;
    cout <<"Mes: "; cin >> cumpleanios.mes;
    cout <<"AÃ±o: "; cin >> cumpleanios.anio;
    
    if(cumpleanios.dia == hoy.dia){
        if(cumpleanios.mes == hoy.mes){
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
