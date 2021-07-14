#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3], Q[Maxn + 1][3] ,q[Maxn + 1][Maxn + 1];
//q为结果矩阵 
void tri_multi() {
	if (a[0][1] != b[0][0])return; //若不满足矩阵相乘条件，直接返回 

	Q[0][0] = a[0][0];//结果矩阵的行数 
	Q[0][1] = b[0][1];//结果矩阵的列数 
	Q[0][2] = 0;//结果矩阵中非零元素个数暂设为0 
	int n=1;
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 1; j <= b[0][2]; j++)
			if(a[i][1]==b[j][0])
			q[a[i][0]][b[j][1]]+=a[i][2]*b[j][2];
			//please add something here
			//multiply two matrixes


	for (int i = 1; i <= Q[0][0]; i++){
		for (int j = 1; j <= Q[0][1]; j++)
			printf("%d\t",q[i][j]);//打印结果矩阵 
		printf("\n");
	}

	for (int i = 1; i <= Q[0][0]; i++){
		for (int j = 1; j <= Q[0][1]; j++)
			if(q[i][j]!=0)
			{
				Q[0][2]++;
				Q[n][0]=i;
				Q[n][1]=j;
				Q[n][2]=q[i][j];
				n++;
			}
	    //please add something here
			//reform it to a three tuple table

	}

	for (int i = 0; i <= Q[0][2]; i++)
	{
		for (int j = 0; j <= 2; j++)
			printf("%d ", Q[i][j]);
		printf("\n");
	}
}

int main() {
	for (int j = 0; j <= 2; j++)//a[0][0]矩阵行数、a[0][1]矩阵列数、a[0][2]矩阵非零元素个数 
		scanf("%d", &a[0][j]);
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &a[i][j]);//a[i][0]非零元素所在行数 、a[i][1]非零元素所在列数、a[i][2]矩阵非零元素的值 
	getchar();

	for (int j = 0; j <= 2; j++)
		scanf("%d", &b[0][j]);//a[0][0]矩阵行数、a[0][1]矩阵列数、a[0][2]矩阵非零元素个数 
	for (int i = 1; i <= b[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &b[i][j]);//b[i][0]非零元素所在行数 、b[i][1]非零元素所在列数、b[i][2]矩阵非零元素的值 

	tri_multi();
	return 0;
}
