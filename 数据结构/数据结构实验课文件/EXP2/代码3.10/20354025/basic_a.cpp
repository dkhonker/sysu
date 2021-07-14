#include <stdio.h>

const int maxn = 10000;

int m;  //命令数 
int n;  //线性表中元素个数 
int arr[maxn];

void insert(int i, int x){//插入x到ai 
if((i<1)||(i>maxn))return; 
else{
int j;
for(j=n;j>=i;j--){
arr[j]=arr[j-1];}
arr[i-1]=x;}
n++;}

void deleteByIndex(int i){ //删除ai
if((i<0)||(i>maxn))return; 
else{
int j;
for(j=i;j<=n;j++)
arr[j]=arr[j+1];}
n--;}


void find(int x){//查找第一个x 
for(int i=0;i<=n;i++){
if(arr[i]==x){
printf("%d\n",i);
break;}
else
if(i>n)
printf("%d\n",0);}
}

void eliminateRepeat(){ //去除重复元素 
int i=0;
while(i<n){
    int k=i+1;
	for(int j=i+1;j<n;j++)
	    if(arr[j]!=arr[i])
		    arr[k++]=arr[j];
	n=k;
	i++;}
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
