#include <stdio.h>

int main (){
    int i=3, j=5,t;
    int *p,*q;
    p=&i;
    q=&j;

    printf("Valor de p=%d\nValor de q=%d\n", *p, *q);

    //p==&i;      //R: P ter� o mesmo valor de endere�o que i. Resultando em uma compara��o verdadeira.
    //*p - *q;    //R: Como p e q s�o um ponteiros para i e j, respectivamente, o resultado ser� -2.
    //**&p;       //R:

    t=3-*p/(*q)+7;
    printf ("%d", t);
}
