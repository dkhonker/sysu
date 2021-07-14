#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x)
{//����x��a[i] 
for(int j=sizeof(arr[maxn])+1-1;j>i;j--)
{
	arr[j]=arr[j-1];
}
arr[i]=x;
} 

void deleteByIndex(int i)
{ //ɾ��a[i] 
for(int j=i;j<=sizeof(arr[maxn]-1);j++)
{
	arr[j]=arr[j+1];
}
} 

int find(int x)
{//���ҵ�һ��x 
int i=0;
while(arr[i]!=x)
{
	i++;
}
return i+1;
}

void eliminateRepeat()
{ //ȥ���ظ�Ԫ��
 for(int i=0;i<=sizeof(arr[maxn]-1);i++)
 for(int j=i+1;j<=sizeof(arr[maxn]-1);j++)
 {
 	if(arr[j]==arr[i]) deleteByIndex(j);
 }
}

void count(int x, int y)
{//ͳ��[x,y]��Ԫ�ظ���	
	int k = 0;
	for (int j = 0; j < n; j++)
		if (arr[j] >= x && arr[j] <= y)
			k++;
	printf("%d\n", k);
}

void deleteByRange(int x, int y)
{ //ȥ��[x,y]��Χ�ڵ�Ԫ�� 
	int k = 0;
	for (int j = 0; j < n; j++)
		if (arr[j] < x || arr[j] > y)
			arr[k++] = arr[j];
	n = k;
} 

int main() 
{
	scanf("%d", &m);
	for (int k = 0; k < m; k++)
	{
		int c, i, x, y;
		scanf("%d", &c);
		switch (c)
		{
			case 1: scanf("%d%d", &i, &x); insert(i, x); break;
			case 2: scanf("%d", &i); deleteByIndex(i); break;
			case 3: scanf("%d", &x); find(x); break;
			case 4: scanf("%d%d", &x, &y); count(x, y); break;
			case 5: eliminateRepeat(); break;
			case 6: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}
