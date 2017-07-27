#include "Evaluador.h"
#include <iostream>
using namespace std;
int result;
//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    result = a+b;
    return result;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    result = a-b;
    return result;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    result = a*b;
    return result;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    result = a/b;
    return result;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b){
        return a;
    }
    return b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a<b){
        return a;
    }
    return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b){
        if(a<c){
            return c;
        }
        return a;
    } else if(b<c){
        return c;
    }
    return b;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion] = valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    result = arreglo[posicion];
    return result;
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor=0;
    for(int i=0; i<tamano;i++){
        if(arreglo[i]>mayor){
            mayor=arreglo[i];
        }
    }
    return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int mayor=0;
    for(int i=0; i<tamano;i++){
        if(arreglo[i]<mayor){
            mayor=arreglo[i];
        }
    }
    return mayor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int acumulador = 0;
    for(int i=0; i< tamano; i++){
        acumulador+=arreglo[i];
    }
    return acumulador/tamano;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
