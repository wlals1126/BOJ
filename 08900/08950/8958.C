#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char str[80];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		int tmp = 0;
		int temp = 1;
		scanf("%s", &str);
		for(int j = 0; j < strlen(str); j++) {
			if(str[j] == 'O') {
				tmp += temp;
				temp++;
			}if(str[j] == 'X') {
				temp = 1;
			}
		}	
		printf("%d\n", tmp);
	}
	return 0;
}