#include <stdio.h>

int main(){

    int funcionarios = 4, mais4k = 0, menos4k = 0,codigo = 7;
    float salario, gasto1 = 0, gasto2 = 0;

    printf("informe o salario de cada funcionario.\n");
    for (int i = 1; i <= funcionarios; i++)
    {
        printf("salario do funcionario %d: ", i);
        scanf("%f", &salario);
        if (salario > 4000.0){
            mais4k++;
            gasto1 += salario;
        }
        if (salario < 4000.0){
            menos4k++;
            gasto2 += salario + salario*(5+codigo)/100;
        }
    }
    printf("\no numero de funcionario que recebem mais de R$4000.00 eh %d.\n", mais4k);
    printf("a empresa gasta cerca de R$%.2f com esses funcionarios.\n", gasto1);
    printf("a  empresa  gastaria  R$%.2f se  fosse  dar  um  aumento  para quem recebe menos de R$4000.00.\n", gasto2);
    

}