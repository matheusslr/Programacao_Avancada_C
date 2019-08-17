#include <stdio.h>

int main(){
    char x1[4];
    short int x2[4],i;
    float x3[4];
    double x4[4];

    //char: 4092, 4093, 4094, 4095
    for (i=0; i<4; i++){
        printf("%d ", &(x1[i]));
    }

        printf("\n");

    //short int: 4092, 4094, 4096, 4098
    for (i=0; i<4; i++){
        printf("%d ", &(x2[i]));
    }

        printf("\n");

    //float: 4092, 4096, 4100, 4104
    for (i=0; i<4; i++){
        printf("%d ", &(x3[i]));
    }

        printf("\n");

    //double: 4092, 4100, 4108, 4016
    for (i=0; i<4; i++){
        printf("%d ", &(x4[i]));
    }


}
