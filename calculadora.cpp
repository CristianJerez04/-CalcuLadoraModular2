#include "calculadora.h"

// Suma dos enteros
int sumar(int a, int b) { return a + b; }

// Resta dos enteros
int restar(int a, int b) { return a - b; }

// Multiplica dos enteros
int multiplicar(int a, int b) { return a * b; }

// Divide dos enteros, evitando división por cero
int dividir(int a, int b) { return (b != 0) ? a / b : 0; }

// Eleva base a exponente usando bucle iterativo
int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}
