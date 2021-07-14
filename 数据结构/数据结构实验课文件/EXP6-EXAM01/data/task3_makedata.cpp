#include <stdio.h>
#include <stdlib.h>

int m;
int n;
const int M[10] = {20, 20, 35, 55, 100, 200, 300, 1000, 5000, 10000};
char filename[8] = "0.in";
FILE * fout;

int X[10];
int k = 0;

void getXY(int &x, int &y){
	x = rand() % 199 - 99;
	y = rand() % 199 - 99;
	if (x > y){
		int z = x; x = y; y = z;
	}
}

void genCommand(){
	int x, y;
	int r = rand() % 20;
	if (r < 1){ //deleteByRange
		getXY(x, y); fprintf(fout, "3 %d %d\n", x, y); n = 0; return;
	}
	if (r < 7){ // find
		fprintf(fout, "2 %d\n", X[rand() % 10]); return;
	}
	else {
		int x = rand() % 199 - 99;
		X[k] = x; k = (k + 1) % 10;
		fprintf(fout, "1 %d %d\n", rand() % (n + 1) + 1, x); return;
	}
}

int main() {
	srand(0);
	for (int i = 0; i < 10; i++) X[i] = rand() % 199 - 99;
	for (int t = 0; t < 10; t++){
		filename[0] = '0' + t;
		m = M[t]; n = 0;
		fout = fopen(filename, "w");
		fprintf(fout, "%d\n", m);
		for (int i = 0; i < m; i++) genCommand();
		fclose(fout);
	}
	return 0;
}
