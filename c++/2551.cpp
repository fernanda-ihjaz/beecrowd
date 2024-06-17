#include<iostream>
using namespace std;

int main () {
    float T, D = 0;
    int x, treinos;
    float record;
    record = 0;
    while (cin>>treinos)
        for (int dias = 1; dias < treinos+1; dias++)
        {
            cin >> T >> D;
            float recordAtual = D/T;
            if (recordAtual > record)
            {
                cout << dias << endl;
                record = recordAtual;
            }
        }
    return 0;
}