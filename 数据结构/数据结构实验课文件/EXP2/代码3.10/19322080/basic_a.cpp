#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i] 
	i--;
	if(i<0||i>n||n>=maxn)
	{
		return;
	}
	int q;
	for(q=n-1;q>i;q--)
	{
		arr[q+1]=arr[q];
	}
	arr[i]=x;
	n++;
	return;
} 

void deleteByIndex(int i){ //ɾ��a[i] 
	i--;
	if(i<0||i>n-1)
	{
		return;
	}
	int q;
	for(q=i;q<n-1;q++)
	{
		arr[q]=arr[q+1];	
	}
	n--;
	return;
} 

void find(int x){//���ҵ�һ��x 
	if(n==0)
	{
		printf("0\n");
		return;
	}
	int q;
	for(q=0;q<n;q++)
	{
		if(arr[q]==x)
		{
			printf("%d\n",q+1);
			return;
		}
	}
	printf("0\n");
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ��
	if(n==0)
	{
		return;	
	} 
	int q,j;
	for(q=0;q<n-1;q++)
	{
		for(j=q+1;j<n;j++)
		{
			if(arr[q]==arr[j])
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
