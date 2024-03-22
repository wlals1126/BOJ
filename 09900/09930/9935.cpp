#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s, bomb;
    cin >> s >> bomb;

    stack<char> st;
    
    for (char ch : s) {
        st.push(ch);

        if (st.size() >= bomb.size() && st.top() == bomb.back()) {
            string temp;
            bool explode = true;

            for (int i = bomb.size() - 1; i >= 0; --i) {
                if (st.top() != bomb[i]) {
                    explode = false;
                    break;
                }
                temp += st.top();
                st.pop();
            }

            if (!explode) {
                for (int i = temp.size() - 1; i >= 0; --i) {
                    st.push(temp[i]);
                }
            }
        }
    }

    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    if (result.empty()) cout << "FRULA\n";
    else {
        for (int i = result.size() - 1; i >= 0; --i) {
            cout << result[i];
        }
        cout << '\n';
    }

    return 0;
}
