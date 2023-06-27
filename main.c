#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "function.h"

int main() {
    
    inicializar_tela();
    janela(1, 1, 24, 80, "Cadastro de Funcionário", '*');
    
    label(3, 3, "Nome:");
    char* nome = ler_string(3, 10, 20);
    label(5, 3, "Idade:");
    int idade = ler_inteiro(5, 10, 3);
    label(7, 3, "Salário: ");
    float salario = ler_decimal(7, 11, 10);

    label(14, 3, "DADOS");
    label(16, 3, "Nome: ");printf("%s",nome);
    label(17, 3, "Idade: ");printf("%d",idade);
    label(18, 3, "Salário: ");printf("%.2f", salario);
    free(nome);
    label(30, 3, "");

    return 0;
}