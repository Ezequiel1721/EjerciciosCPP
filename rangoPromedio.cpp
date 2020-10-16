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
@    Introducir un entero positivo N < 75 seguido por N números
@    reales. Imprimir cada uno de los números y su promedio;
@    imprimir enseguida todos los números que queden dentro de
@    rango de cinco unidades del promedio.
@
@*/

//Declaración de librerías a utilizar
#include <iostream>
#include <list>

using namespace std;

//*********************** Funciones ****************************

/* función que recibe una lista y un entero, para
   imprimir la lista y obtener el promedio */
double mostrarListaYPromedio(list <double> listaN, int n)
{
    //Declaración de variables a utilizar
    double sum = n;
    double prom;

    //Se declara un iterador para saber la posición de cada valor en la lista
    list<double>::iterator pos;
    pos = listaN.begin();

    cout << "Todos los numeros:" << endl;
    cout << sum << endl;

    /* Se imprime cada elemento de la lista recorriendola a través del iterador
       incrementando su valor en 1 hasta llegar al final de la lista */
    while(pos != listaN.end())
    {
        cout << *pos << endl;
        sum += *pos;
        pos++;
    }

    //Se obtiene el promedio y es retornado
    prom = sum / (listaN.size() + 1);
    cout << "Promedio: " << prom << endl;
    return prom;
}

/* Función que recibe como parámetro una lista, un entero y promedio,
   para saber si están dentro del rango del promedio */
void enRango(list<double> listaN, double prom, int n)
{
    /* Se declara un contador, solo para que en caso de no tener ningún valor
       dentro del rango, éste contador se quede en 0 y poder imprimir que
       ningún elemento está dentro del rango */
    cout << "Todos los numeros dentro del rango de 5 unidades del promedio:" << endl;
    int c = 0;

    /* Se pregunta si el valor entero está dentro del rango, ya que el entero
       que se introduce nunca es ingresado a la lista, por eso se pregunta por
       separado */
    if((n >= prom - 5) && (n <= prom + 5))
    {
        cout << n << endl;
        c++;
    }

    // Se declara un iterador para recorrer la lista
    list<double>::iterator pos;
    pos = listaN.begin();

    /* Se recorre la lista y se pregunta si cada valor
       está dentro del rango, si es así, se imprime y
       se incrementa el contador*/
    while(pos != listaN.end())
    {
        if((*pos >= prom - 5) && (*pos <= prom + 5))
        {
            cout << *pos << endl;
            c++;
        }
        pos++;
    }


    /* Si el contador queda en 0, quiere decir que ningún valor
       está en el rango y se imprime Ninguno */
    if (c == 0)
    {
        cout << "Ninguno" << endl;
    }
}

//************************* MAIN ***************************

int main() {

    // Se declaran las variables a utilizar
    int n;
    double temp;
    char res;
    double prom;
    list <double> listaN;

    /* Se declara un while infinito para capturar los números, solo se terminará
       cuando el usuario ya no quiera introducir más valores */
    while (true)
    {
        cout << "Introduce un numero entero menor a 75:" << endl;
        cin >> n;

        // Se pregunta si el entero es menor a 75
        if (n < 75)
        {
            // Ésta es una etiqueta para poder regresar utilizando goto
            Pregunta:

            // Se capturan los números reales y se introducen en la lista
            cout << "Ingresa un numero real:" << endl;
            cin >> temp;
            listaN.push_back(temp);

            // Pregunta para continuar con el ciclo o salirse
            cout << "Quieres ingresar otro numero real? s/n" << endl;
            cin >> res;


            if (res == 's')
            {
                // Se regresa a la etiqueta con el mismo nombre
                goto Pregunta;
            }
            else
            {
                // Se rompe el ciclo while
                break;
            }
        }
        else
            {
            // Mensaje en caso de que el valor entero no sea menor a 75
            cout << "vuelve a intentarlo" << endl;
        }
    }

    // Se mandan llamar a las funciones
    prom = mostrarListaYPromedio(listaN, n);
    enRango(listaN, prom, n);


    return 0;
}