#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generate_sequences(vector<int>& nums, int m, vector<int>& sequence, int start) {
    if (m == 0) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i < nums.size(); ++i) {
        sequence.push_back(nums[i]);
        generate_sequences(nums, m - 1, sequence, i + 1);
        sequence.pop_back();
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<int> sequence;
    generate_sequences(nums, m, sequence, 0);

    return 0;
}
