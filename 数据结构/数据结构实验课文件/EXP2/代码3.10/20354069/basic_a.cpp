#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x){//插入x到a[i] 
if(i<0||i>=n)printf("i的值不在范围内")
else{
int a=n-1;
for(a;a>i;a--)
arr[a]=arr[a-1];
arr[i-1]=x;
}
} 

void deleteByIndex(int i){ //删除a[i] 
if(i<0||i>=n)printf("i的值不在范围内")
else{
int a=i;
for(a;a<n-1;a++)
arr[a]==arr[a+1];
}
}
 
void find(int x){//查找第一个x 
for(int a=0;a<n;a++){
if(arr[a]==x)printf("%d",a)break;
if(a=n-1)printf("0");
}
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
