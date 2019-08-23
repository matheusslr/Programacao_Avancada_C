#include <stdio.h>

int main (){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;                       //valido
    scanf("%f", &aloha);                    //valido
    aloha = value;                          //invalido
    printf("%f", aloha);                    //invalido
    coisas[4][4] = aloha[3];                //valido
    coisas[5] = aloha;                      //invalido
    pf = value;                             //invalido
    pf = aloha;                             //invalido

    return 0;
}
