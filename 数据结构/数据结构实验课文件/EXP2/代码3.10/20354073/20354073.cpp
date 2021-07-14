#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n=0;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x)
{
 for(int j=n-1;j>=i-1;j--)
 {
 arr[j+1]=arr[j];
 arr[i-1]=x;
 n=n+1;
}
} 

void deleteByIndex(int i)
{
 for(int j=i-1;j<n;j++)
 {
 arr[j]=arr[j+1];	
 n=n-1;
}
} 

void find(int x)
{
 for(int j=0;j<n;j++)
 {
 if(arr[j]==x)
 printf("%d\n",j+1);
 break;
 if(j=n-1)
 printf("0\n");
}
}

void eliminateRepeat()
{
 int x,y;
 for(x=0;x<n-1;x++)
 {
 for(y=x+1;y<n;y++)
 {
 if(arr[y]==arr[x])
 deleteByIndex(y+1);
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
	return 0;
}
