#include <stdio.h>

int main(){
    int mat[4]={1,2,3,4};
    int *p, x;

    p=mat+1;
    //p=mat++;
    //p=++mat;          //Expressoes corretas: p=mat+1 e x=(*mat)++
    x=(*mat)++;

    printf("%d",p);
    printf("\n%d",x);

}
