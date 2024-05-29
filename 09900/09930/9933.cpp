#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore(); 

    unordered_set<string> us;
    for (int i = 0; i < n; i++) {
        string tmp;
        getline(cin, tmp);
        us.insert(tmp);
        
        string reversed_tmp = tmp;
        reverse(reversed_tmp.begin(), reversed_tmp.end());

        if (us.find(reversed_tmp) != us.end()) {
            cout << tmp.length() << " " << tmp[tmp.length() / 2] << endl;
        }
    }

    return 0;
}
