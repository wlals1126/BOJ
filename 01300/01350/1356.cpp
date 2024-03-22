#include <iostream>
#include <string>

using namespace std;

bool isEugeneNumber(int n) {
    string numStr = to_string(n);
    int len = numStr.length();
    
    for (int i = 1; i < len; ++i) {
        int frontProduct = 1;
        int backProduct = 1;
        
        for (int j = 0; j < i; ++j) {
            frontProduct *= (numStr[j] - '0');
        }
        
        for (int j = i; j < len; ++j) {
            backProduct *= (numStr[j] - '0');
        }
        
        if (frontProduct == backProduct) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int n;
    cin >> n;
    
    if (isEugeneNumber(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
