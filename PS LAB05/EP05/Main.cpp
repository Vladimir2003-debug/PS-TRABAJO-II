/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * 5. Modificar el problema anterior (4) para obtener los siguientes informes o datos:
• Listado de los mejores anotadores de triples de cada equipo.
• Máximo goleador de la liga de futbol.
• Suponiendo que el partido ganado significa tres puntos y el empate un punto.
• Equipo ganador de la liga de futbol.
• Equipo ganador de la liga de baloncesto
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

    cout << "Mejores anotadores triples de cada equipo" << endl;
    for(int i = 0; i < nBaloncesto; i++)
    {
        cout << "\tEquipo de baloncesto " << e_baloncesto[i].nombre << endl;
        cout << "\tMejor anotador de triples: " << e_baloncesto[i].mejorAnotadorTriples << endl;
    }

    string maxGoleador;
    int goles = 0;

    for(int i = 0; i < nFutbol ;i++)
    {
        if(e_futbol[i].golesAFavor > goles)
        {
            maxGoleador = e_futbol[i].nombre;
            goles = e_futbol[i].golesAFavor;
        }
    }

    cout << "El maximo goleador de la liga es: " << maxGoleador << endl;   

    EquipoFutbol ganadorFutbol;
    EquipoBaloncesto ganadorBaloncesto;


    int puntosE_Futbol=0;
    int puntosE_Baloncesto=0;

    for(int i = 0;i < nBaloncesto;i++)
    {
        puntosE_Baloncesto = e_baloncesto[i].victorias*3;
        if (e_baloncesto[i].victorias*3 > puntosE_Baloncesto)        
        {
            ganadorBaloncesto = e_baloncesto[i];
        }
    }
    cout << "El equipo ganador de baloncesto es :" << endl;
    cout << "Nombre: " << ganadorBaloncesto.nombre << endl; 

    int p_ganador_futbol=0;

    for (int  i = 0; i < nFutbol; i++)
    {
        puntosE_Futbol = e_futbol[i].victorias*3 + e_futbol[i].empates*2;
        if (puntosE_Futbol > p_ganador_futbol)
        {
            ganadorFutbol = e_futbol[i];
            p_ganador_futbol = puntosE_Futbol;
        }

    }

    cout << "El nombre del equipo ganador de futbol es :" << endl;
    cout << "Nombre" << ganadorFutbol.nombre << endl;

    return 0;
}
