#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n;
    char letra, maiuscula;

    printf("Quantas letras? \n");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        printf("\nDigite uma letra: \n");
        scanf(" %c", &letra);
        if (letra >= 97 && letra <= 122){
            maiuscula = letra - 32;
            printf("%c \n", maiuscula);
        }
        else{
            printf("Nao eh minuscula \n");
        }
    }

    return 0;
}
