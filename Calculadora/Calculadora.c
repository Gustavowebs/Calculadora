#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int op;
    double n1, n2, soma, subt, mult, seno, cosseno, tangente, raiz, log;
    float n3, n4, div;
    
    printf("\tCALCULADORA\t\n");
    printf("Escolha uma opcao abaixo:\n1-soma\n2-subtracao\n3-multiplicacao\n4-Divisao\n5-Seno\n6-cosseno\n7-tangente\n8-Raiz quadrada\n9-logaritmo\nInforme:");
    scanf("%d", &op);

    switch (op){
        case 1://SOMA
        printf("Informe um numero:");
        scanf("%lf", &n1);
        printf("Informe um numero:");
        scanf("%lf", &n2);
        printf("Valor da soma: %.3lf\n", soma = n1 + n2);
        break;

        case 2://Subtração
        printf("Informe um numero:");
        scanf("%lf", &n1);
        printf("Informe um numero:");
        scanf("%lf", &n2);
        printf("Valor da subtracao: %.3lf\n", subt = n1 - n2);
        break;

        case 3://multiplicação
        printf("Informe um numero:");
        scanf("%lf", &n1);
        printf("Informe um numero:");
        scanf("%lf", &n2);
        printf("Valor da multiplicacao: %.3lf\n", mult = n1 * n2);
        break;

        case 4://DIVISÃO
        printf("Informe um numero:");
        scanf("%f", &n3);
        printf("Informe um numero:");
        scanf("%f", &n4);
        printf("Valor da divisao: %.2f", div = n3 / n4);
        break;

        case 5://Calcular o valor do SENO
        printf("Informe um numero:");
        scanf("%lf", &n1);
        seno = sin((n1 * 3.1415)/180);
        printf("Valor do seno: %.6lf graus\n", seno);
        break;

        case 6://Calcular o valor do cosseno
        printf("Informe um valor:");
        scanf("%lf", &n1);
        cosseno = cos((n1 * 3.1415)/180);
        printf("Valor do cosseno: %.6lf graus\n", cosseno);
        break;

        case 7://Calcular o valor da tangente
        printf("Informe um valor:");
        scanf("%lf", &n1);
        tangente = tan((n1 * 3.1415)/180);
        printf("O valor da tangente: %.6lf graus\n", tangente);
        break;
        
        case 8://raiz quadrada
        printf("Informe um numero:");
        scanf("%lf", &n1);
        raiz = sqrt(n1);
        printf("Valor da raiz quadrada: %.3lf\n", raiz);
        break;

        case 9://logaritmo
        printf("Informe um numero:");
        scanf("%lf", &n1);
        log = log10(n1);
        printf("O valor em logaritmo: %.3lf", log);
        break;
    }
}