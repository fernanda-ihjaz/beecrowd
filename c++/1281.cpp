#include <iostream>
#include <map>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    int num_viagens, num_prods_mercado, num_prods_comprados, quantidade_prod;
    map<string, float> tbl_precos;
    string nome_prod;
    float preco_prod, total_gasto;

    cin >> num_viagens;

    for (int i = 0; i < num_viagens; i++) {
        tbl_precos.clear();
        total_gasto = 0.0;

        cin >> num_prods_mercado;
        for (int j = 0; j < num_prods_mercado; j++) {
            cin >> nome_prod >> preco_prod;
            tbl_precos[nome_prod] = preco_prod;
        }

        cin >> num_prods_comprados;
        for (int j = 0; j < num_prods_comprados; j++) {
            cin >> nome_prod >> quantidade_prod;
            total_gasto += tbl_precos[nome_prod] * quantidade_prod;
        }

        printf("R$ %.2f\n", total_gasto);
    }

    return 0;
}
