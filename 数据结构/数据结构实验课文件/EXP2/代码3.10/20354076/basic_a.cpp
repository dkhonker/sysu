#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i-1] 
    int w;
	for(w=n;w>=i-1;w--){
		
		if(w==i+1)
		   arr[w]=x;
		else
		    arr[w]=arr[w-1];
	}
	n=n+1;
} 

void deleteByIndex(int i){ //ɾ��a[i-1] 
    int w;
    for(w=i-1;w<n;w++){
    	arr[w]=arr[w+1];
	}
	n=n-1;
} 

void find(int x){//���ҵ�һ��x 
    int w;
    int h=0;
    for(w=0;w<n&&h!=0;w++){
    	if(arr[w]==x) h=1;
	}
	if(h==1) printf("0\n");
    printf("%d\n",w);
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
    int w=0;
    while(w<n){
    	int t=w+1;
    	for(int j=w+1;j<n;j++)
    	    if(arr[j]!=arr[w])
    	       arr[t++]=arr[j];
    	n=t;w++;       
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
