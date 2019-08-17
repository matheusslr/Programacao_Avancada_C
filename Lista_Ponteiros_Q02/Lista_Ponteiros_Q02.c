#include <stdio.h>

int main (){
    int i=3, j=5,t;
    int *p,*q;
    p=&i;
    q=&j;

    printf("Valor de p=%d\nValor de q=%d\n", *p, *q);

    //p==&i;      //R: P terá o mesmo valor de endereço que i. Resultando em uma comparação verdadeira.
    //*p - *q;    //R: Como p e q são um ponteiros para i e j, respectivamente, o resultado será -2.
    //**&p;       //R:3.

    t=3-*p/(*q)+7;
    printf ("%d", t);       //R:10.
}
