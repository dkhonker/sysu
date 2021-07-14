#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n=1;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x)
{//插入x到a[i-1] 
if(i<1||i>=n) return;
else{
	int j;
	for(j=n;j>=i-1;j--) 
	{
		arr[j]=arr[j-1];
	}
	arr[j]=x;
	return;
}

} 

void deleteByIndex(int i)
{ //删除a[i-1] 
if(i<1||i>n) return;
else
{
	int j=i-1;	
	for(j=i-1;j<=n-2;j++)arr[j]=arr[j+1];
}
} 

void find(int x)
{//查找第一个x 
int j;
for(j=0;j<=n-1;j++)
if(arr[j]=x)
{
	printf("arr[%d]",j+1);
	break;
}
}

void eliminateRepeat()
{ //去除重复元素 
int j=0;
while(j<=n-1)
{
	for(int t=j+1;t<=n-1;t++)
	{
		if(arr[j]==arr[t])
		{
			for(t=j+1;t<=n-1;t++)
			{
				arr[t]=arr[t+1];
				n--;
			}
		}
	}
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
	for (int k = 0; k < m; k++){
		int c, i, x, y;
		scanf("%d", &c);
		switch (c){
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
