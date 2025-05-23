#include <iostream>
using namespace std;

int main() {
    int cem = 0, cinq = 0, vin = 0, dez = 0, cinc = 0, dois = 0, um = 0;
    int valor;
    cin >> valor;

    int valorFixo = valor;

    if (valor>=100)
    {
        cem = valor/100;
        valor = valor%100;
    }
    if (valor>=50)
    {
        cinq = valor/50;
        valor = valor%50;
    }
    if (valor>=20)
    {
        vin = valor/20;
        valor = valor%20;
    }
    if (valor>=10)
    {
        dez = valor/10;
        valor = valor%10;
    }
    if (valor>=5)
    {
        cinc = valor/5;
        valor = valor%5;
    }
    if (valor>=2)
    {
        dois = valor/2;
        valor = valor%2;
    }
    if (valor>=1)
    {
        um = valor/1;
        valor = valor%1;
    }
    if (valor<1)
    {
        valor = 0;
    }

    cout << valorFixo << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinq << " nota(s) de R$ 50,00" << endl;
    cout << vin << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinc << " nota(s) de R$ 5,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;

    return 0;
}