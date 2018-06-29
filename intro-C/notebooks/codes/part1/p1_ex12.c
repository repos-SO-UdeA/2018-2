/*
 * Name         : p1_ex12.c
 * Author       : Sistemas operativos UdeA
 * Description  : Ejemplo con la estructura for
 * Compilation  : gcc -Wall p1_ex12.c -o p1_ex12.out
 * Execution    : ./p1_ex12.out
*/

#include <stdio.h>

int main() {
  int N;   // Cantidad de numeros
  int num; // Numero a leer
  int i;   // i-esimo numero
  int sum = 0; // Suma de los numeros
  printf("Ingrese la cantidad de numeros a sumar: ");
  scanf("%d",&N);
  for(i = 0; i < N; i++) {
    scanf("%d",&num);
    sum += num;
  }
  printf("\nLa suma es: %d\n",sum);
  return 0;
}
