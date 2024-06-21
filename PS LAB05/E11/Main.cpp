/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 11.
Utilizando estructuras en C++, escribir un programa que establezca las coordenadas de una curva en
el dominio [-3,3]. El programa sólo deberá pedir la altura que tenga en el punto del dominio, luego,
mostrar las coordenadas resultantes.
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

struct Punto{
    int x,y;
};

int main(){
    Punto punto[7] = {0,0};
    
    for(int i = 0; i < 7; i++){
        cout <<"Introduce la altura de la curva en " <<i - 3;
        cout <<": ";
        cin >> punto[i].y;
        cout <<endl;
    }

    cout <<"Las coordenadas son: " <<endl;
    
    for(int i = 0; i < 7; i++){
        cout <<"(" <<i - 3 <<"," <<punto[i].y <<")\n";
    }
    
    return 0;
}