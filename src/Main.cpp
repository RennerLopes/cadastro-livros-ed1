#include "include/biblioteca.h"

void mostrar_menu() {
    cout << "\n";
    cout << "-------- MENU --------" << endl;
    cout << "1- Cadastrar Livro" << endl;
    cout << "2- Listar livros" << endl;
    cout << "3- sair" << endl;
}

int main(int argc, char const *argv[]) {
    int op;

    do {
        mostrar_menu();
        cin >> op;

        switch (op) {
            case 1:
                Livro l;

                cout << "Informe o código: ";
                cin >> l.cod;
                cout << "Informe o nome: ";
                cin.ignore();
                cin.getline(l.nome, sizeof(l.nome));
                cout << "Informe o autor: ";
                cin.getline(l.autor, sizeof(l.autor));
                cout << "Informe o ano de publicação: ";
                cin >> l.ano_pub;

                cadastrar_livro(l);
                break;
            case 2:
                listar_livros();
                break;
            default:

                break;
        }
    } while (op > 0 && op < 3);

    return 0;
}
