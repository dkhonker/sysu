#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n=0;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x){//插入x到a[i-1] 
	for(int j=n;j>=i-1;j--){
		arr[j+1]=arr[j];
	}
	arr[i-1]=x;
	n++;
} 

void deleteByIndex(int i){ //删除a[i-1] 
	for(int j=i;j<n;j++){
		arr[j-1]=arr[j];
	}
	n--;
} 

void find(int x){//查找第一个x 
	int flag=0;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			printf("%d\n",i+1);
			flag=1;
		}
	}
	if(flag==0) printf("0\n");
}

void eliminateRepeat(){ //去除重复元素 
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(arr[i]==arr[j]){
				deleteByIndex(j);
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
