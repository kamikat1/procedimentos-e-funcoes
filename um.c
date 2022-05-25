/*Faça um procedimento que mostre os 100 primeiros números pares 
positivos. (2, 4, 6, ...200)*/
    
#include <stdio.h>
#include <stdlib.h>

void cemPrimeirosPares (int n);

int main()
{   int i=0;
    cemPrimeirosPares(i);
    return 0;
}

void cemPrimeirosPares (int i){
    for (i=1; i<=100; i++){
        if (i%2==0) printf("%d, ", i);
    }
}
