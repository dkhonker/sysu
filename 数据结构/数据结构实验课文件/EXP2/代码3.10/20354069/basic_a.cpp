#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i] 
if(i<0||i>=n)printf("i��ֵ���ڷ�Χ��")
else{
int a=n-1;
for(a;a>i;a--)
arr[a]=arr[a-1];
arr[i-1]=x;
}
} 

void deleteByIndex(int i){ //ɾ��a[i] 
if(i<0||i>=n)printf("i��ֵ���ڷ�Χ��")
else{
int a=i;
for(a;a<n-1;a++)
arr[a]==arr[a+1];
}
}
 
void find(int x){//���ҵ�һ��x 
for(int a=0;a<n;a++){
if(arr[a]==x)printf("%d",a)break;
if(a=n-1)printf("0");
}
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
