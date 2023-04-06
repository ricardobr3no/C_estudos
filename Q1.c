#include <stdio.h>

int main(void){

    char timeA[50], timeB[50];
    int pontosA = 0, pontosB = 0;

    while(1)
    {
    printf("escreva 'Encerrar' para finalizar\n");
    printf("Digite o nome do primeiro time: ");
    gets(timeA);
    
    if (timeA != "Encerrar"){
        printf("Digite o nome do segundo time: ");
        gets(timeB);
        
        printf("Numero de gols de %s: ", timeA);
        scanf("%d", &pontosA);
        printf("Numero de gols de %s: ", timeB);
        scanf("%d", &pontosB);

        if (pontosA > pontosB)
            printf("O vencedor eh %s.\n", timeA);
        else if (pontosB > pontosA)
            printf("O vencedor eh %s.\n", timeB);
        else
            printf("EMPATE.\n");

    }else
        break; 
    
    }

}