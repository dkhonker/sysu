#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr=[maxm];
void insert(int i, int x){//插入x到a[i-1] 
int a=i;
if(i<0)
{return;}
for(;arr[a]!='/0';a=a++)
{
}
for(;a!=i;a=a--)
{arr[a]=arr[a-1];
}
arr[i]=arr[i-1];
arr[i-1]=x;
} 

void deleteByIndex(int i){ //删除a[i-1] a
int a=i;
if(i<0)
{return;
}
for(;arr[a]!='/0';a=a++);
for(;i<a;i++)
{arr[i-1]=arr[i];
}
} 

void find(int x){//查找第一个x 
int i=0;
for(i=0;;i++)
{if(arr[i]==x)
{i=i+1;
printf("i的值为%d\n",i);
return;
}
}
printf("0\n");
}

void eliminateRepeat(){ //去除重复元素 
int a;
int b;
int c=0;
for(a=0,b=a+1;;a=a+1)
{c=a;
{for(;;b=b+1)
if(arr[a]!=arr[b])
{c=c+1;
arr[c]=arr[b];
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
	return 0;
}
