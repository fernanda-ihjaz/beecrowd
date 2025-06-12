#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int q;
    string nome;
    char regiao;
    int custo;

    while (cin >> q) {
        vector<pair<pair<string, char>, int>> alunos;

        for (int i = 0; i < q; i++) {
            cin >> nome >> regiao >> custo;
            alunos.push_back({{nome, regiao}, custo});
        }

        sort(alunos.begin(), alunos.end(), [](const auto& a, const auto& b) {
            if (a.second != b.second) return a.second < b.second;
            if (a.first.second != b.first.second) return a.first.second < b.first.second;
            return a.first.first < b.first.first;
        });

        for (const auto& aluno : alunos) {
            cout << aluno.first.first << endl;
        }

        if (cin.eof()) break;
    }

    return 0;
}
