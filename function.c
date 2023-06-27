#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "function.h"

void inicializar_tela() {
    // Implementação básica para sistemas Unix-like (Linux, macOS)
    printf("\033[2J"); // Limpa a tela
}

void janela(int linInicial, int colInicial, int linFinal, int colFinal, char* titulo, char tipoMoldura) {
    printf("\033[%d;%dH", linInicial, colInicial); // Define a posição inicial da janela
    printf("%c", tipoMoldura); // Caractere de canto superior esquerdo da moldura

    // Preenche a linha superior da moldura com o caractere especificado
    for (int col = colInicial + 1; col < colFinal; col++) {
        printf("%c", tipoMoldura);
    }

    printf("%c", tipoMoldura); // Caractere de canto superior direito da moldura

    // Preenche as linhas internas da janela com o caractere especificado
    for (int lin = linInicial + 1; lin < linFinal; lin++) {
        printf("\033[%d;%dH%c", lin, colInicial, tipoMoldura);
        printf("\033[%d;%dH%c", lin, colFinal, tipoMoldura);
    }

    printf("\033[%d;%dH", linFinal, colInicial); // Posiciona o cursor na última linha
    printf("%c", tipoMoldura); // Caractere de canto inferior esquerdo da moldura

    // Preenche a linha inferior da moldura com o caractere especificado
    for (int col = colInicial + 1; col < colFinal; col++) {
        printf("%c", tipoMoldura);
    }

    printf("%c", tipoMoldura); // Caractere de canto inferior direito da moldura

    // Centraliza o título na linha superior da janela
    int tituloLength = strlen(titulo);
    int tituloPos = colInicial + (colFinal - colInicial - tituloLength) / 2;
    printf("\033[%d;%dH%s", linInicial, tituloPos, titulo);
}

void label(int lin, int col, char* texto) {
    printf("\033[%d;%dH%s", lin, col, texto);
}

char* ler_string(int lin, int col, int tamanho) {
    char* string = (char*) malloc(tamanho * sizeof(char));
    printf("\033[%d;%dH", lin, col);
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';  // Remove a quebra de linha da string
    return string;
}

int ler_inteiro(int lin, int col, int tamanho) {
    char* string = ler_string(lin, col, tamanho);
    int valor = atoi(string);
    free(string);
    return valor;
}

float ler_decimal(int lin, int col, int tamanho) {
    char* string = ler_string(lin, col, tamanho);
    float valor = atof(string);
    free(string);
    return valor;
}