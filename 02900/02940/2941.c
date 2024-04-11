#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	scanf("%s", &str);
	int len = strlen(str);
	for(int i = 0; i < strlen(str); i++) {
		if(str[i] == 'c' || str[i] == 's' || str[i] == 'z') {
			if(str[i+1] == '=' || str[i+1] == '-')
			len--;
		}
		else if(str[i] == 'n' || str[i] == 'l') {
			if(str[i+1] == 'j')
			len--;
		}
		else if(str[i] == 'd') {
			if(str[i+1] == '-')
			len--;
			else if(str[i+1] == 'z' && str[i+2] == '=')
			len--;
		}
	}
	printf("%d\n", len);
}