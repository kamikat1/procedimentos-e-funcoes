/*Faça um procedimento que mostre a tabuada de 1 até 9 na tela.*/

#include <stdio.h>
#include <stdlib.h>

void tabuada (int n, int i);

int main(){
    int n=0;
    int i=0;
    printf("Digite o número para que seja feita a tabuada: ");
    scanf("%d", &n);
    tabuada(n, i);
    return 0;
}

void tabuada (int n, int i){
    for (i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}
