#include<stdio.h>

int main(){ 
	int MAX=20000;
	char a[MAX], b[MAX];
	int i=0;
	
	int pos=0, len=0;
	
	scanf("%d",&pos);
	scanf("%d",&len);
	
	scanf("%s",&a);
	
	for(i=0;i<len;i++)
	{
		b[i]=a[pos-1];
		pos++;
	}
	
	printf("%s",b); 
}

