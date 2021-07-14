#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n=0;  //���Ա���Ԫ�ظ��� 
int arr[maxn];


void insert(int i, int x){
for(int q=n-1;q>=i-1;q--)
	{
		arr[q+1]=arr[q];//����x��a[i] 
	}	
	arr[i-1]=x;
	n++;
	for(int j=0;j<n;j++)printf("%d ",arr[j]);printf("\n");
} 

void deleteByIndex(int i){
if(i<0||i>=n) printf("0\n");
else{
	for(int q=i;q<n-1;q++)
	{
		arr[q]=arr[q+1]; //ɾ��a[i] 
		n--;
	} 
}
}

void find(int x)
{
	int q=0;
	while(arr[q]!=x&&q<n){
			q++;
		}
	if(q==n) 	
		printf("0\n");
	else
		printf("%d\n",q+1); //���ҵ�һ��x 	
}





void eliminateRepeat(){
int i,j;
for(i=0;i<n;i++)
	{
		int k=i+1;
		for(j=1+i;j<n;j++)
			{
				if(arr[j]!=arr[i])
				{arr[k++]=arr[j];
				}
			}
		n=k;
	}
}//ȥ���ظ�Ԫ�� 
 }
}
for(int j=0;j<n;j++)printf("%d ",arr[j]);printf("\n");
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

