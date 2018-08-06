#include <iostream>
using namespace std;

int t, r, c;
int i1_c[26], i2_c[26], i1_l, i2_l;
char i1[11], i2[11];

int main(){
	cin >> t;
	cin >> i1;
	for (int i = 0; i1[i] != '\0'; i++) { 
		i1_c[i1[i]-'A']++; 
		i1_l++;
	}
	for (int i = 1; i < t; i++) {
		cin >> i2;
		for (int j = 0; i2[j] != '\0'; j++) {
			i2_c[i2[j] - 'A']++;
			i2_l++;
		}
		for (int j = 0; j < 26; j++) {
			c += abs(i1_c[j] - i2_c[j]);
			i2_c[j] = 0;
		}
		if (c <= 2 && abs(i1_l-i2_l) < 2) r++;
		c = 0;
		i2_l = 0;
	}
	cout << r;
	return 0;
}