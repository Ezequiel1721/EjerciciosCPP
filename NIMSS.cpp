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
@    Introducir un entero positivo N requerido por N número
@    del Seguro Social (NIMSS). Cada NIMSS se introducirá
@    en tres partes: un número de tres dígitos seguido por
@    uno de dos y éste por uno de cuatro. Imprimir la lista
@    de los NIMSS como números de nueve dígitos.
@
@*/

//Declaración de librerías a utilizar
#include <iostream>

using namespace std;

int main() {

    //Declaración de variables a utilizar.
    int n;
    string nimss1;
    string nimss2;
    string nimss3;

    //captura del total de NIMSS que el usuario desea insertar.
    cout << "Introduce la cantidad de NIMSS (numero de seguro social)" << endl;
    cin >> n;

    //Declaración de un arreglo para contener todos los NIMSS
    string arr[n];


    //ciclo for para hacer la captura de los NIMSS según el número que se haya introducido.
    for (int i = 0; i < n; i++)
    {
        cout << "Numero " << i + 1 << endl;
        cout << "Ingresa los primeros tres digitos de tu NIMSS: " << endl;
        cin >> nimss1;
        cout << "Ingresa los siguientes dos digitos de tu NIMSS: " << endl;
        cin >> nimss2;
        cout << "Ingresa los ultimos cuatro digitos de tu NIMSS: " << endl;
        cin >> nimss3;

        //Concatenación de las tres partes para ingresarlas como un número en el arreglo.
        arr[i] = nimss1 + nimss2 + nimss3;
    };

    //Impresión de todos los NIMSS en pantalla
    cout << "Lista de todos los NIMSS:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}