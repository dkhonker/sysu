#include<stdio.h>

int main(){ 
	int MAX=20000;
	char a[MAX], b[MAX];
	int i=0;
	int lengtha=0;
	int lengthb=0;
	int result=0;
	
	scanf("%s",&a);
	scanf("%s",&b);
	
	for(i=0;;i++)
	{
		if(a[i]=='\0')
			break;
		lengtha++;
	}
	for(i=0;;i++)
	{
		if(b[i]=='\0')
			break;
		lengthb++;
	}
	
	for(i=0;i<lengtha||i<lengthb;i++)
	{
		if(i>lengtha)
			result=-1;	
		else if(i>lengthb)
			result=1;
		else if(a[i]>b[i])
			result=1;
		else if(a[i]<b[i])
			result=-1;
		else if(a[i]==b[i])
			continue;
		else
			result=0;
	}
	printf("%d\n",result);
}























