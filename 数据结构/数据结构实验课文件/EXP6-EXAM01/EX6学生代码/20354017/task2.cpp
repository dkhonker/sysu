#include<iostream>
#include<math.h>
using namespace std;
string s[1000001];

void gray(int n) {
	if (n == 1) {
		s[0] = "0";
		s[1] = "1";
		return;
	}
	
	gray(n - 1);
	
	for (int i = pow(2, n - 1); i < pow(2, n); i++)
		s[i] = s[(int)(pow(2, n) - 1 - i)];
		
	for (int i = 0; i < pow(2, n); i++)
		if (i < pow(2, n - 1))s[i] = "0" + s[i];
		else s[i] = "1" + s[i];
}
int main() {
	int n;
	cin >> n;
	gray(n);
	for (int i = 0; i < pow(2, n); i++)
		cout << s[i] << endl;
	return 0;
}
