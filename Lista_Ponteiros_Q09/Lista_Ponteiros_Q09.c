#include <stdio.h>

/*

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));         //R:imprime os valores de vet[0] até vet[2]: 4, 9 e 13.
  }
}   */



int main(){
  int vet[] = {4,9,13};
  int i;                            //R:imprime o valores de v[i] em hexadecimal maiusculo
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}
