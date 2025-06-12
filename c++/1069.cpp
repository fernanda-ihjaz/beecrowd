#include <iostream>

using namespace std;

int main() {
    int qtd_casos;
    
    cin >> qtd_casos;

    for (int i = 0; i < qtd_casos; i++) {
        char caso[1001];
        int diamantes = 0;
        int esq = 0, dir = 0;

        cin >> caso;

        for (int j = 0; caso[j] != '\0'; j++) {
            if (caso[j] == '<') {
                esq++;
            } else if (caso[j] == '>') {
                dir++;
                if (esq > 0) {
                    esq--;
                    dir--;
                    diamantes++;
                }
            }
        }

        cout << diamantes << endl;
    }

    return 0;
}
