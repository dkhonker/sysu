#include<stdio.h>


int main()
{
	char string1[20001], string2[20001],string0[40001];
	scanf("%s", string1);
	scanf("%s", string2);
	int i = 0;
	for (; string1[i] != '\0'; i++)
		string0[i] = string1[i];
	for (int j = 0; string2[j] != '\0'; j++, i++)
		string0[i] = string2[j];
	string0[i] = '\0';
	printf("%s", string0);

	return 0;
}
