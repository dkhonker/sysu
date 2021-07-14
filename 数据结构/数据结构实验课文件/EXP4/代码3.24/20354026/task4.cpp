#include<stdio.h>
main()
{
	int m,n;
	int i=0;
	int k=0;
	int j=0;
	int q=0;
	int temp;
	char str[2000];
	char str2[2000];
	scanf("%d%d",&m,&n);
	while(i<n)
	{
		scanf("%d",&temp);
		getchar();
		if(temp==2) 
		{
			j=j+1;
		}
		else
		{
			str[k]=getchar();
			k++;		
		}
		i++;
		printf("%d %d",j,k);
		printf("\n");
	}
	while(j<k)
	{
		str2[q]=str[j];
		q++;
		j++;
	}
	puts(str2);
	

}
