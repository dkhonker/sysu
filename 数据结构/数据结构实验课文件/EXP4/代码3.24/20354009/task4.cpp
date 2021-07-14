#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int m,n,a,front=0,rear=0;
	char b;
	int i;
	scanf("%d %d\n",&m,&n);
	char c[20001];
	
for(i=0;i<n;i++)
{
scanf("%d %c\n",&a,&b);

if (a==1){
c[i]=b;
rear++;
printf("%d %d",front,rear);
}

if (a==2){
	int l;
	l=strlen(c);
	for(i=0;i<l;i++)
c[i]=c[i+1];
front++;
printf("%d %d",front,rear);
}

}
puts(c);

return 0;
}
