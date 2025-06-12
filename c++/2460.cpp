#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct pessoa {
    unsigned short num;
    unsigned short pos;
};

int main() {
    unsigned short qts_pessoas, qts_pessoas_sairam;
    unsigned short i, id_pessoa;
    vector<pessoa> fila(51000);

    cin >> qts_pessoas;

    memset(fila.data(), 0, sizeof(pessoa) * 51000);

    for (i = 0; i < qts_pessoas; i++) {
        cin >> id_pessoa;
        fila[i].num = id_pessoa;
        fila[id_pessoa].pos = i;
    }

    cin >> qts_pessoas_sairam;

    for (i = 0; i < qts_pessoas_sairam; i++) {
        cin >> id_pessoa;
        fila[fila[id_pessoa].pos].num = 0;
    }

    bool prim_espaco = false;
    for (i = 0; i < qts_pessoas; i++) {
        if (fila[i].num) {
            if (prim_espaco && i != qts_pessoas) {
                cout << " ";
            }
            prim_espaco = true;
            cout << fila[i].num;
        }
    }

    cout << "\n";
    return 0;
}
