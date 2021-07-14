#include <stdio.h>
#include <stdlib.h>

int m;
int n;
const int M[10] = {10, 10, 15, 15, 20, 20, 30, 100, 1000, 10000};
char filename[8] = "0.in";
FILE * fout;

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
	if (r < 1){ //eliminateRepeat
		fprintf(fout, "5\n"); n = 0; return;
	}
	if (r < 2){ //deleteByRange
		getXY(x, y); fprintf(fout, "6 %d %d\n", x, y); n = 0; return;
	}
	if (r < 5){ // find
		fprintf(fout, "3 %d\n", rand() % 199 - 99); return;
	}
	if (r < 8){ // count
		getXY(x, y); fprintf(fout, "4 %d %d\n", x, y); return;
	}
	if (r < 17 || n == 0){
		fprintf(fout, "1 %d %d\n", rand() % (n + 1) + 1, rand() % 199 - 99); return;
	}
	else //n>0, deletebyindex 
		fprintf(fout, "2 %d\n", rand() % n + 1);
}

int main() {
	srand(0);
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
