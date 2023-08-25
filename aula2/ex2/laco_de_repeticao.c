#include <stdio.h>
#include <stdlib.h>

/* do while
int main(){
    int i;

    do
    {
        printf("Digite um numero do sabor so sorvete");
        printf("\n1 - Flocos");
        printf("\n2 - Morango");
        printf("\n3 - Leite compensado");
        printf("\n4 - Limao");
        scanf("\n%d", &i);
    } while (i < 1 || i > 4);
    
    switch (i)
    {
    case 1:
        printf("Voce escolheu Flocos");
        break;

    case 2:
        printf("Voce escolheu Morango");
        break;

    case 3:
        printf("Voce escolheu Leite compensado");
        break;

    case 4:
        printf("Voce escolheu Limao");
        break;

    default:
        break;
    }
}
*/

int main(){
    int contador = 5;
    for (int i = 0; i < contador; i++)
    {
        printf("\nI vale: %d", i);
    }
    
}