#include<stdio.h>
#include<string.h>
int main()
{
	char a[20000];
	char b[20000];
	int boo;
	int compare(char *a,char *b);
	scanf("%s",&a);
	scanf("%s",&b);
	boo=compare(a,b);
	printf("%d",boo);
	

}
int compare(char *a,char *b)
{
		int i=0;
while((i<strlen(a)-1)&&(i<strlen(b)-1))
	{
		if(a[i]>b[i]) return 1;
		else if(a[i]<b[i]) return -1;
		else i++;
	}
	if(strlen(a)>strlen(b)) return 1;
	else if(strlen(a)<strlen(b)) return -1;
	else return 0;
}
