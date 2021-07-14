#include<stdio.h>

int front = 0, rear = 0;

void addchar(char cha, char* list);
void elechar(void);

int main()
{
	int m, n;
	char button[3];
	scanf("%d %d", &m,&n);
	char string[m];
	char *p = string;
	for (; n > 0; n--)
	{
		scanf("%s", button);
		switch (button[0])
		{
		case '1': addchar(button[2], p);
		case '2':elechar();
			break;
		}

	}

	for (int i = front; i != rear; i++)
		printf("%c", string[i]);
	return 0;
}

void addchar(char cha, char* list)
{
	list[rear] = cha;
	rear++;
	printf("%d %d", front, rear);
}


void elechar(void)
{
	front++;
	printf("%d %d", front, rear);
}
