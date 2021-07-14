#include<stdio.h>
#include <stdlib.h>
#include<algorithm>
#pragma warning(disable:4996)

int N[10] = { 5,10,15,25,35,45,55,75,85,100};
int n;

FILE* fin;
char filename_in[10] = "0.in";

void makeData(int flag) {
	fprintf(fin, "%d\n", n);
	for (int i = 1; i <= n; i++) {
		int x = rand() % (2*n + 1);
		fprintf(fin, "%d ", x);
	}
	fprintf(fin, "\n");
	for (int i = 1; i <= n; i++) {
		int x = rand() % (2 * n) + 1;
		fprintf(fin, "%d ", x);
	}

}

int main() {
	srand(0);
	for (int i = 0; i < 10; i++) {
		n = N[i];
		filename_in[0] = '0' + i;
		printf("producing %s...\n", filename_in);
		fin = fopen(filename_in, "w");
		makeData(i);
		fclose(fin);
	}
}