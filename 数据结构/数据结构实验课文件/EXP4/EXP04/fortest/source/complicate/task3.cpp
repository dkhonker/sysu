#include <stdio.h>
#include <malloc.h>


typedef struct{
	char *ch;
	int length;
}HString; 



void InitString(HString *s)
{
	s->ch = NULL;
	s->length = 0;
}
 int cont_str(char *s)
{
    int i = 0;      
    while ( s[i++] != '\0')
        ;
    return i;
}

int StrAssign(HString *s, char *ch)
{
	int len = cont_str(ch)-1;  

	if (s->ch)
		free(s->ch);

	if (!len)
	{
		s->ch = NULL;
		s->length = 0;
	}

	else
	{
		s->ch = (char*)malloc(sizeof(char)*len);
		if (s->ch == NULL)
			return 0;
		else
		{
			for (int i = 0; i < len; ++i)
			{
				s->ch[i] = ch[i];
			
			}		
			s->length = len;
			return 1;
		}
	}
}

int subString(HString *substr, HString str, int pos, int len)
{
	if (pos < 0 || pos >= str.length || len<0 || len>str.length - pos)
		return 0;
	if (substr->ch)
	{
		free(substr->ch);
		substr->ch = NULL;
	}
	if (len == 0)
	{
		substr->ch = NULL;
		substr->length = 0;
		return 1;
	}
	else
	{
		substr->ch = (char*)malloc(sizeof(char)*len + 1);
		int i = pos;
		int j = 0;
		while (i < pos + len)
		{
			substr->ch[j] = str.ch[i];
			++i;
			++j;
		}
		substr->ch[j] = '\0';   
		substr->length = len;
		return 1;
	}
}


void printString(HString s)
{
		for (int i = 0; i < s.length; i++)
			printf("%c", s.ch[i]);
	printf("\n");
}

int main(){
	char a[20001];
	HString str,sub;
	int pos, len;
    scanf("%d%d", &pos, &len);
    getchar();

	gets(a);
	InitString(&str);
	InitString(&sub);
	StrAssign(&str,a);
	subString(&sub, str, pos-1, len);
	printString(sub);

	return 0;
}
