#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x)
{
	int j;
	for(j=n;j>=i-1;j--)
	arr[j]=arr[j-1];
	arr[j-1]=x;
	n++;
	
} 

void deleteByIndex(int i)//ɾ��a[i-1] 
{ 
	int *N;
	N=&n;
    int j;
    for(j=i;j<n;j++)
    {
	arr[j-1]=arr[j];}
    *N=n-1;
} 

void find(int x)
{
//���ҵ�һ��x 
    int t=0;
    for(int i=0;i<=n-1;i++)
    {
	if(arr[i]==x)
    {
	printf("%d",i+1);
    break;}
    else 
    t++;
    }
    if(t==n)
    printf("0");
}

void eliminateRepeat()
{ //ȥ���ظ�Ԫ�� 
    for(int i=0;i<n;i++)
    {
	for(int j=i+1;j<n;j++)
    {
	if(arr[i]==arr[j])
     deleteByIndex(j+1);
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

