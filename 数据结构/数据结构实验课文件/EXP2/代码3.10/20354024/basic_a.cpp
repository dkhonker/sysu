#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];
void insert(int i, int x)//����x��a[i-1] } 
{
	if (i>n||i<0) printf("�Ƿ�����i"); 
	int k;
	for (k=n;k>i-1;k--)
	{
		arr[k+1]=arr[k];
	}
	arr[k]=x;
	n++;
}
void deleteByIndex(int i)//ɾ��a[i-1] 
{
	if (i>n||i<0) printf("�Ƿ�����i"); 
	int k;
	for (k=i-1;k<n;k++)
	{
		arr[k]=rra[k+1];
	}
	n--;
}
void find(int x)//���ҵ�һ��x }
{
	int k,o;
	o=0;
	for(k=0;k<n;k++)
	{
		if (arr[k]==x)
		o=1;
		break;
	}
	if (o=0) printf("0\n");
	printf("%d",k++);
}
void eliminateRepeat()//ȥ���ظ�Ԫ�� }
{
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=1;j<n;j++)
		{
			if(arr[j]==arr[i])
			{
			deleteByIndex(j);
			n--;}
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
