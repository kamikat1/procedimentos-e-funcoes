/*Escreva um procedimento que receba um número inteiro e imprima o
mês correspondente ao número. Por exemplo, 2 corresponde à
“fevereiro”. O procedimento deve mostrar uma mensagem de erro caso
o número recebido não faça sentido. Faça um programa que leia um
valor e chame o procedimento criado.*/

#include <stdio.h>
#include <stdlib.h>

void mesesDoAno(int n);

int main(){
    int n=0;
    printf("Digite o número correspondente ao mes: ");
    scanf("%d", &n);
    mesesDoAno(n);
    return 0;
}

void mesesDoAno(int n){
    char meses[12][10]= {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho",
    "agosto", "setembro", "outubro", "novembro", "dezembro"};

    (n>=1 && n<=12) ? printf("%s", meses[n-1]) : printf("O número digitado não corresponde a nenhum mês.");
}

