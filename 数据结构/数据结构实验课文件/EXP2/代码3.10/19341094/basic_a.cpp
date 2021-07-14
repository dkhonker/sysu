#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1] 
	for(int k=n-1;k>=i-1;k--)
		arr[k+1]=arr[k];
	arr[i-1]=x;
	n++;
} 

void deleteByIndex(int i){ //ɾ��a[i-1] 
	for(int k=i-1;k<n;k++)
		arr[k]=arr[k+1];
	n--;
} 

void find(int x){//���ҵ�һ��x 
	int getnumber=0;
	for(int k=0;k<=n-1;k++)
		if(arr[k]==x){
			printf("%d",k+1);
			getnumber=1;
			break;
		}
	if(getnumber==0)
	printf("0");
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ��
	for(int k=0;k<n;k++){
		for(int i=k+1;i<n;i++)
			if(arr[i]==arr[k]){
				deleteByIndex(i);
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
