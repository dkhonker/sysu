#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3];

void tri_trans() {
	b[0][0] = a[0][1];//������С�ת�õ��� 
	b[0][1] = a[0][0];//������С�ת�õ��� 
	b[0][2] = a[0][2];//����Ԫ�ظ��� 
	int k = 1;

	for (int i = 1; i <= a[0][1]; i++)
		for (int j = 1; j <= a[0][0]; j++)
			for(int p=1;p<=a[0][2];p++)
			if(a[p][1]==i&&a[p][0]==j)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[p][2];
				k++;
			 } 
	       //please add something here




	for (int i = 0; i <= b[0][2]; i++)
	{
		for (int j = 0; j <= 2; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}

int tri_pos(int x,int y) {
	for(int i=1;i<=b[0][2];i++)
		if(b[i][0]==x&&b[i][1]==y) return b[i][2];
	return 0; 

//please finish this function


}


int main() {
	for (int j = 0; j <= 2; j++)//a[0][0]����������a[0][1]����������a[0][2]�������Ԫ�ظ��� 
		scanf("%d", &a[0][j]);
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &a[i][j]);//a[i][0]����Ԫ���������� ��a[i][1]����Ԫ������������a[i][2]�������Ԫ�ص�ֵ 
	tri_trans();

	int x , y;
	scanf("%d %d",&x,&y);
	printf("%d",tri_pos(x,y));
	return 0;
}
