#include <stdio.h>
#include <stdlib.h>

//retorna -1 caso a<b, 1 caso a>b e 0 caso a==b
int comparador (const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}

int main () {
   int i;
   int valores[5]={3,2,5,1,4};

   printf("Antes da funcao qsort: \n");
   for(i=0 ; i<5; i++) {
      printf("%d ", valores[i]);
   }

   qsort(valores, 5, sizeof(int), comparador);

   printf("\nDepois da funcao qsort: \n");
   for(i=0; i<5; i++ ) {
      printf("%d ", valores[i]);
   }

   return(0);
}
