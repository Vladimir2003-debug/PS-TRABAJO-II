/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 2.
Hacer un programa en C++ para registrar los datos de tres libros como: título, autor, año y color del
libro. El color se deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul.
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

using namespace std;

enum Color{
    rojo,verde,azul
};

struct Libro{
    char titulo[20],autor[20];
    int anio;
    Color color;
};

void datosLibro(Libro[]);
void mostrarLibro(Libro[]);

int main(){
    Libro libro[3];
    datosLibro(libro);
    mostrarLibro(libro);
    return 0;
}

void datosLibro(Libro libro[3]){
    for(int i = 0; i < 3; i++){
        cout <<"Titulo libro " <<i+1 <<endl;
        cin.getline(libro[i].titulo,20);
        cout <<"Autor libro " <<i+1 <<endl;
        cin.getline(libro[i].autor,20);
        cout <<"Año libro " <<i+1 <<endl;
        cin >> libro[i].anio;
        cin.ignore();
    }
    
    libro[0].color = rojo;
    libro[1].color = verde;
    libro[2].color = azul;
}

void mostrarLibro(Libro libro[3]){
    for(int i = 0; i < 3; i++){
        cout <<"Titulo: " <<libro[i].titulo <<endl;
        cout <<"Autor: " <<libro[i].autor <<endl;
        cout <<"Año: " <<libro[i].anio <<endl;
    
        switch(libro[i].color){
            case rojo:
            cout <<"Color: Rojo" <<endl; break;
            case verde:
            cout <<"Color: Verde" <<endl; break;
            case azul:
            cout <<"Color: Azul" <<endl; break;
        }
    }
}
