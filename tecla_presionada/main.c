/*
 * Algoritmo tecla presionada
 * El algotimo conciste en:
 * programa que recibe una tecla y la imprime
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char tecla = ' ';
    printf_s("Presiona una tecla: ");
    tecla = getchar();
    printf_s("La tecla fue: %c\n", tecla);
    system("pause");
    return 0;
}
