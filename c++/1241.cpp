#include <iostream>
#include <string>

using namespace std;

int main() {
    int qtd_casos;
    string valor1, valor2;

    cin >> qtd_casos;
    
    for (int i = 0; i < qtd_casos; i++)
    {
        cin >> valor1 >> valor2;

        if (valor1.size() >= valor2.size() && valor1.substr(valor1.size() - valor2.size()) == valor2) {
            cout << "encaixa\n";
        } else {
            cout << "nao encaixa\n";
        }
    }
    return 0;
}