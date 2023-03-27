#include <iostream>
#include <cstring>
using namespace std;
char word[20];
char arr[5][20];
int main() {
	for(int i = 0; i < 5; i++) {
		cin >> word;
		for(int j = 0; j < strlen(word); j++) {
			arr[i][j] = word[j];
		}
	}
	for (int j = 0; j < 20; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr[i][j] != '\0') {
				cout << arr[i][j];
			}
		}
	}
}