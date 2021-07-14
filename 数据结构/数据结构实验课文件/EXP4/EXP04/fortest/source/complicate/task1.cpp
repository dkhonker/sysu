#include <stdio.h>

#include <malloc.h>
//#include <string.h>
typedef struct
{
    char *ch;   
    int length;   
}HString;
int StringConcat(HString *T, HString *S1, HString *S2)
{
    T->ch = (char *)realloc(T->ch, sizeof(char)*(S1->length + S2->length));
    if (T->ch == NULL)
        return 1;

    int i = 0;
    for (; i < S1->length; i++)
    {
        T->ch[i] = S1->ch[i];
    }

    for (i = 0; i < S2->length; i++)
    {
        T->ch[S1->length + i] = S2->ch[i];
    }
    T->ch[S1->length + S2->length] == '\0';
    T->length = S1->length + S2->length;

    return 0;
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

void printString(HString s)
{
    for (int i = 0; i < s.length; i++)
        printf("%c", s.ch[i]);
    printf("\n");
}


void InitString(HString *s)
{
	s->ch = NULL;
	s->length = 0;
}
int main() {
    HString str,s1,s2;
    char a[20001],b[20001];
    gets(a);
    gets(b);
    InitString(&s1);
	InitString(&s2);
	InitString(&str);
    StrAssign(&s1,a);
    StrAssign(&s2,b);
    StringConcat(&str,&s1,&s2);
    printString(str);
    return 0;
}
