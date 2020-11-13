/* Ejercicio para prueba.cpp 
Ejercicio retribuido del libro: Problemas para resolver por computadora
Ejercicio 31 de p�gina 165
A un repartidor se le paga $1 el primer dia de trabajo, $2 el segundo, $4 el tercero, y as� sucesivamente, duplicando su percepcion 
cada d�a durante 30 d�as, Calcular su ingreso al trig�simo d�a y su total por los 30 d�as.
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int ganancias [30]; 
    int total = 0;
    for (int i = 0; i < 30; i++) {

        if (i == 0) {
            ganancias[i] = 1;
        }
        else {
            ganancias[i] = ganancias[i - 1] * 2;
        }

        total += ganancias[i];
    }

    cout << "La ganancia el trigesimo dia es igual a " << ganancias[29];
    cout<< "La ganancia el trigesimo dia es igual a " << total;
}


