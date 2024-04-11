#include <iostream>
using namespace std;

int main() {
  int n, i, j, min, DP[50002] = {0, 1};

  cin >> n;

  for(DP[50001] = 4, i = 2; i <= n; i++) {
    min = 50001;

    for(j = 1; j * j <= i; j++)
      if(DP[i - j * j] < DP[min])
        min = i - j * j;

    DP[i] = DP[min] + 1;
  }

  cout << DP[n];
}