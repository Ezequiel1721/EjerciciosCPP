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
@    En el villancio "los 12 días de Navidad", se distribuyen regalos
@    a la cantante de acuerdo al siguiente orden: el primer día recibe
@    una perdiz en un árbol de peras; el segundo, dos tórtolas y una
@    perdiz en un árbol de peras; el tercero, tres pollitas, dos
@    tórtolas y una perdiz en un árbol de peras. Al cabo del día
@    doceavo, recibió 12 + 11 + ... + 2 + 1 regalos. ¿Cuántos regalos
@    fueron en total?
@
@*/

// Declaración de librerías a utilizar
#include <iostream>

using namespace std;

//************************** FUNCIONES *******************************

/* Función que se manda a llamar a sí misma, recibe un entero, el cual
   se suma de manera regresiva hasta llegar a 1 */
int sumaRecursiva(int n)
{
    // Condición para romper con la recursividad
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumaRecursiva(n - 1);
    }
}

//************************** MAIN ************************************

int main() {

    // Declaración de variables a utilizar
    int sum = 0;

    /* ciclo for para mandar llamar a la función recursiva, con cada
    valor de la secuencia */
    for (int i = 1; i <= 12; i++)
    {
        // Cada resultado se va sumando en una variable
        sum += sumaRecursiva(i);
    }

    // Se imprime la variable con el resultado final de la suma de todos los regalos
    cout << "Total de regalos: " << sum << endl;
    return 0;
}