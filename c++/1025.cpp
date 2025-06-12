#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num_marmores, num_consultas, marmore, consulta;
    
    for (int i = 1; i < 65; i++)
    {
        cin >> num_marmores >> num_consultas;
        if (num_marmores == 0 && num_consultas == 0)
        {
            break;
        }
        
        int marmores[num_marmores], consultas[num_consultas];
        
        for (int j = 0; j < num_marmores; j++) {
            cin >> marmore;
            marmores[j] = marmore;
    
        }
        std::sort(marmores, marmores + num_marmores);
    
        for (int j = 0; j < num_consultas; j++) {
            cin >> consulta;
            consultas[j] = consulta;   
        }   
        
        cout << "CASE# " << i << ":\n";

        for (int j = 0; j < num_consultas; j++)
        {
            int* position = std::find(marmores, marmores + num_marmores, consultas[j]);
            
            if (position != marmores + num_marmores) {
                cout << consultas[j] << " found at " << (position - marmores) + 1 << std::endl;
            } else {
                cout << consultas[j] << " not found" << std::endl;
            }
        }
    }
    
}