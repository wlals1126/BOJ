#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

void lineChange(int start, int end, char input[], int check[], int num) {
    for (int i = start - 1; i > end; i--) {
        if (check[i] == num && check[i - 1] != num) {
            swap(check[i], check[i - 1]);
            swap(input[i], input[i - 1]);
            i--;
        }
    }
}

int main() {
    int N1, N2, T;
    cin >> N1 >> N2;
    
    char input1[N1 + 1], input2[N2 + 1];
    int check1[N1], check2[N2];
    
    cin >> input1 >> input2;
    fill(check1, check1 + N1, 1);
    fill(check2, check2 + N2, 2);

    cin >> T;
    
    for (int t = 0; t < T; t++) {
        if (check1[0] == 1 && check2[0] == 2) {
            swap(check1[0], check2[0]);
            swap(input1[0], input2[0]);

            lineChange(N1, 1, input1, check1, 1);
            lineChange(N2, 1, input2, check2, 2);
        } else {
            lineChange(N1, 0, input1, check1, 1);
            lineChange(N2, 0, input2, check2, 2);
        }
    }

    string result;
    for (int i = N1 - 1; i >= 0; i--) {
        result += input1[i];
    }
    for (int i = 0; i < N2; i++) {
        result += input2[i];
    }

    cout << result << endl;
    return 0;
}
