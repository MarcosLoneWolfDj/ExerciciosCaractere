#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minuscula = 0;
    char letra;

    do{
        printf("Digite uma letra: \n");
        scanf(" %c", &letra);
        if (letra >= 97 && letra <= 122){
            minuscula += 1;
        }
    } while(letra != 70);

    if (minuscula <= 0){
            printf("Nenhuma minuscula \n");
        }
        else{
            printf("\n%d \n", minuscula);
        }

    return 0;
}
