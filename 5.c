#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n, t, soma;
    char hexa, convertido;

    printf("Quantos Digitos? \n");
    scanf("%d", &n);
    printf("Qual numero a ser somado? \n");
    scanf("%d", &t);

    for(i = 1; i <= n; ++i){
        printf("\nDigite um hexadecimal: \n");
        scanf(" %c", &hexa);
        if ((hexa >= 48 && hexa <= 57) || (hexa >= 65 && hexa <= 70)){
            if (hexa >= 48 && hexa <= 57){
                convertido = hexa - 48;
                soma = convertido + t;
                printf("Convertido: %d\nSoma: %d \n", convertido, soma);
            }
            else{
                convertido = hexa - 55;
                soma = convertido + t;
                printf("Convertido: %d\nSoma: %d \n", convertido, soma);
            }
        }
        else{
            printf("Digito em valido\n");
        }
    }

    return 0;
}
