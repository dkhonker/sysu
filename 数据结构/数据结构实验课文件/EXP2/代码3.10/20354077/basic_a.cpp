#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1] 
    int k=0;
    
	for(k=n;k>=i;k--) 
	{
		arr[k]=arr[k-1];
	}
	arr[i-1]=x;
	n++;
} 

void deleteByIndex(int i){ //ɾ��a[i] 
    int k=0;
    for(k=i;k<=n-2;k++)
    {
    	arr[k]=arr[k+1];
	}
	n--;
} 

void find(int x){//���ҵ�һ��x 
    int k=0,ok=0;
    for(k=0;k<=n-1;k++)
    {
    	if(arr[k]==x)
    	{
    		printf("%d",k);ok=1;break;
		}
	}
	if(ok==0) printf("0");
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
    int i=0;
    while(i<n)
	{   int k=i+1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]!=arr[i])		
		arr[k++]=arr[j];
		}
		n=k;i++;
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
