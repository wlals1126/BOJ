#include <stdio.h>
#include <string.h>
int main() {
	char str[101];
	scanf("%s", &str);
	printf("%c", str[0]);
	for(int i = 1; i < strlen(str); i++) {
		if(str[i-1] == '-') {
			printf("%c", str[i]);
		}
	} 
	return 0;
}