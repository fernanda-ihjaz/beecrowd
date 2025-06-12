#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main() {
    string pais, mensagem;
    vector<pair<string, string>> traducao_natal;

    traducao_natal.push_back(make_pair("brasil", "Feliz Natal!"));
    traducao_natal.push_back(make_pair("alemanha", "Frohliche Weihnachten!"));
    traducao_natal.push_back(make_pair("austria", "Frohe Weihnacht!"));
    traducao_natal.push_back(make_pair("coreia", "Chuk Sung Tan!"));
    traducao_natal.push_back(make_pair("espanha", "Feliz Navidad!"));
    traducao_natal.push_back(make_pair("grecia", "Kala Christougena!"));
    traducao_natal.push_back(make_pair("estados-unidos", "Merry Christmas!"));
    traducao_natal.push_back(make_pair("inglaterra", "Merry Christmas!"));
    traducao_natal.push_back(make_pair("australia", "Merry Christmas!"));
    traducao_natal.push_back(make_pair("portugal", "Feliz Natal!"));
    traducao_natal.push_back(make_pair("suecia", "God Jul!"));
    traducao_natal.push_back(make_pair("turquia", "Mutlu Noeller"));
    traducao_natal.push_back(make_pair("argentina", "Feliz Navidad!"));
    traducao_natal.push_back(make_pair("chile", "Feliz Navidad!"));
    traducao_natal.push_back(make_pair("mexico", "Feliz Navidad!"));
    traducao_natal.push_back(make_pair("antardida", "Merry Christmas!"));
    traducao_natal.push_back(make_pair("canada", "Merry Christmas!"));
    traducao_natal.push_back(make_pair("irlanda", "Nollaig Shona Dhuit!"));
    traducao_natal.push_back(make_pair("belgica", "Zalig Kerstfeest!"));
    traducao_natal.push_back(make_pair("italia", "Buon Natale!"));
    traducao_natal.push_back(make_pair("libia", "Buon Natale!"));
    traducao_natal.push_back(make_pair("siria", "Milad Mubarak!"));
    traducao_natal.push_back(make_pair("marrocos", "Milad Mubarak!"));
    traducao_natal.push_back(make_pair("japao", "Merii Kurisumasu!"));

    while (cin >> pais) {
        mensagem = "--- NOT FOUND ---";
        for (size_t i = 0; i < traducao_natal.size(); ++i) {
            if (traducao_natal[i].first == pais) {
                mensagem = traducao_natal[i].second;
                break;
            }
        }
        cout << mensagem << endl;
    }

    return 0;
}
