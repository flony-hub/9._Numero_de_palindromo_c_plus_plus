#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        vector<char> lista_de_digitos;
        string str_x = to_string(x);

        for (char digito : str_x) {
            lista_de_digitos.push_back(digito);
        }

        vector<char> reversed_lista_de_digitos(lista_de_digitos.rbegin(), lista_de_digitos.rend());

        if (lista_de_digitos == reversed_lista_de_digitos) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    Solution objeto;
    cout << boolalpha << objeto.isPalindrome(121) << endl;
    return 0;
}
