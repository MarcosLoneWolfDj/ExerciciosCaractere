#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n;
    char letra, sucessora;

    printf("Quantas letras? \n");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        printf("\nDigite uma letra: \n");
        scanf(" %c", &letra);
        if (letra >= 65 && letra <= 89){
            sucessora = letra + 1;
            printf("%c \n", sucessora);
        }
        else{
            sucessora = letra - 25;
            printf("%c \n", sucessora);
        }
    }

    return 0;
}
