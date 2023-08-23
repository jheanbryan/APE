#include <stdio.h>
#include <stdlib.h>

//recolher nome, endereço, cidade e idade
int main(){
    char nome[30];
    char endereco[30];
    char cidade[30];
    int idade;

    printf("Qual o nome: ");
    scanf("%s", &nome);

    printf("Qual o endereco: ");
    scanf("%s", &endereco);

    printf("Qual a cidade: ");
    scanf("%s", &cidade);

    printf("Qual a idade: ");
    scanf("%d", &idade);


    printf("\nNome : %s", nome);
    printf("\nEndereco : %s", endereco);
    printf("\nCidade : %s", cidade);
    printf("\nIdade : %d", idade);
}
