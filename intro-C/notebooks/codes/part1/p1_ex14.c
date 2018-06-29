/*
 * Name         : p1_ex14.c
 * Author       : Sistemas operativos UdeA
 * Description  : Ejemplo con la estructura do-while
 * Compilation  : gcc -Wall p1_ex14.c -o p1_ex14.out
 * Execution    : ./p1_ex14.out
*/


#include <stdio.h>

int num; // Numero a leer

int main() {
  
  do {
    scanf("%d",&num); 
    if(num >= 0) {
      printf("Numero positivo, siga usted\n"); 
    }
    else {
      printf("Numero negativo asi que suerte\n"); 
    }
  } while(num >= 0);    
  printf("\nFin del programa\n");
  return 0;
}
