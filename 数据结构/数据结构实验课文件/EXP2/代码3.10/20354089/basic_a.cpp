#include <stdio.h>

const int maxn = 10000;

int m=6;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x){//插入x到ai
    int k;
    for(k=i;k<=n;k++)
    arr[k]=arr[k-1];
    arr[i-1]=x;
    n++;
} 

void deleteByIndex(int i){ //删除ai
    int k;
    for(k=i;k<n;k++)
    arr[k-1]=arr[k];
    n--;
    
} 

void find(int x){//查找第一个x 
    int a=0;
    int k;
    for(k=1;k<=n;k++)
    {
    if(arr[k-1]==x)
	{
    a=1;
    printf("%d",k);
    break
    }
    }
    if(a=0)
    printf("0");
}

void eliminateRepeat(){ //去除重复元素 
    int k;
    for(k=1;k<n;k++)
    {
    	for(i=k+1;i<=n;i++)
    	{
    		if(arr[i-1]=arr[k-1])
    		deleteByIndex(i);
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
