#include <stdio.h>

void main(void){

    int ddd;
    printf("Informe o DDD: ");
    scanf("%d", &ddd);

    if (ddd == 71)
    printf("SALVADOR\n");
    else if (ddd>=11 && ddd<=15 )
    printf("SAO PAULO\n");
    else if (ddd==98 || ddd==99)
    printf("MARANHAO\n");
    else
    printf("DDD desconhecido\n");

}