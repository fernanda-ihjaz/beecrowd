#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int qtd_casos;
    string caso;

    cin >> qtd_casos;
    
    for (int i = 0; i < qtd_casos; i++)
    {
        cin >> caso;

        int num1 = caso[0] - '0';
        int num2 = caso[2] - '0';

        if (caso[0] == caso[2])
        {
            cout << num1 * num2 << "\n";
        } else if (isupper(caso[1]))
        {
            cout << num2 - num1 << "\n";
        } else {
            cout << num1 + num2 << "\n";
        }
        
    }
    
}