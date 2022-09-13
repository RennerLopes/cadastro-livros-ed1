#include "include/biblioteca.h"

FILE* arq;

void cadastrar_livro(Livro l) {
    // Verificação de abertura de arquivo
    if ((arq = fopen("livros.txt", "a")) == NULL) {
        puts("Arquivo nao pode ser aberto...");
        exit(1);
    }

    fprintf(arq, "%d; %s; %s; %i \n", l.cod, l.nome, l.autor, l.ano_pub);
    printf("cadastrando..");
    fclose(arq);
}
void listar_livros() {
    Livro l;

    if ((arq = fopen("livros.txt", "r")) == NULL) {
        puts("Arquivo nao pode ser aberto...");
        exit(1);
    }

    cout << "Nomes Livros \t| Codigo \t| Autor \t| Ano" << endl;
    cout << "____________ \t| ______ \t| _____ \t| ___" << endl;

    while (fscanf(arq, "%d; %[^;]; %[^;]; %i \n", &l.cod, l.nome, l.autor, &l.ano_pub) != EOF) {
        cout << l.nome << "\t\t|";
        cout << l.cod << "\t\t|";
        cout << l.autor << "\t\t|";
        cout << l.ano_pub << endl;
    }
    fclose(arq);
}