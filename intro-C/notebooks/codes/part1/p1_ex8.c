/*
 * Name         : p1_ex1.c
 * Author       : Stephen Prata
 * Description  : Ejercicio con scanf y printf
 * Compilation  : gcc -Wall p1_ex1.c -o p1_ex1.out
 * Execution    : ./p1_ex1.out
*/

#include <stdio.h>

int main() {
  int edad;
  float estatura;
  printf("Digite la edad: ");
  scanf("%d", &edad);
  printf("Digite la estatura (en metros): ");
  scanf("%f", &estatura);
  printf("\n------------------------------------------\n");
  printf("Edad: %d\n",edad);
  printf("Estatura %f\n",estatura);
  return 0;
}
