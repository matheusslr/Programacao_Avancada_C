#include <stdio.h>
#include <math.h>


void DesenhaEsfera(char ***matriz){
    int i,j,k;

    for (i=0; i<16; i++){
        for(j=0; j<16; j++){
            for(k=0; k<16; k++){
                if(((pow((i-8),2)+pow((j-8),2)+pow((k-8),2))<=0)){
                        matriz[i][j][k]=1;
                   }
            }
        }
    }

    for(i=0; i<16; i++){
        for(j=0; j<16; j++){
            for(k=0; k<16; k++){
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}

void LiberaMem(char ***matriz){
    int i,j;

    for(i=0; i<16; i++){
        for(j=0; j<16; j++){
            free(matriz[i][j]);
        }
     }

     for(i=0; i<16; i++){
            free(matriz[i]);
     }

     free(matriz);
}

int main (){
    char ***matriz;
    int i, j, k;

    //alocando os planos
    matriz=(char***)malloc(16*16*16*sizeof(char**));

    //alocando as linhas
    for(i=0; i<16; i++){
        matriz[i]=malloc(16*sizeof(char*));
    }

    //alocando as colunas
    for(i=0; i<16; i++){
        for(j=0; j<16; j++){
            matriz[i][j]=malloc(16*sizeof(char));
        }
    }

    //atribuindo valores para matriz e imprimindo
    DesenhaEsfera(matriz);

    LiberaMem(matriz);
}
