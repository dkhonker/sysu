#include <stdio.h>
#define N 20001
int main()
{
	char a[N],b[N];
	gets(a); gets(b);
	int i=0,j=0,L1=0,L2=0;
	while(a[i]!='\0')  {L1++; i++;}
	while(b[j]!='\0')  {L2++; j++;}
	if(L1>L2) printf("1");
	else if(L1<L2) printf("-1");
	else 
	{
		i=0;j=0;
		while(a[i]!='\0')
		{
			if(a[i++]<b[j++]) {printf("-1"); break;}
			else if(a[i++]>b[j++]) {printf("1"); break;} 
			else if(a[i+1]!='\0') continue;
			else printf("0");
		}
		
	}
	return 0;
} 
