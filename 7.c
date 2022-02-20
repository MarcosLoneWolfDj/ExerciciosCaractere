#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, linha, coluna;
    char simbolo;

    printf("Quantas linhas? \n");
    scanf("%d", &linha);
    printf("Quantas colunas? \n");
    scanf("%d", &coluna);
    printf("Qual o simbolo? \n");
    scanf(" %c", &simbolo);

    for(i = 1; i <= linha; ++i){
        printf("\n");
        for(j = 1; j <= coluna; ++j){
            printf("%c",simbolo);
        }
    }

    printf("\n");

    return 0;
}
