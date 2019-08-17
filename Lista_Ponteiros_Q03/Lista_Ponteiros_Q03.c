#include <stdio.h>

int main (){
    int i=5, *p;
    p=&i;

    printf("%x",p);                 //R:Endereco da memoria de i em hexadecimal
    printf("\n%d", *p+2);           //R:5+2=7
    printf("\n%d", **&p);           //R:Conteudo de i. 5.
    printf("\n%d", 3**p);           //R:3*5=15
    printf("\n%d", **&p+4);         //R:5+4=9

}
