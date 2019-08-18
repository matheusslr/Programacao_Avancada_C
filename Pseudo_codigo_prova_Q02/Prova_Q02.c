#include <stdio.h>
#include <math.h>

void ConvertMatriz_Int(char m[8][8], int *result){
    int i,j;
    int soma=0, aux=0;

    for(i=7; i>=0; i--){
        for(j=7; j>=0; j--){
            soma=soma+m[i][j]*pow(2,aux);
            aux++;
        }
        result[i]=soma;
        aux=0; soma=0;
    }
}

void ConvertInt_Matriz(int *result){
    int i,j;
    char matriz_convertida[8][8];

    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            matriz_convertida[i][j]=result[i]%2;
            result[i]=result[i]/2;
        }
    }

    for (i=0; i<8; i++){
        for(j=7; j>=0; j--){
            printf("%d ", matriz_convertida[i][j]);
        }
        printf("\n");
    }
}

int main (void){
    char m[8][8];
    m[0][0]=0; m[0][1]=1; m[0][2]=1; m[0][3]=1; m[0][4]=1;m[0][5]=0; m[0][6]=0; m[0][7]=0;
    m[1][0]=0; m[1][1]=1; m[1][2]=0; m[1][3]=0; m[1][4]=0; m[1][5]=1; m[1][6]=0; m[1][7]=0;
    m[2][0]=0; m[2][1]=1; m[2][2]=0; m[2][3]=0; m[2][4]=0; m[2][5]=1; m[2][6]=0; m[2][7]=0;
    m[3][0]=0; m[3][1]=1; m[3][2]=1; m[3][3]=1; m[3][4]=1; m[3][5]=1; m[3][6]=0; m[3][7]=0;
    m[4][0]=0; m[4][1]=1; m[4][2]=0; m[4][3]=0; m[4][4]=0; m[4][5]=0; m[4][6]=1; m[4][7]=0;     //matriz principal
    m[5][0]=0; m[5][1]=1; m[5][2]=0; m[5][3]=0; m[5][4]=0; m[5][5]=0; m[5][6]=1; m[5][7]=0;
    m[6][0]=0; m[6][1]=1; m[6][2]=0; m[6][3]=0; m[6][4]=0; m[6][5]=0; m[6][6]=1; m[6][7]=0;
    m[7][0]=0; m[7][1]=1; m[7][2]=1; m[7][3]=1; m[7][4]=1; m[7][5]=1; m[7][6]=1; m[7][7]=0;

    int i, j;

    printf("Matriz principal:\n");
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    int *result;
    result=(int*)malloc(8*sizeof(int));

    ConvertMatriz_Int(m,result);    //converte a matriz principal em inteiro e aloca os valores em um ponteiro

    printf("\nBinarios convertidos para inteiros:\n");

    for(i=0; i<8; i++){
        printf("Linha %d: %d\n", i, result[i]);
    }

    printf("\nInteiros convertidos para matriz binaria:\n");

    ConvertInt_Matriz(result);      //converte o ponteiro com os inteiros em uma matriz binaria, identica a matriz principal

    free(result);
}
