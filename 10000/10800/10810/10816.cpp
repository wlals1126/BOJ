#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> card(n);
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }

    sort(card.begin(), card.end()); 

    int m;
    cin >> m;

    vector<int> searchVec(m);
    for (int i = 0; i < m; i++) {
        cin >> searchVec[i];
    }

    for (int i = 0; i < m; i++) {
        int searchNum = searchVec[i];
        int count = upper_bound(card.begin(), card.end(), searchNum) - lower_bound(card.begin(), card.end(), searchNum);
        cout << count << ' ';
    }

    return 0;
}
