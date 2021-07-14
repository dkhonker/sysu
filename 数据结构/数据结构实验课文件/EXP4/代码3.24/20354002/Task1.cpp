# include<stdio.h>

char a[20001],b[2000],c[40001];

int count1=0;
int main()
{
	gets(a);
	gets(b);
	for(int i=0;a[i]!='\0';i++)
	{
		count1=count1+1;
		c[i]=a[i];
	}
	
	for(int x=0;b[x]!='\0';x++)
	c[x+count1]=b[x];
	

	
	
	printf("%s",c);
	return 0;	
    
}
