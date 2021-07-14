#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x){//插入x到a[i-1] 
	int j;
	int *N = &n;
	if((i-1)>=0&&(i-1)<=n&&(i-1)<maxn)
	{
		if((n-1)==i)
		{
			arr[i-1] = x;
		}
		else
		{
			for(j=n;j>(i-1);j--)
			{
				arr[j] = arr[j-1];
				
			}
			arr[i-1] = x;
		}
		(*N)++;
	}
} 

void deleteByIndex(int i){ //删除a[i-1] 
	int j;
	int *N = &n;
	if((i-1)<n&&(i-1)>=0&&(i-1)<maxn)
	{
		for(j=i-1;j<n;j++)
		{
			arr[j] = arr[j+1];
		}
		(*N)--;
	}
} 

void find(int x){//查找第一个x 
	int i;
	int *N = &n;
	int* X = &x;
	for(i=0;i<=n;i++)
	{
		if(arr[i]==x)
		{
			X = &arr[i];
		}
		else if(i==n)
		{
			(*X) = 0;
		}
	}
}

void eliminateRepeat(){ //去除重复元素 
	int i,j,temp;
	temp = arr[0];
	int* N = &n;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				deleteByIndex(j+1);
				*(N)--;
			}
		}
	}
}

void count(int x, int y){//统计[x,y]中元素个数	
	int k = 0;
	for (int j = 0; j < n; j++)
		if (arr[j] >= x && arr[j] <= y)
			k++;
	printf("%d\n", k);
}

void deleteByRange(int x, int y){ //去除[x,y]范围内的元素 
	int k = 0;
	for (int j = 0; j < n; j++)
		if (arr[j] < x || arr[j] > y)
			arr[k++] = arr[j];
	n = k;
} 

int main() {
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
	printf("%d\n",n);
	return 0;
}
