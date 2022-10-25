/*
 * Algoritmo Suma
 * El algotimo conciste en:
 * Programa que realiza una suma
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a = 0, b = 0, c = 0;
    printf_s("Deme un numero: ");
    scanf_s("%d", &a);
    printf_s("Deme otro numero: ");
    scanf_s("%d", &b);
    c = a + b;
    printf_s("El resultado es: %d\n", c);
    system("pause");
    return 0;
}
