#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int nota[5] = {100, 50, 20, 10, 5};
    float moeda[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int qtd = 0;
    float valor;

    cin >> valor;

    while (valor == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            if (valor>=nota[i])
            {
                qtd = valor/nota[i];
                cout << qtd << " nota(s) de R$ " << nota[i] <<endl;
            }
            valor = fmod(valor,nota[i]);
        }
        for (int i = 0; i < 6; i++)
        {
            if (valor>=moeda[i])
            {
                qtd = valor/moeda[i];
                cout << qtd << " moeda(s) de R$ " << moeda[i] <<endl;
            }
            valor = fmod(valor,moeda[i]);
        }
    }

    return 0;
}