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
@    Arreglar un conjunto de tres números en orden descendente.
@    Por ejemplo, para los valores 12, -7, 32, imprimir 32, 12, -7.
@
@*/

// Declaración de librerías a utilizar
#include <iostream>

using namespace std;

//**************************** FUNCIONES ******************************

/* Declaración de una función para ordenar el arreglo, recibe como parámetro un arreglo
   y retorna un puntero */
int* ordenarArreglo(int arr[]){

    /* Se utiliza el método de ordenación burbuja, en el que se pregunta
       si cada elemento es menor que el siguiente, en caso de no serlo se utiliza
       una variable temporal para poder intercambiar esos dos elemtos de posición,
       todo esto se repite hasta llegar al final */

    int temp;
    for (int i = 0;i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

// Método para mostrar cada uno de los elementos del arreglo
void mostrarArreglo(int arr[])
{
    for (int i = 0; i < 3; i++)
    {
        if (i < 2)
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i];
        }
    }
}

//******************************* MAIN ****************************

int main() {

    // Se declara el arreglo de longitud 3
    int arr[3];

    // Se capturan los números para ingresarlos al arreglo
    cout << "Ingresa el primer numero:" << endl;
    cin >> arr[0];
    cout << "Ingresa el segundo numero:" << endl;
    cin >> arr[1];
    cout << "Ingresa el tercer numero:" << endl;
    cin >> arr[2];

    // Se declara un puntero para asignarle el valor retornado por la función que ordena el arreglo
    int *arr2;
    arr2 = ordenarArreglo(arr);

    // Se manda llamar a la función que imprime el arreglo
    cout << "Numeros ordenados de mayor a menor:" << endl;
    mostrarArreglo(arr2);

    return 0;
}