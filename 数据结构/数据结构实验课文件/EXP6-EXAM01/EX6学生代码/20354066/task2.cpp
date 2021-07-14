#include<stdio.h>
#include<math.h>
int a[1100000]={0,1,3,2};
int main()
{
	void gray(int k);
	int k;
	scanf("%d",&k);
	gray(k);
	for (int m=0;m<int(pow(2,k));m++)
	{
	int i=a[m];
	
	for(int j=k-1;j>=0;j--)
	{
		if(i>=int(pow(2,j))) 
		{
		printf("1");
		i=int(i-pow(2,j));
	    }
		else printf("0"); 
	}
	putchar(10);
	
    }
	return 0;
 } 
 void gray(int k)
 {
 	for(int i=2;i<k;i++)
 	{
 		for(int j=1;j<=int(pow(2,i));j++)
		 a[int(pow(2,i)+j-1)]=a[int(pow(2,i)-j)]+int(pow(2,i));
	}
 }
