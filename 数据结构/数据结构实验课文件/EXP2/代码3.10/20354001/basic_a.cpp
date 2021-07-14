#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x)
{//插入x到a[i] 
for(int j=sizeof(arr[maxn])+1-1;j>i;j--)
{
	arr[j]=arr[j-1];
}
arr[i]=x;
} 

void deleteByIndex(int i)
{ //删除a[i] 
for(int j=i;j<=sizeof(arr[maxn]-1);j++)
{
	arr[j]=arr[j+1];
}
} 

int find(int x)
{//查找第一个x 
int i=0;
while(arr[i]!=x)
{
	i++;
}
return i+1;
}

void eliminateRepeat()
{ //去除重复元素
 for(int i=0;i<=sizeof(arr[maxn]-1);i++)
 for(int j=i+1;j<=sizeof(arr[maxn]-1);j++)
 {
 	if(arr[j]==arr[i]) deleteByIndex(j);
 }
}

void count(int x, int y)
{//统计[x,y]中元素个数	
	int k = 0;
	for (int j = 0; j < n; j++)
		if (arr[j] >= x && arr[j] <= y)
			k++;
	printf("%d\n", k);
}

void deleteByRange(int x, int y)
{ //去除[x,y]范围内的元素 
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
