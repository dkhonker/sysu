#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n=0;  //线性表中元素个数 
int arr[maxn];


void insert(int i, int x){
for(int q=n-1;q>=i-1;q--)
	{
		arr[q+1]=arr[q];//插入x到a[i] 
	}	
	arr[i-1]=x;
	n++;
	for(int j=0;j<n;j++)printf("%d ",arr[j]);printf("\n");
} 

void deleteByIndex(int i){
if(i<0||i>=n) printf("0\n");
else{
	for(int q=i;q<n-1;q++)
	{
		arr[q]=arr[q+1]; //删除a[i] 
		n--;
	} 
}
}

void find(int x)
{
	int q=0;
	while(arr[q]!=x&&q<n){
			q++;
		}
	if(q==n) 	
		printf("0\n");
	else
		printf("%d\n",q+1); //查找第一个x 	
}





void eliminateRepeat(){
int i,j;
for(i=0;i<n;i++)
	{
		int k=i+1;
		for(j=1+i;j<n;j++)
			{
				if(arr[j]!=arr[i])
				{arr[k++]=arr[j];
				}
			}
		n=k;
	}
}//去除重复元素 
 }
}
for(int j=0;j<n;j++)printf("%d ",arr[j]);printf("\n");
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

