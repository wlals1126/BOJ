#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char str1[100];
	char str2[200];
	int len1, len2;
	int temp = 100;
	int cnt[100] = { 0, };
	scanf("%s %s", str1, str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	int length = len2 - len1;
	for(int i = 0; i <= length; i++) {
		for(int j = 0; j < len1; j++) {
			if (str1[j] != str2[j+i]) 
				cnt[i]++;
		}
		if(temp > cnt[i])
		temp = cnt[i];
	}	
	printf("%d\n", temp);
	return 0;
}