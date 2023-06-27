all: function.o
	gcc function.o main.c -o CadastroFuncionario

function.o: function.h
	gcc -c function.c

clean:
	rm -rf *.o

run: CadastroFuncionario
	./CadastroFuncionario