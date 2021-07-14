#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>
using namespace std;

typedef struct
{
	char *ch;
	int length;
}HString;

void StrAssign(HString *t, char *chars)    //创建串 
{
    int i;
    char *c;
    for (i = 0, c = chars; c[i] != '\0'; i++)
        if (!i)
        {
            t->ch = NULL;
            t->length = 0;
        }
        else
        {
            t->ch = (char *)malloc((i + 1) * sizeof(char));
            for (int j = 0; j <= i; j++)
            {
                t->ch[j] = chars[j];
            }
            t->length = i + 1;
        }
}

Substring(HString sub,HString string,int position,int len)   //从指定字符串中截取 
{
	int num = 0;
	for(int i = position - 1;i < position + len - 1;i++)
	{
		sub.ch[num] = string.ch[i];
		num++;
	}
}

int main()
{
	int position ,len;
	scanf("%d%d\n",&position,&len);
	
	char a[20001];
	gets(a);
	HString str;
	HString *t ;  t = &str;
	StrAssign(t,a);
	HString sub;
	sub.ch = (char *)malloc(len * sizeof(char));
	Substring(sub,str,position,len);
	for(int i = 0;i < len;i++)
	{
		printf("%c",sub.ch[i]);
	}
	return 0;
}
