all: header.o
	gcc header.o main.c -o CadastroFuncionario

paralasei.o:
	gcc -c function.c

run: CadastroFuncionario
	./CadastroFuncionario