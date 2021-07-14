#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int start=0,end=0,input;
	char m[21],o;
	int x=0,y=0;
	scanf("%d",&x);
	scanf("%d",&y);	
	for(int i=0;i<y;i++)
	{
		scanf("%d",&input);
		getchar();
		if(input==1)
		{start++;}
		if(input==2)
		{end++;}
		if(start==x)
		{start=start-x;} 
		if(end==x)
		{end=end-x;} 
		if(input==1)
		{scanf("%c",&o),m[start]=o,getchar();
		printf("%d %d\n",end,start);}
		if(input==2)
		{m[end]='\0';
		printf("%d %d\n",end,start);}
	}
	for(int i=0;i<x;i++)
	{
	if(m[end+i]=='\0'){continue;}
	if(end+i==x){end=end-x;}
	if(end+i<x){printf("%c",m[end+i]);continue;}
	}
}
