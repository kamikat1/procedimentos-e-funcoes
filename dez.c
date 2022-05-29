/*Faça uma função que retorne 1 se um número dado é primo e 0 caso
contrário*/

#include <stdio.h>
#include <stdlib.h>

int mdc (int n);

int main (){
    int n,m, result=0;
    scanf("%d", &n);
    result = mdc(n);
    printf("%d", result);
}
int mdc(int n){
    int i, r=0;
    for (i=2; i<=n/2;i++){
        if (n%i==0){
           r++;
        }
    }
    if(r==0) return 1;
    else if(r!=0) return 0;
}


