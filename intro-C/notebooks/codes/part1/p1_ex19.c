/*
 * Name         : p1_ex19.c
 * Author       : Sistemas operativos UdeA
 * Description  : Ejemplo con la estructura do-while
 * Compilation  : gcc -Wall p1_ex19.c -o p1_ex19.out
 * Execution    : ./p1_ex19.out
*/

#include <stdio.h>

/* Declaracion de funciones */
int factorial(int n);

/* Funcion principal */
int main() {
  int num; 
  int fac;
  printf("Digite un numero positivo o -1 para terminar: ");
  scanf("%d", &num);
  while(num != -1) {
	 fac = factorial(num);
     printf("%d! = %d\n\n", num, fac);
     printf("Digite un numero positivo o -1 para terminar: ");
     scanf("%d", &num); 	 
  }
  printf("\nSuerte es que le digo...");
  return 0;
}

/* Definicion de funciones */ 
int factorial(int n) {
  if (n > 0) {
    return n*factorial(n-1);
  }
  else {
    return 1;
  }
}
