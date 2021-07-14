#include <stdio.h>
#include <stdlib.h>

const int maxn = 10000;

int m;  //������ 
int n=0;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x)
{//����x��a[i-1]
	int q;
	n++;
	if(n>=maxn)exit(1);
	if(i<1||i>n+1)exit(1);
	else
	{
		for(q=n;q>i-1;q--)
		{
			arr[q]=arr[q-1];
		}
		arr[i-1]=x;
	}
} 

void deleteByIndex(int i)
{ //ɾ��a[i-1]
	int q;
	for(q=i-1;q<n;q++)
	{
		arr[q]=arr[q+1];
	}
	n--;
} 

void find(int x)
{//���ҵ�һ��x 
	int i;
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("%d\n",i+1);
			flag=1;
			break;
		}		
	}
	if(flag==0)printf("0\n");
}

void eliminateRepeat()
{ //ȥ���ظ�Ԫ��
	int temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		for(j=i+1;j<n;j++)
		{
			if(arr[j]==temp)
			{
				deleteByIndex(j);
			}
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
