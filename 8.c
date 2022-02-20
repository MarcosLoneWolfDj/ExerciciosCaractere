#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distancia, count=0;
    char letra1, letra2;

    do{
        printf("Digite duas letras: \n");
        scanf(" %c", &letra1);
        scanf(" %c", &letra2);

        distancia = letra2 - letra1;

        if (distancia == 1){
            count += 1;
        }

    } while(distancia != 0);

    printf("\n%d\n", count);

    return 0;
}
