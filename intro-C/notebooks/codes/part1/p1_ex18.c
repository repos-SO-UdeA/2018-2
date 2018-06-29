/*
 * Name         : p1_ex18.c
 * Author       : Sistemas operativos UdeA
 * Description  : Ejemplo con la estructura do-while
 * Compilation  : gcc -Wall p1_ex18.c -o p1_ex18.out
 * Execution    : ./p1_ex18.out
*/

#include <stdio.h>

int main() {
  int num, f;
  printf("Ingrese el numero");
  scanf("%d",&num);
  f = factorial(num);
  printf("%d! = %d\n", num, f);
  return 0;
}
