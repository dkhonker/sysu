#include <stdio.h>

#include <malloc.h>

typedef struct
{
    char *ch;    
    int length;   
}HString;

int StrCompare(HString *T, HString *S)
{

    int i = 0;
    for (; i < T->length && i < S->length; i++)
    {
        if (T->ch[i] != S->ch[i])
        {
            if (T->ch[i] > S->ch[i])
                return 1;
            return -1;
        }
    }

    if (T->length > S->length)
        return 1;
    else if (T->length < S->length)
        return -1;
    return 0;
}

int cont_str(char *s)
{
    int i = 0;      
    while ( s[i++] != '\0')
        ;
    return i-1;
}
int StrAssign(HString *s, char *ch)
{
    int len = cont_str(ch); 
  
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
    char a[100000],b[100000];
    gets(a);
    gets(b);
    InitString(&s1);
    InitString(&s2);
    StrAssign(&s1,a);
    StrAssign(&s2,b);
    printf("%d",StrCompare(&s1,&s2));
    return 0;
}
