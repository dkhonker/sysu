#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x)
{//����x��a[i] 
int j;

if(i>0||i<n-1)
{
	
	for(j=n-1;j>=i-1;j--)
	{
		arr[j+1]=arr[j];
	}

	arr[i-1]=x;
} 
else return 0;
}

void deleteByIndex(int i)
{ //ɾ��a[i] 
int j;

if(i>0||i<n-1)
{
	for(j=i;j<=n-1;j++)
	{
		arr[j-1]=arr[j];
	}
} 
else return 0;
}

void find(int x)
{//���ҵ�һ��x 
int j;
if(i>0||i<n-1)
{
	for(j=0;j<n;j++)
	{
		if(arr[j]==x)
		print("%d\n",j);
	}
} 
else return 0;
}

void eliminateRepeat()
{ //ȥ���ظ�Ԫ�� 
int brr[maxn];
int k=0,j=0,b=0;
int flag=0;

for(k=0;k<n;k++)
{
	for(j=k;j<n;j++)
	{
		if(arr[k]==arr[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		flag=0;
		continue;
	}
	brr[b]=arr[k];
	b++;
}

for(k=0;k<=b;k++)
{
	arr[k]=brr[k];
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
