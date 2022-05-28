/*Faça uma função que receba quatro valores e retorne sua média.*/

#include <stdlib.h>
#include <stdio.h>

float retornaMedia (float a, float b, float c, float d);

int main (){
float a, b, c, d, result=0;

    printf("Digite os quatro valores para calcular a media: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    result = retornaMedia (a, b, c, d);
    printf("%f", result);

    return 0;
}

float retornaMedia (float a, float b, float c, float d) {
    float media=0;

    media = ((a+b+c+d)/4);
    return media;
}
