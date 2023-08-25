#include <stdio.h>
#include <stdlib.h>

//IF Else
int main(){
    int salario = 900;
    if (salario >1000)
    {
        printf("Salario eh maior que Mil");
    }
    else
    if (salario > 900)
    {
        printf("Salario eh maior q 900");
    }
    else
    {
        printf("Salario deve ser menor ou igual a 900");
    }
}


// Switch Case
int main(){
    int valor = 1;
    switch (valor)
    {
    case 1:
        printf("Valor eh 1");
        break;

    case 2:
        printf("Valor eh 2");
        break;

    default:
        printf("Valor nao eh 2 e nem 3");
        break;
    }
}

