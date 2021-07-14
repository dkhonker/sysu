#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num[10001],n,i,j;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&num[i]);
	for(int i=1;i<n;i++)
	{
		int a=num[i],a_num=i;
		for(int j=i;j<=n;j++)
		{
			if(num[j]<a)
			{
				a=min[j];
				a_min=j£» 
				
			}
		}
		if(a_min!=i)
		{
			int b=num[a_num];
			num[a_min]=num[i]
			num[i]=b
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",num[i]);
return 0;
}
