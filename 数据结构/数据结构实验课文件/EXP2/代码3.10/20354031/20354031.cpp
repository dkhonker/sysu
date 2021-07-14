#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x){//插入x到a[i-1] 
	int j;
	for(j=n;j>=i;j--){
		arr[j]=arr[j-1];
	}
	arr[i-1]=x;
	n++;
} 

void deleteByIndex(int i){ //删除a[i-1] 
	int j;
	for(j=i-1;j<n-1;j++){
		arr[j]=arr[j+1];
	}
	n--;
} 

void find(int x){//查找第一个x 
	int j,flag=0;
	for(j=0;j<n;j++){
		if(arr[j]==x){
			printf("%d\n",j+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("0\n");
}

void eliminateRepeat(){ //去除重复元素 
	int b[n],i,j,k,flag=0;
	for(i=0,k=0;i<n;i++){
		for(j=0;j<=k;j++){
			if(b[j]==arr[i])
			{flag=1;break;}
		}
		if(flag==0)
		b[k++]=arr[i];
	}
	for(i=0,n=k;i<k;i++)
		arr[i]=b[i];
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
