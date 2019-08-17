#include <stdio.h>

int main(){
    int pulo[5]={1,2,3,4,5};
    
    /*  alternativas
        
        (pulo + 2);
        *(pulo + 4);
        pulo + 4;
        pulo + 2;        */
    
    
    printf("%d",*(pulo+2));     //R:a expressao que corresponde o terceiro elemento do vetor é *(pulo+2)

}
