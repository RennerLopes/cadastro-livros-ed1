#include <stdio.h>
#include <stdlib.h>

#include <iostream>

using namespace std;

struct livro {
    int cod;
    char nome[60];
    char autor[60];
    int ano_pub;
};
typedef struct livro Livro;

void cadastrar_livro(Livro l);
void listar_livros();