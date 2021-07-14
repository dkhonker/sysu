#include<stdio.h>

int main(){
	int MAX=20000;
	char a[MAX], b[MAX];
	int i=0;
	int lengtha=0;
	int lengthb=0;
	
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
	
	//printf("%d %d",lengtha, lengthb);
	
	int j = lengtha;
	for(i=0;i<lengthb;i++)
	{
		a[j] = b[i];
		j++;
	}
	
	printf("%s",a);
	
	return 0;	
} 













