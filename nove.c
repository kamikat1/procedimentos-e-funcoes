/*Faça uma função que receba dois valores e retorne o MDC entre esses
números inteiros nao negativos*/

#include <stdio.h>
#include <stdlib.h>

int mdc (int n, int m);

int main (){
    int n,m, result=0;
    scanf("%d %d", &n,&m);
    result = mdc(n,m);
    printf("%d", result);
}
int mdc(int n,int m){
   int resto=0;
   while(m!=0){
      resto=n%m;
      n=m;
      m=resto;
      }
    return n;
}


