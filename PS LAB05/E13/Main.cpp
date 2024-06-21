/**
 * @file Main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-20
 * Ejercicio 13.
Utilizando estructuras en C++, mostrar que las estructuras en C no pueden tener funciones miembro
dentro de una estructura pero en estructuras en C++ pueden tener funciones miembro así como
atributos
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

struct marks {
    int num;
    
    void
    Set(int temp)//FunciÃ³n niembro dentro de la estructura para tomar la entrada y alojarla en"num"
    {
        num = temp;
    }
    
    void display()//funcion usada para mostrar los valores
    {
        cout << "num = " << num << endl;
    }
};

//programa principal
int main()
{
    marks m1;
    m1.Set(9); //llamando a la funciÃ³n dentro de la estructura para inicializar el valor de "num"
    m1.display(); //llamando a la funciÃ³n dentro de la estructura para mostrar el valor de "num"
}