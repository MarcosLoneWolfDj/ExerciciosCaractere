#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n;
    char letra;

    printf("Quantas letras? \n");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        printf("\nDigite uma letra: \n");
        scanf(" %c", &letra);
        if (letra >= 65 && letra <= 90){
            printf("Sim! \n");
        }
        else{
            printf("Nao \n");
        }
    }

    return 0;
}
