/*
 * Name         : p1_ex10.c
 * Author       : Sistemas operativos UdeA
 * Description  : Ejemplo con la estructura if/else-if/else
 * Compilation  : gcc -Wall p1_ex10.c -o p1_ex10.out
 * Execution    : ./p1_ex10.out
*/

#include <stdio.h>

int main() {
  float nota;
  printf("Introduzca la nota que saco el pelao: ");
  scanf("%f",&nota);
  /* Implementacion con if anidados */
  if(nota >= 4.5) {
    // nota >= 4.5 --> E
	printf("La nota es: E\n");
  }
  else if(nota >= 4.0) {
    // nota < 4.5 y nota >= 4.0 --> 4 <= nota < 4.5 --> B+
	printf("La nota es: B+\n");
  }
  else if(nota >= 3.5) {
	// nota < 4.0 y nota >= 3.5 --> 3.5 <= nota < 4 --> B
	printf("La nota es: B\n");
  }
  else if(nota >= 3.0) {
	// nota < 3.5 y nota >= 3.0 --> 3.0 <= nota < 3.5 --> B-
	printf("La nota es: B-\n");
  }
  else {
	// nota < 3.0
	printf("La nota es: I\n");
  }
  return 0;
}
