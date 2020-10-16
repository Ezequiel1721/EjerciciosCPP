/*
@@ Instituto Tecnológico de Tijuana
@@ Depto de Sistemas y Computación
@@ Ing. En Sistemas Computacionales
@@ Lenguajes de Interfaz
@@
@@ Autor : Ezequiel Galván Rodríguez @nickname: Ezequiel1721
@@ Repositorio: https://github.com/Ezequiel1721/EjerciciosCPP.git
@@ Fecha de revisión: 16 de Octubre de 2020
@@
@
@ Objetivo del programa:
@    Encontrar el valor de x^4 - 8x^2 - 14x + 7
@    Para x = 2,4,6,8,...,40.
@
@*/

//Declaración de librerías a utilizar
//Se incluye cmath porque se necesitarán métodos para obtener potencias
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //Declaración de variables a utilizar
    int res;

    cout << "Encontrar el valor de: x^4 - 8x^2 - 14x + 7" << endl;

    //Ciclo for que va de 2 en 2, para ir obteniendo el valor de x en cada iteración hasta el 40
    for (int x = 2; x <= 40; x += 2)
    {
        //Se aplica la fórmula utilizando el valor de x para al final imprimir el resultado en pantalla
        cout << "Para X = " << x << ": ";
        res = pow(x,4) - (8 * pow(x,2)) - (14 * x) + 7;
        cout << res << endl;
    };

    return 0;
}
