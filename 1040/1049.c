#include <stdio.h>
int main() {
	int n, m, a, b, pack = 1000, solo = 1000;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m ; i++) {
		scanf("%d %d", &a, &b);
		if(a < pack) 
			pack = a;
		if(b < solo) 
			solo = b;
	}
	if(pack <= (n%6) * solo) {
		printf("%d", pack * (n/6) + pack);
	}else if(solo * 6 < pack) {
		printf("%d", n * solo);
	}else {
		printf("%d", (n/6) * pack + (n%6) * solo);
	}
}