#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n=0;  //***���Ա���Ԫ�ظ���*** 
int arr[maxn];

void insert(int i, int x)
{
    //����x��a[i-1] 
    //��ʼ��ʱ��Ҫ���� 
	int j=n+1;

	for(j;j>=i-1;j--)//������ڵ��� 
	{
		arr[j]=arr[j-1];
	}
	arr[i-1]=x;
	n++; 
	
} 

void deleteByIndex(int i)
{ //ɾ��a[i-1] 
       int j=i-1;
       for (j; j<n-1;j++)
       {
       	arr[j]=arr[j+1];
	   }
	   n--;
} 

void find(int x)
{//���ҵ�һ��x 
     int j=0; 
	 while ( arr[j]!=x && j<=n-1)
	{
	 	j++;
	} 
	if (arr[j]==x)
	printf("%d \n",j+1);
	else printf("0 \n");
	
} 

void eliminateRepeat()
{ 
    for(int i=0;i<=n-1;i++)
    for(int j=i+1;j<=n-1;j++)
    { 
	if(arr[i]==arr[j]) 
	{
	   deleteByIndex(j+1);
	   n--;
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
	for (int k = 0; k < m; k++)
	{
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
	//for (int k = 0; k <=n-1; k++)
	//printf("%d ",arr[k]); 
	return 0;
}
