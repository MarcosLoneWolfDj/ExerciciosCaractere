#include <stdio.h>
#include <stdlib.h>

int main()
{
    int posicao;
    char letra;

    do{
        printf("Digite uma letra: \n");
        scanf(" %c", &letra);
        if (letra >= 65 && letra <= 90){
            posicao = letra - 64;
            printf("%d \n", posicao);
        }
        if (letra < 65 && letra > 90 && letra != 36){
            printf("\n\n");
        }
    } while(letra != 36);

    return 0;
}
