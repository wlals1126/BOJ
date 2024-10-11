#include <iostream>
#include <string>
using namespace std;

int main() {
    string result = "";
    string name;
    for (int i = 1; i <= 5; ++i) {
        getline(cin, name);
        if (name.find("FBI") != string::npos) {
            result += to_string(i) + " ";
        }
    }
    
    if (result.empty()) {
        cout << "HE GOT AWAY!" << endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}
