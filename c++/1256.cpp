#include <iostream>
#include <vector>
#include <list>

using namespace std;

int funcao_hash(int valor, int tam_tabela) {
    return valor % tam_tabela;
}

int main() {
    int num_testes, tam_tabela, C, numero;
    vector<list<int>> tabelaHash;

    cin >> num_testes;

    for (int k = 0; k < num_testes; ++k) {
        if (k)
            cout << endl;

        cin >> tam_tabela >> C;

        tabelaHash.assign(tam_tabela, list<int>());
        for (int i = 0; i < C; ++i) {
            cin >> numero;

            tabelaHash[funcao_hash(numero, tam_tabela)].push_back(numero);
        }

        for (int j = 0; j < tam_tabela; ++j) {
            cout << j << " -> ";

            for (list<int>::iterator it = tabelaHash[j].begin(); it != tabelaHash[j].end(); ++it) {
                cout << *it << " -> ";
            }

            cout << "\\" << endl;
        }
    }

    return 0;
}