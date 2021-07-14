#include<stdio.h>


int main()
{
	char string1[20001], string2[20001];
	scanf("%s", string1);
	scanf("%s", string2);
	int i;
	for (i = 0; string1[i] != '\0'&& string2[i] != '\0';i++)
	{
		if (string1[i] > string2[i])
			printf("1");
		if (string1[i] < string1[i])
			printf("-1");
	}
	if (string1[i] == '\0'&&string2[i] == '\0')
		printf("0");
	if (string1[i] == '\0'&&string2[i] != '\0')
		printf("-1");
	if (string1[i] != '\0'&&string2[i] == '\0')
		printf("1");
	return 0;
}
