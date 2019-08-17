#include <stdio.h>

int main(){
    int i=1,j=2;
    int *p,*q;

    p = i;
    q = &j;
    p = &*&i;
    //i = (*&)j;
    i = *&j;        //Unica atribuição ilegal: i=(*&)j.
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;

    printf("%d",p);
    printf("\n%d",i);




}
