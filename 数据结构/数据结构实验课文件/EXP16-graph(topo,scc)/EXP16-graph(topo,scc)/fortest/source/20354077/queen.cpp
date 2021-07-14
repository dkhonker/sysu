#include <stdio.h>
#include <stdlib.h>
int chess[11][3];
int sum=0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int judge(int i)
{
	int j;
	for(j=1;j<i;j++)
	{
		if(chess[j][1]==chess[i][1]) return 0;
		else if(chess[j][2]==chess[i][2]) return 0;
		else if(chess[j][1]+chess[j][2]==chess[i][1]+chess[i][2]) return 0;
		else if(chess[j][1]-chess[j][2]==chess[i][1]-chess[i][2]) return 0;
	}
	return 1;
}
void Trial(int i,int n)
{
	int j;
	if(i > n) sum++;
	else{
		for(j=1;j<=n;j++)
		{
			chess[i][1]=i;
			chess[i][2]=j;		
		if(judge(i)) Trial(i+1,n);
		} 
	}
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n); 
	Trial(1,n);
	printf("%d",sum%10000);
	return 0;
}
