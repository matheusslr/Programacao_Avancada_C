#include <stdio.h>

void IncrementoComPonteiro(int *x){
    (*x)++;
}

void IncrementoSemPonteiro(int x){
    x++;
}

int main (){
    int p, x1;
    int *x2;

    x2=&p;
    x1=p;

    IncrementoComPonteiro(*x2);
    IncrementoSemPonteiro(x1);

    printf("Incremento de x por ponteiro: %d", *x2);
    printf("\nIncremento de x sem ponteiro: %d", x1);


}
