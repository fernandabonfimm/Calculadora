// Author: Fernanda Bonfim Santos - Ciência da Computação || 2Semestre //

#include<stdio.h>
#include<math.h>

#define PI 3.1415

    int main() {
        float comprimento, largura,altura, profundidade, raio, raioesfera, result, result2, result3, result4;
        float quatrotercos = 4/3;
        int opcao;

        printf("--------------------------------\n");
        printf("Bem vindo a calculadora de volume: \n");
        printf("--------------------------------\n");
        printf("1) para volume de caixa:\n");
        printf("2) para volume de esfera:\n");
        printf("3) para volume de cilindro:\n");
        printf("4) para volume de cone:\n");
        printf("--------------------------------\n");

        scanf("%d", &opcao);

        printf("O valor da opção é: %d ", opcao);

        if(opcao==1){
                printf("Digite o valor com comprimento: \n");
                scanf("%f", &comprimento);
                printf("Digite o valor da largura: \n");
                scanf("%f", &largura);
                printf("Digite o valor da profundidade: \n");
                scanf("%f", &profundidade);

                result = comprimento * largura * profundidade;

                printf("O resultado e: %f\n", result);

        }else if(opcao==2){
                printf("Digite o Raio: \n");
                scanf("%f", &raioesfera);
                result2 = quatrotercos * PI * pow(raioesfera,3);
                printf("O resultado e: %f\n",result2);

        }else if(opcao==3){
                printf("Digite o valor do raio: \n");
                scanf("%f", &raio);
                printf("Digite o valor da altura: \n");
                scanf("%f", &altura);

                result3 = PI*raio^2*altura;

                printf("O resultado e: %f\n", result3);

        }else if(opcao==4){
                printf("Digite o valor do raio: \n");
                scanf("%f", &raio);
                printf("Digite o valor da altura: \n");
                scanf("%f", &altura);

                result4 = 1/3*PI*raio^2*altura;

                printf("O resultado e: %f\n", result4);
        }


}
