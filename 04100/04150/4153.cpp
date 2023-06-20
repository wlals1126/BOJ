#include <stdio.h>
int main() {
    long long n1, n2, n3;
    while(1)
    {
        long a, b, c;
        scanf("%lld %lld %lld", &n1, &n2, &n3);
        if(n1 == 0 && n2 == 0 && n3 == 0) break;
        
        a = n1 * n1, b = n2 * n2, c = n3 * n3;
        if(a + b == c || a + c == b || b + c == a)
            printf("right\n");
        else 
            printf("wrong\n");
    }
    return 0;
}