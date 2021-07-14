#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x){//插入x到a[i] 
    int k=i;
    for(int j=i;j<n;j++)
    arr[j]=arr[j-1];
    arr[k-1]=x;
} 

void deleteByIndex(int i){ //删除a[i] 
    int k=i;
    for(int j=i;j<n;j++)
    arr[j-1]=arr[j];
} 

void find(int x){//查找第一个x 
  for(int k=0;k<n;k++)
   if(arr[k]=x)
   printf("%d",k);
}

void eliminateRepeat(){ //去除重复元素 
int i=0;
while (i<n){
	int k=i+1;
	for(int j=1;j<n;j++)
	  if(arr[j]!=arr[i])
	    arr[k++]=arr[j];
	n=k;k++;
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

