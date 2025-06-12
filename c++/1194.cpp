#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;

void construir_pos_ordem(
    const string& prefixo, const string& in,
    int i_prefixo, int i_infixo, int tam,
    const unordered_map<char, int>& posicao_infixo,
    string& resultado)
{
    if (tam == 0)
        return;

    char raiz = prefixo[i_prefixo];
    int i_raiz_infixo = posicao_infixo.at(raiz);
    int tam_esq = i_raiz_infixo - i_infixo;
    int tam_dir = tam - 1 - tam_esq;

    construir_pos_ordem(prefixo, in, i_prefixo + 1, i_infixo, tam_esq, posicao_infixo, resultado);

    construir_pos_ordem(prefixo, in, i_prefixo + 1 + tam_esq, i_raiz_infixo + 1, tam_dir, posicao_infixo, resultado);

    resultado += raiz;
}

int main() 
{
    int qtd_testes;
    cin >> qtd_testes;

    while (qtd_testes--) 
    {
        int num_nos;
        string prefixofixo, infixo;
        cin >> num_nos >> prefixofixo >> infixo;

        unordered_map<char, int> posicao_infixo;
        for (int i = 0; i < num_nos; i++) 
        {
            posicao_infixo[infixo[i]] = i;
        }

        string pos_ordem;
        construir_pos_ordem(prefixofixo, infixo, 0, 0, num_nos, posicao_infixo, pos_ordem);

        cout << pos_ordem << endl;
    }

    return 0;
}
