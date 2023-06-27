#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

void inicializar_tela();
void janela(int linInicial, int colInicial, int linFinal, int colFinal, char* titulo, char tipoMoldura);
void label(int lin, int col, char* texto);
char* ler_string(int lin, int col, int tamanho);
int ler_inteiro(int lin, int col, int tamanho);
float ler_decimal(int lin, int col, int tamanho);

#endif