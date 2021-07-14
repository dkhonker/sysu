#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1] 
if((i<1)||(i>n))
   return 0;
int j;
for(j=n;j>=i;j--) 
   arr[j]=arr[j-1];
a[j]=x;
} 

void deleteByIndex(int i){ //ɾ��a[i-1] 
if((i<1)||(i>n))
   return 0;
int j;
for(j=i-1;j<n-1;j++)
   a[j]=a[j+1];
} 

void find(int x){//���ҵ�һ��x 
int i,j=0;
for(i=0;i<n;i++)
   if(arr[i]==x)
   {
     	printf("%d\n",i);
     	j=1;
     	break;
	}
if(j==0)
   printf("0\n");
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
int i=0,j,k;
for(i=0;i<n;i++)
   for(j=1+1;j<n;j++)
      if(a[i]==a[j])
         {
         	for(k=j;k<n-1;k++)
			   a[k]=a[k+1];
			n--;
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
