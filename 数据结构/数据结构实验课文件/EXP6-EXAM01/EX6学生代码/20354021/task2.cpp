#include <stdio.h>
#include <math.h>
int main()
{
	int k;
	scanf("%d",&k);
	char nums[20];
	int line;
	int i=0,j;
	line=pow(2,k)-1;
	int flag=1;
	for(i=0;i<k;i++)
	{
		nums[i]='0';
	}
	i=0;
	nums[k]='\0';
	puts(nums);
	while(i<line)
	{
		if(flag==1)
		{
			if(nums[k-1]=='1')
			{
				nums[k-1]='0';
			}
			else
			{
				nums[k-1]='1';
			}
			puts(nums);
			flag=2;
		}
		else
		{
			for(j=k-1;j>0;j--)
			{
				if(nums[j]=='1')
				{
					if(nums[j-1]=='1')
					{
						nums[j-1]='0';
						break;
					}
					else
					{
						nums[j-1]='1';
						break;
					}
				}
			}
			puts(nums);
			flag=1;
		}
		i++;
	}
}
