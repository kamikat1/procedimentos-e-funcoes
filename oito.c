/*Faça uma função que calcule e retorne o fatorial de um número dado.*/

#include <stdlib.h>
#include <stdio.h>

int fatorial (int n);

int main (){
float result=0;
int n;

    printf("Valor para calcular o fatorial: ");
    scanf("%d", &n);

    result = fatorial(n);
    printf("%f",result);

    return 0;
}

int fatorial (int n) {
    int i;
    for(i=n;i>1;i--){
        n = n*(i-1);
    }
    return n;
}

