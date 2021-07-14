#include <stdio.h>
#include<iostream>
using namespace std;
const int maxn = 10000;

int m;  //������
int n;  //���Ա���Ԫ�ظ���
int arr[maxn];
int result[10001];
int t = 1;
void insert(int i, int x)     //����x��a[i]
{ 
	i = i - 1;
	for(int j = n; j >= i; j--) 
	{
		arr[j] = arr[j-1];
	}
	++n;
	arr[i] = x;
}

void deleteByIndex(int i)     //ɾ��a[i]
{ 
	i = i - 1;
	--n;
	for(int j = i; j < n; j++) {
		arr[j] = arr[j+1];
	}
}

void find(int x)    //3.���ҵ�һ��x
{   
    int is_exist = 0;
	for(int i = 0; i<=n-1; i++) 
	{
		if(arr[i] == x) 
		{
			/*
			result[t] = i + 1;
			t++;
			*/
			printf("%d\n",i+1);
			is_exist = 1;
			break;
		}
	}
	/*
	if(is_exist == 0) 
	{
		result[t] = 0;
		t++;
	}*/
	printf("0");
}

void eliminateRepeat()    //5.ȥ���ظ�Ԫ��
{ 
	int num = 0;
	int is_exist = 0;
	for(int i = 0;i < n;i++)
	{
		is_exist = 0;
		for(int j = 0; j < num; j++)
		{
			if(arr[j] == arr[i])
			{
				is_exist = 1;
				break;
			}
		}
		if(is_exist == 0)
		{
			arr[num] = arr[i];
			num++;
		}
		
	}
	n = num ;
}

void count(int x, int y)    //ͳ��[x,y]��Ԫ�ظ���
{ 
	int k = 0;
	for (int j = 0; j < n; j++)
		if (arr[j] >= x && arr[j] <= y)
			k++;
	//result[t] = k;
	//t++;
	printf("%d\n", k);
}

void deleteByRange(int x, int y)   //ȥ��[x,y]��Χ�ڵ�Ԫ��
{ 
	int k = 0;
	for (int j = 0; j < n; j++)
		if (arr[j] < x || arr[j] > y)
			arr[k++] = arr[j];
	n = k;
}

int main() {
	scanf("%d", &m);
	for (int k = 0; k < m; k++) {
		int c, i, x, y;
		scanf("%d", &c);
		switch (c) {
			case 1:
				scanf("%d%d", &i, &x);
				insert(i, x);
				break;
			case 2:
				scanf("%d", &i);
				deleteByIndex(i);
				break;
			case 3:
				scanf("%d", &x);
				find(x);
				break;
			case 4:
				scanf("%d%d", &x, &y);
				count(x, y);
				break;
			case 5:
				eliminateRepeat();
				break;
			case 6:
				scanf("%d%d", &x, &y);
				deleteByRange(x, y);
				break;
		}
	}
	/*
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}*/
	/*for(int i=1;i<t;i++)
	{
		printf("%d\n",result[i]);
	}*/
	return 0;
}
/*
9
1 1 5
1 1 6
1 2 5
1 4 6
3 5
3 7
1 3 7
5
4 1 6
*/
