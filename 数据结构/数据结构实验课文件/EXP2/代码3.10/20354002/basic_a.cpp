#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n=0;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x)
{  
	for(int j=n-1;j>=(i-1);j--)
	arr[j+1]=arr[j];
	arr[i-1]=x; 
	n=n+1;                          //插入x到a[i] 
} 

void deleteByIndex(int i)
{
    for(int j=i-1;j<n;j++)
	arr[j]=arr[j+1];
	n=n-1;                           //删除a[i] 
} 

void find(int x)
{
    for(int j=0;j<n;j++)
	    {
		    if(arr[j]==x)
			{
			printf("%d",j+1);
			break;
		    }
		    if(j==n-1)
		    printf("0");
	    }                          //查找第一个x 
}

void eliminateRepeat()
{
    int temp[n+1];
	for(int j=0;j<n;j++)
	temp[j]=arr[j];
	for(int j=0;j<n;j++)
	    for(int a=0;a<n;a++)
		   {
			 if(arr[j]==temp[a])
			{
			    for(int b=a;b<n-1;b++)
				    arr[b]=arr[b+1] ;
				n=n-1;
			} 
			}            //去除重复元素 
}

void count(int x, int y)
{             //统计[x,y]中元素个数	
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
	return 0;
}
