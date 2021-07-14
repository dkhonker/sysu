#include<stdio.h>
#include <stdlib.h>
#include<algorithm>
#pragma warning(disable:4996)
#include <time.h>

const int Maxn = 5000;
int a[Maxn + 1][3], b[Maxn + 1][3];
int N[10] = {10,15,25,35,45,55,65,75,85,95};
int n;

FILE* fin;
char filename_in[10] = "0.in";

void tri_trans() {
	b[0][0] = a[0][1];
	b[0][1] = a[0][0];
	b[0][2] = a[0][2];
	int k = 1;
	for (int i = 1; i <= a[0][1]; i++)
		for (int j = 1; j <= a[0][2]; j++)
			if (a[j][1] == i)
			{
				b[k][0] = i;
				b[k][1] = a[j][0];
				b[k][2] = a[j][2];
				k++;
			}
}
void tri_trans2() {
	a[0][0] = b[0][1];
	a[0][1] = b[0][0];
	a[0][2] = b[0][2];
	int k = 1;
	for (int i = 1; i <= b[0][1]; i++)
		for (int j = 1; j <= b[0][2]; j++)
			if (b[j][1] == i)
			{
				a[k][0] = i;
				a[k][1] = b[j][0];
				a[k][2] = b[j][2];
				k++;
			}
}


void makeData(int flag) {
	int nn = n/2, flagg;
	
	a[0][0] = rand() % (n-nn+1) + nn;
	a[0][1] = rand() % (n-nn+1) + nn;
	a[0][2] = (a[0][0] * a[0][1]) / 10;

	for (int i = 1; i <= a[0][2]; i++){
		a[i][0] = rand() % a[0][0] + 1;
		a[i][1] = rand() % a[0][1] + 1;
		a[i][2] = rand() % 100 + 1;
		flagg = rand() % 100 + 1;
		if (flagg % 2) a[i][2] = -a[i][2];
	}

	tri_trans();
	tri_trans2();
	
	int k = 1;
	while(k < a[0][2]){
		if (a[k][0]==a[k+1][0] && a[k][1] == a[k+1][1]){
			a[k][2] += a[k+1][2];
			for (int sign = k+1 ; sign <= a[0][2]; sign++)
			{a[sign][0]=a[sign+1][0];a[sign][1]=a[sign+1][1];a[sign][2]=a[sign+1][2];}
			a[0][2]--;
		}
		else
			k++;
	}

	for (int i = 0; i <= a[0][2]; i++) 
		fprintf(fin, "%d %d %d\n", a[i][0],a[i][1],a[i][2]);
	
	fprintf(fin, "\n");
	
	b[0][0] = a[0][1];
	b[0][1] = rand() % (n-nn+1) + nn;
	b[0][2] = (b[0][0] * b[0][1]) / 10;
	for (int i = 1; i <= b[0][2]; i++){
		b[i][0] = rand() % b[0][0] + 1;
		b[i][1] = rand() % b[0][1] + 1;
		b[i][2] = rand() % 100 + 1;
		flagg = rand() % 100 + 1;
		if (flagg % 2) b[i][2] = -b[i][2];
	}
	
	tri_trans2();
	tri_trans();
	
	k = 1;
	while(k < b[0][2]){
		if (b[k][0]==b[k+1][0] && b[k][1] == b[k+1][1]){
			b[k][2] += b[k+1][2];
			for (int sign = k+1 ; sign <= b[0][2]; sign++)
			{b[sign][0]=b[sign+1][0];b[sign][1]=b[sign+1][1];b[sign][2]=b[sign+1][2];}
			b[0][2]--;
		}
		else
			k++;
	}
		
	for (int i = 0; i <= b[0][2]; i++) 
		fprintf(fin, "%d %d %d\n", b[i][0],b[i][1],b[i][2]);
	
}

int main() {
	srand(1);
	for (int i = 0; i < 10; i++) {
		n = N[i];
		filename_in[0] = '0' + i;
		printf("producing %s...\n", filename_in);
		fin = fopen(filename_in, "w");
		makeData(i);
		fclose(fin);
	}
}
