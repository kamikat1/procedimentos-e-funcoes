/*Faça uma função que receba três valores e retorne o maior.*/

#include <stdlib.h>
#include <stdio.h>

float retornaMaior (float a, float b, float c);

int main (){
float result=0;
float a, b, c;
int i;

    printf("Digite os 3 valores:");
    scanf("%f %f %f", &a, &b, &c);

    result = retornaMaior (a,b,c);
    printf("%f",result);

    return 0;
}

float retornaMaior (float a, float b, float c) {

    if (a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else if(c>a && c>b)
        return c;
}

