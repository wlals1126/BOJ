#include <stdio.h>

int main() {
    int coin[10], n, k, cnt = 0; 
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++)
        scanf("%d", &coin[i]);

    for(int i = n - 1; i >= 0; i--) { 
        if (k >= coin[i]) { 
            cnt += k / coin[i];
            k %= coin[i];
        } else if (i == 0 && k > 0)  
            cnt++;
    }
    printf("%d", cnt);
}