#include <stdio.h>

int main(){
    int i, tam, valor, codigo=7;

    printf("digite o tamanho vetor: ");
    scanf("%d", &tam);

    int vet1[tam], vet2[tam], vet3[tam];

    printf("preencha o vetor 1.\n");
    for(i=0; i < tam; i++)
        scanf("%d", &vet1[i]);

    printf("\nO vetor 1 eh:");
    for(i = 0; i < tam; i++)
        printf("\t%d", vet1[i]);

    printf("\nO vetor 2 eh:");
    for(i = 0; i < tam; i++){
        vet2[i] = vet1[i] * (3+codigo);
        printf("\t%d", vet2[i]);
    }

    printf("\no vetor 3 eh:");
    for (i = 0; i < tam; i++){
       vet3[i] = vet1[i] + vet2[i];
       printf("\t%d", vet3[i]);
    }
    printf("\n");
    

}