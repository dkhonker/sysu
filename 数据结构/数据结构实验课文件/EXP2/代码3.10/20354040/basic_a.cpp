#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i] 
int loc=n-1;
if(i>0&&i<=maxn&&(n+1)<=maxn)
{
	for(loc=n-1;loc>=i-1;loc--)
		arr[loc+1]=arr[loc];
	arr[i-1]=x;
	n=n+1;
}
}

void deleteByIndex(int i){ //ɾ��a[i] 
int loc;
if(i>0&&i<=maxn)
for(loc=i-1;loc<=n-2;loc++)
	arr[loc]=arr[loc+1];
arr[n-1]=0;
n=n-1;
} 

void find(int x){//���ҵ�һ��x 
int loc=0;
int flag=0;
for(loc=0;loc<n;loc++)
	if(arr[loc]==x)
	{
		flag=loc+1;
		break;
	}	
printf("%d\n",flag);
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
int i,j,k;
for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		if(arr[j]==arr[i])
			{
				for(k=j;k<n-1;k++)
				{	
					arr[k]=arr[k+1];
				}
				arr[k]=0;
				n=n-1;
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
