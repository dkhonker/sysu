#include<stdio.h>
int main()
{
	char a[20000],b[20000],c[40000];
	int i,j,k,d;
	scanf("%s",&a);
	scanf("%s",&b);
	for ( i=0;a[i]!='\0';i++){;}
	for ( k=0;b[k]!='\0';k++){;}
	for (j=0;j<i;j++)  {c[j]=a[j];}
	for (j=i,d=0;j<(i+k);j++,d++)  {c[j]=b[d];}
	for(i=0;i<(j+1);i++)
	printf("%c",c[i]);
}
