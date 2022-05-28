/*Faça um procedimento que receba um valor e mostre todos os seus
divisores.
***Ele pediu só o procedimento mas fiz o programa todo para testar*/

#include <stdio.h>
#include<stdlib.h>

void divisoresDeUmN (int n);

int main() {
    int n;
    printf("Digite um numero:  ");
    scanf("%d", &n);
    divisoresDeUmN (n);
}

void divisoresDeUmN (int n){
    int i;
    for(i=n; i>0; i--){
        if(n%i==0) printf("%d ",i);
    };
}
