#include <stdio.h>

const int maxn = 10000;

int m;  //������ 
int n=0;  //���Ա���Ԫ�ظ��� 
int arr[maxn];

void insert(int i, int x){//����x��a[i] 
    n++;
    for(int j=n;j>(i-1);j--) arr[j]=arr[j-1]; 
    arr[i-1]=x;
} 

void deleteByIndex(int i){ //ɾ��a[i] 
    n--;
    for(int j=i-1;j<n;j++)  arr[j]=arr[j+1];
} 

void find(int x){//���ҵ�һ��x 
   int flag=0;
   for(int i=0;i<n;i++)
   	    if(arr[i]==x)
   	    {
   	    	flag=1;
   	        printf("%d",i+1);
   	        break;
		}
    if(flag==0) printf("0");
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ��

    int i=0;
    while(i<n)
    {
    	int p=i+1;
    	for(int j=i+1;j<n;j++) 
    	{
    		if(arr[i]!=arr[j])
    		arr[p++]=arr[j];
		}
		n=p;
		i++;
	}

   /* int b[10002];
    int mark=1;
    int temp;
    int j=0;
    int num;
    while(mark<n)
    {
    	num=0;
        temp=arr[j];	
    	for(int i=0;i<n;i++) 
    	{
    		if(arr[i]==temp && i!=j) 
			{
				arr[i]=-1234554321;
				num++;
			} 
		}
		if(num!=0) arr[j]=-1234554321;
		mark=mark+num+1;
		j++;
	}
	int newm=0;
	for(int i=0;i<n;i++) if(arr[i]!=-1234554321) b[newm++]=arr[i]; */ 
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
