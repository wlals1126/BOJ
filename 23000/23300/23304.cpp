#include <iostream>
#include <string>

using namespace std;

void isAka(const string& s) {
    if (s.length() == 1) return; 

    int l = 0, r = s.length() - 1;
    
    while (l < r) {
        if (s[l++] != s[r--]) {
            cout << "IPSELENTI";
            exit(0);
        }
    }
    
    isAka(s.substr(0, s.length() / 2));
}

int main() {
    string s;
    cin >> s;
    
    isAka(s);
    
    cout << "AKARAKA";
    return 0;
}
