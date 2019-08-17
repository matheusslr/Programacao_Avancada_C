#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);                       //R:indice do vetor
    printf("vet[%d] = %.1f",i, vet[i]);         //R:valor v[i] com um algorismo significativo
    printf("*(f + %d) = %.1f",i, *(f+i));       //R:conteudo de v[i] com um algorismo significativo. Porem, utilizando do conceito de ponteiro para 'caminhar' pelo vetor
    printf("&vet[%d] = %X",i, &vet[i]);         //R:endereço de v[i] em hexadecimal maiusculo
    printf("(f + %d) = %X",i, f+i);             //R:endereco de v[i] em hexadecimal maisculo, utilizando conceito de ponteiro para 'caminhar' pelos enderecos de memoria de cada indice do vetor
  }
}
