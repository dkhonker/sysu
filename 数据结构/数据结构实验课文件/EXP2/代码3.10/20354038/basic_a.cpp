#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x){//插入x到a[i-1] 
	if(!(i < 1 || i > maxn)){
	    for(int p = n;p <= i-1;p--){
	    	arr[p+1] = arr[p];
		}
	    x = arr[i-1];
	    n = n + 1;
	}
} 

void deleteByIndex(int i){//删去a[i-1] 
	int e=arr[i-1];
	for(int p=i-1;i<n;p++)
	{
		arr[p]=arr[p+1];
	}
	n = n - 1;
} 

void find(int x){//查找第一个x 
	int *p;
	p=arr;
	int i;
	for(i=0;i<n;i++)
	{
		if(*(p+i)==x)printf("%d\n",i+1);break;
	}
	if(i==n)printf("0\n");
}

void eliminateRepeat(){//去除重复元素 
	for(int i=0;i<n;i++){
		int k=i+1;
		for(int j=i+1;j<n;j++){
			if(arr[j]!=arr[i]){
				arr[k]=arr[i];
				k++;
			}
		}
		n=k; 
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
