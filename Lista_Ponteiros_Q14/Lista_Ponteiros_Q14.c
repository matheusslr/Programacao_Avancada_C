#include <stdio.h>

int main (){
    int v[5]={3,2,5,1,4};
    int i,j, aux;


    for (i=0; i<5; i++){
        for (j=0; j<4; j++){
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    for (i=0; i<5; i++){
        printf("%d ", v[i]);
    }

}
