/*
 * Algoritmo resta
 * El algotimo conciste en:
 * Un cajero que cobra 25 debe devolver el cambio exacto con monedas de 1,5,10
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a = 0, b = 0, c = 0;
    printf_s("Dame un numero: ");
    scanf("%d", &a);
    printf_s("Dame otro numero: ");
    scanf("%d", &b);
    c = a - b;
    printf("El resultado de la resta es: %d\n", c);
    system("pause");
    return 0;
}
