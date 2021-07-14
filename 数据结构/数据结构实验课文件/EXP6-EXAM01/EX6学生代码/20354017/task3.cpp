#include <stdio.h>

const int maxn = 10001;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1]
int j;
for(j=n;j>=i-1;j--)
{
	if(j>i-1)
	arr[j]=arr[j-1];
	else arr[j]=x;
}
n=n+1;
} 


void find(int x){//���ҵ�һ��x 
int j,k=0;
for(j=0;j<n;j++)
{
	if(arr[j]==x)
	{
		k=j+1;
		break;
	}
}
printf("%d\n",k);
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
			case 2: scanf("%d", &x); find(x); break;
			case 3: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}
