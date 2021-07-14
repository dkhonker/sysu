#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1] 
if(i<=n)
{
	for(int k=n;k>=i;k--)
	arr[k]=arr[k-1];
	arr[i-1]=x;
	n++;
}
else if(i==n+1)
{
	arr[i]=x;
	n++;
}
} 

void deleteByIndex(int i){ //ɾ��a[i-1] 
for(int k=i;k<n;k++)
{
	arr[k-1]=arr[k];
}
n--;
} 

void find(int x){//���ҵ�һ��x
int k=0;
int a=0;
 for(a=0;(k<n)&&(a==0);k++)
 {
 	if(arr[k]==x)
 	{
	 printf("%d\n",k+1);
	 a=1;
   } 	
}
if(a!=1) printf("0\n");
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
int i=0,k=1;
while(i<n)
{
	int k=i+1;
	for(int j=i+1;j<n;j++)
	if(arr[j]!=arr[i])
	arr[k++]=arr[j];
	n=k;
	i++;
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
