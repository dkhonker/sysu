#include<stdio.h> 
main()
{
	char str1[20000];
	char str2[20000];
	int a,b,i,j;
	i=0;
	j=0;
	scanf("%d%d",&a,&b);
	getchar();
	gets(str1);
	while(i<a-1) i++;
	while(i<a+b-1)
	{
		str2[j]=str1[i];
		i++;
		j++;
	}
	str2[j]='\0';
	puts(str2);
}
