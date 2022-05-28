/*Faça um programa que chame um procedimento, que dados os
coeficientes de uma equação do segundo grau, retorne uma mensagem
com o valor de suas raízes. O programa deve receber os coeficientes
dados por um usuário

*****Para ser uma equação do segundo grau é necessário que o coeficiente de x²
seja diferente de 0, no caso, é o nosso ‘a’.
*****Se(Δ > 0), a equação terá duas raízes reais e distintas.
*****Se(Δ < 0), a equação não apresentará raízes reais.
*****se(Δ = 0), a equação apresentará somente uma raiz.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void raizesDaEquacao (float a, float b, float c);

int main (){
float a, b, c;

    printf("Digite os tres coeficientes da equacao, respectivamente, a, b, e c: \nO valor do coeficiente A deve ser diferente de zero:");
    scanf("%f %f %f", &a, &b, &c);

    if (a==0) {
        printf("O valor do coeficiente a deve ser diferente de zero");
        system("pause");
    }

    raizesDaEquacao (a, b, c);

    return 0;
}

void raizesDaEquacao (float a, float b, float c) {
    float x1=0, x2=0, delta=0;

    delta = pow(b,2)-4*a*c;

    if(delta<0) printf("Nao existe raiz real para a equacao");

    else if(delta>0) {
        x1=((-b)+sqrt(delta))/(2*a);
        x2=((-b)-sqrt(delta))/(2*a);
        printf("O valor da raiz 1 sera:%f\n O valor da raiz 2 sera:%f\n", x1, x2);
    }

    else if(delta==0){
        x1=(-b)/(2*a);
        printf("O valor da raiz sera:%f\n", x1);
    }
}
