#include <iostream>
#include <string>
using namespace std;
char map[100001];
int n, a;
void Leftback() {
	int a, b, c;
	a = map[1];
	b = map[4];
	c = map[7];
	
	map[1] = map[54];
	map[4] = map[51];
	map[7] = map[48];
	
	map[54] = map[19];
	map[51] = map[22];
	map[48] = map[25];
	
	map[19] = map[10];
	map[22] = map[13];
	map[25] = map[16];
	
	map[10] = a;
	map[13] = b;
	map[16] = c;
	
	int Map[3][3];
	Map[0][0] = map[30];
	Map[0][1] = map[29];
	Map[0][2] = map[28];
	Map[1][0] = map[33];
	Map[1][1] = map[32];
	Map[1][2] = map[31];
	Map[2][0] = map[36];
	Map[2][1] = map[35];
	Map[2][2] = map[34];	
	
	map[30] = Map[0][2];
	map[29] = Map[1][2];
	map[28] = Map[2][2];
	map[33] = Map[0][1];
	map[32] = Map[1][1];
	map[31] = Map[2][1];
	map[36] = Map[0][0];
	map[35] = Map[1][0];
	map[34] = Map[2][0];
}

void Leftfront() {
	int a, b, c;
	a = map[1];
	b = map[4];
	c = map[7];
	
	map[1] = map[10];
	map[4] = map[13];
	map[7] = map[16];
	
	map[10] = map[19];
	map[13] = map[22];
	map[16] = map[25];
	
	map[19] = map[54];
	map[22] = map[51];
	map[25] = map[48];
	
	map[54] = a;
	map[51] = b;
	map[48] = c;

	int Map[3][3];	
	Map[0][0] = map[30];
	Map[0][1] = map[29];
	Map[0][2] = map[28];
	Map[1][0] = map[33];
	Map[1][1] = map[32];
	Map[1][2] = map[31];
	Map[2][0] = map[36];
	Map[2][1] = map[35];
	Map[2][2] = map[34];	
	
	map[30] = Map[2][0];
	map[29] = Map[1][0];
	map[28] = Map[0][0];
	map[33] = Map[2][1];
	map[32] = Map[1][1];
	map[31] = Map[0][1];
	map[36] = Map[2][2];
	map[35] = Map[1][2];
	map[34] = Map[0][2];
}

void Rightback() {
	int a, b, c;
	a = map[3];
	b = map[6];
	c = map[9];
	
	map[3] = map[12];
	map[6] = map[15];
	map[9] = map[18];
	
	map[12] = map[21];
	map[15] = map[24];
	map[18] = map[27];
	
	map[21] = map[52];
	map[24] = map[49];
	map[27] = map[46];
	
	map[52] = a;
	map[49] = b;
	map[46] = c;

	int Map[3][3];	
	Map[0][0] = map[39];
	Map[0][1] = map[38];
	Map[0][2] = map[37];
	Map[1][0] = map[42];
	Map[1][1] = map[41];
	Map[1][2] = map[40];
	Map[2][0] = map[45];
	Map[2][1] = map[44];
	Map[2][2] = map[43];	
	
	map[39] = Map[0][2];
	map[38] = Map[1][2];
	map[37] = Map[2][2];
	map[42] = Map[0][1];
	map[41] = Map[1][1];
	map[40] = Map[2][1];
	map[45] = Map[0][0];
	map[44] = Map[1][0];
	map[43] = Map[2][0];
}

void Rightfront() {
	int a, b, c;
	a = map[3];
	b = map[6];
	c = map[9];
	
	map[3] = map[52];
	map[6] = map[49];
	map[9] = map[46];
	
	map[52] = map[21];
	map[49] = map[24];
	map[46] = map[27];
	
	map[21] = map[12];
	map[24] = map[15];
	map[27] = map[18];
	
	map[12] = a;
	map[15] = b;
	map[18] = c;

	int Map[3][3];	
	Map[0][0] = map[39];
	Map[0][1] = map[38];
	Map[0][2] = map[37];
	Map[1][0] = map[42];
	Map[1][1] = map[41];
	Map[1][2] = map[40];
	Map[2][0] = map[45];
	Map[2][1] = map[44];
	Map[2][2] = map[43];	
	
	map[39] = Map[2][0];
	map[38] = Map[1][0];
	map[37] = Map[0][0];
	map[42] = Map[2][1];
	map[41] = Map[1][1];
	map[40] = Map[0][1];
	map[45] = Map[2][2];
	map[44] = Map[1][2];
	map[43] = Map[0][2];
}

void Frontback() {
	int a, b, c;
	a = map[1];
	b = map[2];
	c = map[3];
	
	map[1] = map[39];
	map[2] = map[42];
	map[3] = map[45];
	
	map[39] = map[27];
	map[42] = map[26];
	map[45] = map[25];
	
	map[27] = map[34];
	map[26] = map[31];
	map[25] = map[28];
	
	map[34] = a;
	map[31] = b;
	map[28] = c;

	int Map[3][3];	
	Map[0][0] = map[48];
	Map[0][1] = map[47];
	Map[0][2] = map[46];
	Map[1][0] = map[51];
	Map[1][1] = map[50];
	Map[1][2] = map[49];
	Map[2][0] = map[54];
	Map[2][1] = map[53];
	Map[2][2] = map[52];	
	
	map[48] = Map[0][2];
	map[47] = Map[1][2];
	map[46] = Map[2][2];
	map[51] = Map[0][1];
	map[50] = Map[1][1];
	map[49] = Map[2][1];
	map[54] = Map[0][0];
	map[53] = Map[1][0];
	map[52] = Map[2][0];
}

void Frontfront() {
	int a, b, c;
	a = map[1];
	b = map[2];
	c = map[3];
	
	map[1] = map[34];
	map[2] = map[31];
	map[3] = map[28];
	
	map[34] = map[27];
	map[31] = map[26];
	map[28] = map[25];
	
	map[27] = map[39];
	map[26] = map[42];
	map[25] = map[45];
	
	map[39] = a;
	map[42] = b;
	map[45] = c;

	int Map[3][3];	
	Map[0][0] = map[48];
	Map[0][1] = map[47];
	Map[0][2] = map[46];
	Map[1][0] = map[51];
	Map[1][1] = map[50];
	Map[1][2] = map[49];
	Map[2][0] = map[54];
	Map[2][1] = map[53];
	Map[2][2] = map[52];	
	
	map[48] = Map[2][0];
	map[47] = Map[1][0];
	map[46] = Map[0][0];
	map[51] = Map[2][1];
	map[50] = Map[2][1];
	map[49] = Map[0][1];
	map[54] = Map[2][2];
	map[53] = Map[1][2];
	map[52] = Map[0][2];
}

void Backback() {
	int a, b, c;
	a = map[9];
	b = map[8];
	c = map[7];
	
	map[9] = map[30];
	map[8] = map[33];
	map[7] = map[36];
	
	map[30] = map[19];
	map[33] = map[20];
	map[36] = map[21];
	
	map[19] = map[43];
	map[20] = map[40];
	map[21] = map[37];
	
	map[43] = a;
	map[40] = b;
	map[37] = c;
	
	int Map[3][3];	
	Map[0][0] = map[12];
	Map[0][1] = map[11];
	Map[0][2] = map[10];
	Map[1][0] = map[15];
	Map[1][1] = map[14];
	Map[1][2] = map[13];
	Map[2][0] = map[18];
	Map[2][1] = map[17];
	Map[2][2] = map[16];	
	
	map[12] = Map[0][2];
	map[11] = Map[1][2];
	map[10] = Map[2][2];
	map[15] = Map[0][1];
	map[14] = Map[1][1];
	map[13] = Map[2][1];
	map[18] = Map[0][0];
	map[17] = Map[1][0];
	map[16] = Map[2][0];
}

void Backfront() {
	int a, b, c;
	a = map[9];
	b = map[8];
	c = map[7];
	
	map[9] = map[43];
	map[8] = map[40];
	map[7] = map[37];
	
	map[43] = map[19];
	map[40] = map[20];
	map[37] = map[21];
	
	map[19] = map[30];
	map[20] = map[33];
	map[21] = map[36];
	
	map[30] = a;
	map[33] = b;
	map[36] = c;
	
	int Map[3][3];	
	Map[0][0] = map[12];
	Map[0][1] = map[11];
	Map[0][2] = map[10];
	Map[1][0] = map[15];
	Map[1][1] = map[14];
	Map[1][2] = map[13];
	Map[2][0] = map[18];
	Map[2][1] = map[17];
	Map[2][2] = map[16];	
	
	map[12] = Map[2][0];
	map[11] = Map[1][0];
	map[10] = Map[0][0];
	map[15] = Map[2][1];
	map[14] = Map[1][1];
	map[13] = Map[0][1];
	map[18] = Map[2][2];
	map[17] = Map[1][2];
	map[16] = Map[0][2];
}

void Upback() {
	int a, b, c;
	a = map[10];
	b = map[11];
	c = map[12];
	
	map[10] = map[37];
	map[11] = map[38];
	map[12] = map[39];
	
	map[37] = map[46];
	map[38] = map[47];
	map[39] = map[48];
	
	map[46] = map[28];
	map[47] = map[29];
	map[48] = map[30];
	
	map[28] = a;
	map[29] = b;
	map[30] = c;

	int Map[3][3];	
	Map[0][0] = map[7];
	Map[0][1] = map[8];
	Map[0][2] = map[9];
	Map[1][0] = map[4];
	Map[1][1] = map[5];
	Map[1][2] = map[6];
	Map[2][0] = map[1];
	Map[2][1] = map[2];
	Map[2][2] = map[3];	
	
	map[7] = Map[0][2];
	map[8] = Map[1][2];
	map[9] = Map[2][2];
	map[4] = Map[0][1];
	map[5] = Map[1][1];
	map[6] = Map[2][1];
	map[1] = Map[0][0];
	map[2] = Map[1][0];
	map[3] = Map[2][0];
}

void Upfront() {
	int a, b, c;
	a = map[10];
	b = map[11];
	c = map[12];
	
	map[10] = map[28];
	map[11] = map[29];
	map[12] = map[30];
	
	map[28] = map[46];
	map[29] = map[47];
	map[30] = map[48];
	
	map[46] = map[37];
	map[47] = map[38];
	map[48] = map[39];
	
	map[37] = a;
	map[38] = b;
	map[39] = c;

	int Map[3][3];	
	Map[0][0] = map[7];
	Map[0][1] = map[8];
	Map[0][2] = map[9];
	Map[1][0] = map[4];
	Map[1][1] = map[5];
	Map[1][2] = map[6];
	Map[2][0] = map[1];
	Map[2][1] = map[2];
	Map[2][2] = map[3];	
	
	map[7] = Map[2][0];
	map[8] = Map[1][0];
	map[9] = Map[0][0];
	map[4] = Map[2][1];
	map[5] = Map[1][1];
	map[6] = Map[0][1];
	map[1] = Map[2][2];
	map[2] = Map[1][2];
	map[3] = Map[0][2];
}

void Downback() {
	int a, b, c;
	a = map[16];
	b = map[17];
	c = map[18];
	
	map[16] = map[34];
	map[17] = map[35];
	map[18] = map[36];
	map[34] = map[52];
	map[35] = map[53];
	map[36] = map[54];
	map[52] = map[43];
	map[53] = map[44];
	map[54] = map[45];
	map[43] = a;
	map[44] = b;
	map[45] = c;

	int Map[3][3];	
	Map[0][0] = map[21];
	Map[0][1] = map[20];
	Map[0][2] = map[19];
	Map[1][0] = map[24];
	Map[1][1] = map[23];
	Map[1][2] = map[22];
	Map[2][0] = map[27];
	Map[2][1] = map[26];
	Map[2][2] = map[25];	
	
	map[21] = Map[0][2];
	map[20] = Map[1][2];
	map[19] = Map[2][2];
	map[24] = Map[0][1];
	map[23] = Map[1][1];
	map[22] = Map[2][1];
	map[27] = Map[0][0];
	map[26] = Map[1][0];
	map[25] = Map[2][0];
}

void Downfront() {
	int a, b, c;
	a = map[16];
	b = map[17];
	c = map[18];
	
	map[16] = map[43];
	map[17] = map[44];
	map[18] = map[45];
	map[43] = map[52];
	map[44] = map[53];
	map[45] = map[54];
	map[52] = map[34];
	map[53] = map[35];
	map[54] = map[36];
	map[34] = a;
	map[35] = b;
	map[36] = c;
	
	int Map[3][3];	
	Map[0][0] = map[21];
	Map[0][1] = map[20];
	Map[0][2] = map[19];
	Map[1][0] = map[24];
	Map[1][1] = map[23];
	Map[1][2] = map[22];
	Map[2][0] = map[27];
	Map[2][1] = map[26];
	Map[2][2] = map[25];	
	
	map[21] = Map[2][0];
	map[20] = Map[1][0];
	map[19] = Map[0][0];
	map[24] = Map[2][1];
	map[23] = Map[1][1];
	map[22] = Map[0][1];
	map[27] = Map[2][2];
	map[26] = Map[1][2];
	map[25] = Map[0][2];
}
int main() {
	string str;
	scanf("%d", &a);
	for(; a > 0; a--) {
		for(int i = 1; i <= 9; i++) {
			map[i] = 'w';
		}
		for(int i = 10; i <= 18; i++) {
			map[i] = 'o';
		}
		for(int i = 19; i <= 27; i++) {
			map[i] = 'y';
		}
		for(int i = 28; i <= 36; i++) {
			map[i] = 'g';
		}
		for(int i = 37; i <= 45; i++) {
			map[i] = 'b';
		}	
		for(int i = 46; i <= 54; i++) {
			map[i] = 'r';			
		}	
		scanf("%d", &n);
		for(int i = 1; i <= n; i++) {
			cin >> str;
			if(str == "U-") {
				Upback();
			}
			else if(str == "U+") {
				Upfront();
			}
			else if(str == "D-") {
				Downback();
			}
			else if(str == "D+") {
				Downfront();
			}
			else if(str == "F-") {
				Frontback();
			}
			else if(str == "F+") {
				Frontfront();
			}
			else if(str == "B-") {
				Backback();
			}
			else if(str == "B+") {
				Backfront();
			}
			else if(str == "L-") {
				Leftback();
			}
			else if(str == "L+") {
				Leftfront();
			}
			else if(str == "R-") {
				Rightback();
			}
			else if(str == "R+") {
				Rightfront();
			}
		}
		printf("%c%c%c\n%c%c%c\n%c%c%c\n", map[7], map[8], map[9], map[4], map[5], map[6], map[1], map[2], map[3]);
	}
	return 0;
}