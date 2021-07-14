#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n=0;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1] 
int j;
	if(n<=maxn&&i>=1&&i<=n+1)
	{	
		for(j=n;j>i-1;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[i-1]=x;
		n++;
	}
} 

void deleteByIndex(int i){ //ɾ��a[i] 
	int j;
	i--;
	if(i>=0&&i<=n-1)
	{
		for(j=i;j<=n-2;j++)
		{
			arr[j]=arr[j+1];
		}
	}
	n--;
} 

void find(int x){//���ҵ�һ��x 
int p=0;
while(arr[p]!=x&&p<=n-1)
{
	if(arr[p]==x)
	{
		break;
	}
	p++;
}
if(p!=n)
{
	printf("%d\n",p+1);	
}
else if(p==n)
{
	printf("0\n");
}

}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
int p=0;
int num[maxn];
int numend=-1;
int i=0,j,pan=0;
for(;i<=n-1;i++)
{	
		for(j=0;j<=numend;j++)
		{
			if(arr[i]==num[j])
			{
				deleteByIndex(i);
				pan=1;
				break;
			}
		}
		if(pan==1)
		{
			pan=0;
			numend++;
			num[numend]=arr[i];
		}
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
