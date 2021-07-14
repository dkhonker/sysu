#include <stdio.h>

int main()
{
	char a[20001];
	char b[20001];
	int n;
	int comp(char a[],char b[]);
	gets(a);
	gets(b);
	n = comp(a,b);
	printf("%d",n);
} 

int comp(char a[20001],char b[20001])
{

	int lena;
	int lenb;
	for(int i = 0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			if(a[i]>b[i]) return 1;
			if(a[i]<b[i]) return -1;
			break;
		}
	}
	for(int i = 0;a[i]!='\0';i++)
	{
		lena = i;
	}
	lena++;
	for(int i = 0;b[i]!='\0';i++)
	{
		lenb = i;
	}
	lenb++;
	if(lena==lenb) return 0;
	if(lena>lenb) return 1;
	if(lena<lenb) return -1;
	
}
