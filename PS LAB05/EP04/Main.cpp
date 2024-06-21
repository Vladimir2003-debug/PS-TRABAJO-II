/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 4. Se quiere informatizar los resultados obtenidos por los equipos de baloncesto y de futbol de la
localidad Arequipeña. La información de cada equipo es:
    • Nombre del equipo.
    • Número de victorias.
    • Número de derrotas.
Para los equipos de baloncesto añadir la siguiente información:
    • Número de pérdidas de balón.
    • Número de rebotes cogidos.
    • Nombre del mejor anotador de triples.
    • Número de triples del mejor anotador de triples.
Para los equipos de futbol añadir la información:
    • Número de empates.
    • Número de goles a favor.
    • Nombre del goleador del equipo.
    • Número de goles del goleador
Escribir un programa para introducir la información para todos los integrantes en ambas ligas.
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>

using namespace std;

struct Equipo {
    string nombre;
    int victorias;
    int derrotas;

};

struct EquipoBaloncesto :public Equipo {
    int perdidasBalon;
    int rebotesCogidos;
    string mejorAnotadorTriples;
    int triplesMejorAnotador;

};

struct EquipoFutbol :public Equipo {
    int empates;
    int golesAFavor;
    string goleadorEquipo;
    int golesGoleador;
};

int main(){
    int nBaloncesto, nFutbol;
    cout << "Ingrese el número de equipos de baloncesto: " << endl;
    cin >> nBaloncesto;

    cout << "Ingrese el numero de equipos de futbol" << endl;
    cin >> nFutbol;

    EquipoBaloncesto e_baloncesto[nBaloncesto];
    EquipoFutbol e_futbol[nFutbol];

    for(int i = 0;i < nBaloncesto;i++)
    {
        cout << "Ingrese el nombre del equipo de baloncesto " << i+1 << endl
        << "Nombre: ";
        cin >> e_baloncesto[i].nombre;
        cout << "Ingrese el número de victorias: ";
        cin >> e_baloncesto[i].victorias;
        cout << "Ingrese el número de derrotas: ";
        cin >> e_baloncesto[i].derrotas;
        cout << "Ingrese el número de perdidas de balón: ";
        cin >> e_baloncesto[i].perdidasBalon;
        cout << "Ingrese el número de rebotes cogidos: ";
        cin >> e_baloncesto[i].rebotesCogidos;
        cout << "Ingrese el nombre del mejor anotador de triples: ";
        cin >> e_baloncesto[i].mejorAnotadorTriples;
        cout << "Ingrese el número de triples del mejor anotador: ";
        cin >> e_baloncesto[i].triplesMejorAnotador;
        
    }


    for(int i =0; i<nFutbol ;i++)
    {
        cout << "Ingrese el nombre del equipo de futbol " << i+1 << endl
        << "Nombre: ";
        cin >> e_futbol[i].nombre;
        cout << "Ingrese el número de victorias: ";
        cin >> e_futbol[i].victorias;
        cout << "Ingrese el número de derrotas: ";
        cin >> e_futbol[i].derrotas;
        cout << "Ingrese el número de empates: ";
        cin >> e_futbol[i].empates;
        cout << "Ingrese el número de goles a favor: ";
        cin >> e_futbol[i].golesAFavor;

    }

    for(int i = 0;i<nBaloncesto;i++) {
        cout << "Equipo de baloncesto " << i+1 << endl;
        cout << "Nombre: " << e_baloncesto[i].nombre << endl;
        cout << "Victorias: " << e_baloncesto[i].victorias << endl;
        cout << "Derrotas:" << e_baloncesto[i].derrotas << endl;
        cout << "Perdidas balon: " << e_baloncesto[i].perdidasBalon << endl;
        cout << "Rebotes cogidos: " << e_baloncesto[i].rebotesCogidos << endl;
        cout << "Mejor anotador triples: " << e_baloncesto[i].mejorAnotadorTriples << endl;
        cout << "Triples del mejor anotador: " << e_baloncesto[i].triplesMejorAnotador << endl;
        cout << "\n" << endl;
    }

    cout << "\n" << endl;
    for (int i = 0;i < nFutbol; i++)
    {
        cout << "Equipo futbol " << i+1 << endl;
        cout << "Nombre: " << e_futbol[i].nombre << endl;
        cout << "Victorias: " << e_futbol[i].victorias << endl;
        cout << "Derrotas: " << e_futbol[i].derrotas << endl;
        cout << "Empates: " << e_futbol[i].empates << endl;
        cout << "Goles a favor: " << e_futbol[i].golesAFavor << endl;
        cout << "\n" << endl;
        
    }

    return 0;
}
