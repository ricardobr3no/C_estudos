#include <stdio.h>

void main(void)
{

    int lados, medidas;

    while (1)
    {
        printf("quantidade de lados do poligonos (0 p/ encerrar): ");
        scanf("%d", &lados);
        if (lados != 0)
        {
            printf("digite a medida dos lados do poligono regular: ");
            scanf("%d", &medidas);

            switch (lados)
            {
            case 3:
                printf("TRIANGULO com lado %d\n", medidas);
                break;

            case 4:
                printf("QUADRADO com lado %d\n", medidas);
                break;

            case 5:
                printf("PENTAGONO com lado %d\n", medidas);
                break;
            }
        }
        else
            break;
    }
}
