#include<stdio.h>


int main()
{
	int p,l;
	char string1[20001], string2[20001];
	scanf("%d %d", &p,&l);
	scanf("%s", string1);
	for (int j = 0; j < l; j++, p++)
		string2[j] = string1[p-1];
	printf("%s", string2);
	
	return 0;
}
