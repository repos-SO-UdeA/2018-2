/*
 * Name         : p1_ex9.c
 * Author       : Sistemas operativos UdeA
 * Description  : Ejercicio con scanf y printf
 * Compilation  : gcc -Wall p1_ex9.c -o p1_ex9.out
 * Execution    : ./p1_ex9.out
*/

#include <stdio.h>

int main() {
  char nombre[15]; // Almacena maximo 14 caracteres
  printf("Digite el nombre: ");
  scanf("%s",nombre);
  printf("\nHola: %s\n",nombre);
  return 0;
}
