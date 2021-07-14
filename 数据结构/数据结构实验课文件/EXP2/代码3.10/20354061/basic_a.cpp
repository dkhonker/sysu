#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1] 
int t;int n=0;
for(t=i-1;t<=n;t++)
arr[t+1]=arr[t];
arr[i-1]=x;
n++;
} 

void deleteByIndex(int i){ //ɾ��a[i] 
for(int t=i;t<=n;t++)
{
	arr[t+i]=arr[t];
	n--;
}
} 

void find(int x){//���ҵ�һ��x 
scanf("%d",&x);
int t;
for(t=0;t<=n-1;t++)
{
	if(arr[t]==x)printf("%d\n",t+1);break;
}
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
int i=0;
while(i<n){
	int k=i+1;
	for(int j=i+1;j<n;j++)
		if(arr[j]!=arr[i])
			arr[k++]=arr[j];
			n=k;i++;
}
}

void count(int x, int y){//ͳ��[x,y]��Ԫ�ظ���	
	int k = 0;
	for (int j = 0; j < n; j++)
		if (arr[j] >= x && arr[j] <= y)
			k++;
	printf("%d\n", k);
}

void deleteByRange(int x, int y){ //ȥ��[x,y]��Χ�ڵ�Ԫ�� 
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
