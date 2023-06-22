#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<gconio.h>
#include "header.h"
#include "function.c"

int main() {
    
    inicializar_tela();
    janela(1, 1, 24, 80, "Cadastro de Funcionário", '*');
    
    label(3, 3, "Nome:");
    char* nome = ler_string(3, 10, 20);
    label(5, 3, "Idade:");
    int idade = ler_inteiro(5, 10, 3);
    label(7, 3, "Salário:");
    float salario = ler_decimal(7, 11, 10);
    
    gotoxy(3, 9);
    printf("Dados\n");
    gotoxy(3, 11);
    printf("Nome: %s", nome);
    gotoxy(3, 12);
    printf("Idade: %d", idade);
    gotoxy(3, 13);
    printf("Salário: %.2f", salario);
    for (size_t i = 0; i < 12; i++)printf("\n");
    free(nome);
    
    return 0;
}