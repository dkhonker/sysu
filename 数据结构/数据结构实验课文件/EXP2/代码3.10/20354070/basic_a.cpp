#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n=0;;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1] 
int *p,*q;
if((i<1)||(i>n+1)) printf("iֵ���Ϸ�\n");//iֵ���Ϸ� 
else
    {
    	q=&(arr[i-1]);
    	for(p=&(arr[n]);p>=q;--p)
    	    *(p+1)=*p;
    	*q=x;
    	++n;
    	printf("%s",arr);
	} 
} 

void deleteByIndex(int i){ //ɾ��a[i] 
} 

void find(int x){//���ҵ�һ��x 
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
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
