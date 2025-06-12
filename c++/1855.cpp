#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() 
{
    int x, y;
    cin >> x >> y;
    cin.ignore();

    vector<string> mapa(y);
    for (int i = 0; i < y; ++i)
        getline(cin, mapa[i]);

    int i = 0, j = 0;
    int i_vertical = 0, j_horizontal = 1;
    set<pair<int, int>> visitado;

    while (true) 
    {
        if (i < 0 || i >= y || j < 0 || j >= x) 
        {
            cout << "!" << endl;
            return 0;
        }
        if (visitado.count({i, j})) 
        {
            cout << "!" << endl;
            return 0;
        }

        visitado.insert({i, j});
        char atual = mapa[i][j];

        if (atual == '*') 
        {
            cout << "*" << endl;
            return 0;
        }
        if (atual == '>') 
        {
            i_vertical = 0;
            j_horizontal = 1;
        }
        if (atual == '<') 
        {
            i_vertical = 0;
            j_horizontal = -1;
        }
        if (atual == 'v') 
        {
            i_vertical = 1;
            j_horizontal = 0;
        }
        if (atual == '^') 
        {
            i_vertical = -1;
            j_horizontal = 0;
        }
        if (atual != '>' && atual != '<' && atual != 'v' && atual != '^' && atual != '.') 
        {
            cout << "!" << endl;
            return 0;
        }

        i += i_vertical;
        j += j_horizontal;
    }
}
