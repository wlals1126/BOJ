#include <iostream>
#include <vector>

using namespace std;

void toggleSwitch(vector<int> &switches, int num) {
    for (int i = num; i < switches.size(); i += num) {
        switches[i] = (switches[i] == 0) ? 1 : 0;
    }
}

void toggleSymmetricSwitches(vector<int> &switches, int num) {
    int left = num - 1;
    int right = num + 1;
    switches[num] = (switches[num] == 0) ? 1 : 0;
    
    while (left >= 1 && right < switches.size() && switches[left] == switches[right]) {
        switches[left] = (switches[left] == 0) ? 1 : 0;
        switches[right] = (switches[right] == 0) ? 1 : 0;
        left--;
        right++;
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> switches(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> switches[i];
    }

    int studentCount;
    cin >> studentCount;

    for (int i = 0; i < studentCount; ++i) {
        int gender, num;
        cin >> gender >> num;

        if (gender == 1) {
            toggleSwitch(switches, num);
        } else {
            toggleSymmetricSwitches(switches, num);
        }
    }

    for (int i = 1; i <= N; ++i) {
        cout << switches[i] << ' ';
        if (i % 20 == 0) cout << '\n';
    }

    return 0;
}
