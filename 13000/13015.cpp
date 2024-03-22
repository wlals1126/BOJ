#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a = 0, b = n - 1;
    int c = 3 * n - 3, d = 4 * n - 4;
 
    for (int i = 1; i < 2 * n; ++i) {
        if (i == 1 || i == (2 * n) - 1) {
            for (int j = a; j <= b; j++) printf("*");
            for (int j = b + 1; j < c; j++) printf(" ");
            for (int j = c; j <= d; j++) printf("*");
        }
        else {
            for (int j = 0; j < a; j++) printf(" ");
            printf("*"); 
            for (int j = a + 1; j < b; j++) printf(" ");
            printf("*"); 
            for (int j = b + 1; j < c; j++) printf(" ");
            if(b != c) printf("*");
            for (int j = c + 1; j < d; j++) printf(" ");
            printf("*");
        }
        printf("\n");
        if (i < n) {
            a++; b++; c--; d--;
        }
        else {
            a--; b--; c++; d++;
        }
    }
    return 0;
}