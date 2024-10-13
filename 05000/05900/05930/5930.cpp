#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool matchChord(vector<int>& seg, vector<int>& ch) {
    int trans = seg[0] - ch[0];
    for (int i = 1; i < ch.size(); ++i) {
        if (seg[i] - ch[i] != trans)
            return false;
    }
    return true;
}

int main() {
    int n, c;
    cin >> n;
    vector<int> song(n);
    for (int i = 0; i < n; ++i) {
        cin >> song[i];
    }
    cin >> c;
    vector<int> chord(c);
    for (int i = 0; i < c; ++i) {
        cin >> chord[i];
    }

    sort(chord.begin(), chord.end());
    vector<int> res;

    for (int i = 0; i <= n - c; ++i) {
        vector<int> seg(song.begin() + i, song.begin() + i + c);
        sort(seg.begin(), seg.end());

        if (matchChord(seg, chord)) {
            res.push_back(i + 1);
        }
    }

    cout << res.size() << endl;
    for (int idx : res) {
        cout << idx << endl;
    }

    return 0;
}
