#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3], Q[Maxn + 1][3] ,q[Maxn + 1][Maxn + 1];
//qΪ������� 
void tri_multi() {
	if (a[0][1] != b[0][0])return; //��������������������ֱ�ӷ��� 

	Q[0][0] = a[0][0];//������������ 
	Q[0][1] = b[0][1];//������������ 
	Q[0][2] = 0;//��������з���Ԫ�ظ�������Ϊ0 
	int n=1;
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 1; j <= b[0][2]; j++)
			if(a[i][1]==b[j][0])
			q[a[i][0]][b[j][1]]+=a[i][2]*b[j][2];
			//please add something here
			//multiply two matrixes


	for (int i = 1; i <= Q[0][0]; i++){
		for (int j = 1; j <= Q[0][1]; j++)
			printf("%d\t",q[i][j]);//��ӡ������� 
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
	for (int j = 0; j <= 2; j++)//a[0][0]����������a[0][1]����������a[0][2]�������Ԫ�ظ��� 
		scanf("%d", &a[0][j]);
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &a[i][j]);//a[i][0]����Ԫ���������� ��a[i][1]����Ԫ������������a[i][2]�������Ԫ�ص�ֵ 
	getchar();

	for (int j = 0; j <= 2; j++)
		scanf("%d", &b[0][j]);//a[0][0]����������a[0][1]����������a[0][2]�������Ԫ�ظ��� 
	for (int i = 1; i <= b[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &b[i][j]);//b[i][0]����Ԫ���������� ��b[i][1]����Ԫ������������b[i][2]�������Ԫ�ص�ֵ 

	tri_multi();
	return 0;
}
