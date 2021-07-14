#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i] 
int * N;
*N=n;
for(int j=n;j>=i-1;--j){ 
arr[j+1]=arr[j];
}
arr[i-1]=x;
*N++;
} 

void deleteByIndex(int i){ //ɾ��a[i] 
int *N;
*N=n;
for(int j=i;j<=n-1;++j){
arr[j-1]=arr[j];
}
*N--;
} 

void find(int x){//���ҵ�һ��x  ���xλ��i  ʧ�����0 
for(int j=0;j<=n-1;j++)
if(arr[j]==x)
printf("%d",j+1);
break;
else
printf("0");
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


void count(int x, int y){//ͳ��[x,y]��Ԫ�ظ������������t	
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
