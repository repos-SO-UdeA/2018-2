/*
 * Name         : p1_ex13.c
 * Author       : Sistemas operativos UdeA
 * Description  : Ejemplo con la estructura while
 * Compilation  : gcc -Wall p1_ex13.c -o p1_ex13.out
 * Execution    : ./p1_ex13.out
*/

#include <stdio.h>

const unsigned CENTINELA = 9999;
int main() {
  int num; // Numero a leer
  int sum = 0; // Suma de los numeros
  scanf("%u",&num);
  while(num != CENTINELA) {
    sum += num;
    scanf("%d",&num);
  }
  printf("\nLa suma es: %d\n", sum);
  return 0;
}
