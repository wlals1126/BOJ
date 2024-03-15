#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    string input;
    getline(cin, input);

    getline(cin, input);
    istringstream iss(input);
    for (int i = 0; i < N; i++)
        iss >> arr[i];

    int max = 0;
    int temp = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i - 1] < arr[i])
            temp += arr[i] - arr[i - 1];
        else
            temp = 0;
        max = max > temp ? max : temp;
    }
    cout << max << endl;

    return 0;
}
