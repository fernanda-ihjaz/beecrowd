// #include<bits/stdc++.h> achei isso pesquisando na internet, inclui praticamente todas as bibliotecas padrão do C++, mas é um disperdício tbm pq não se usa todas
#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	map <string, double> arvores;
	map <string, double>::iterator it;
	
	string arvore; 
	int testes, i, total = 0;
	
	cout << fixed << setprecision(4);
	
	cin >> testes;
	cin.get();
	getline(cin, arvore);
	
	for (i = 1; i <= testes; i++) {
		while (getline(cin, arvore) and arvore[0] != '\0') {
			arvores[arvore]++;
			total++;
		}
		
		if (i > 1) {

			cout << "\n";
		}
		
		for (it = arvores.begin(); it != arvores.end(); it++) {

			cout << it -> first << " " << 100.0 * it -> second / total << endl;
		}
		
		total = 0;
		arvores.clear();
	}
	
	return 0;
}