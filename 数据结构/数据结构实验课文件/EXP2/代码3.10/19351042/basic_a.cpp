#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i,ElemType L[],int x,int *N){//插入x到a[i] 
int n=*N;
if((i<1)||(i>n+1))return 0;
else{
	int j;
	for(j=n;j>i;j--)
	L[j]=L[j-1];
	L[j]=x;
	*N=++n;
	return 1;
 }
}
void deleteByIndex(int i,ElemType L[],int *N){ //删除a[i] 
int n=*N;
if((i<1)||(i>n))return 0;
else{
	int j;
	e=L[i-1];
	for(j=i;j<n;j++)L[j-1]=L[j];
	*N=--n;
	return 1;
 }
} 

void find(int x){//查找第一个x 
int j;
for(j=1,j<n,j++)
if(L(j)==x)
printf("%d",j);
break;
else{printf("%d",0);
}
return 0; 
}

void eliminateRepeat(){ //去除重复元素 
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
