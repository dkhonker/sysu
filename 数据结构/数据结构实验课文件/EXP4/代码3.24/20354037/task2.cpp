#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>
using namespace std;
int min(int a,int b)
{
	if(a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

struct compare
{
	char cha;
	struct compare *next;
};
compare *head_a = (compare *)malloc(sizeof(compare));
compare *head_b = (compare *)malloc(sizeof(compare));

int compare_string(compare *head_a,compare *head_b)
{
	compare *p,*q;
	p = head_a;
	q = head_b; 
	while(p->next != NULL && q->next != NULL)
	{
		p = p->next;
		q = q->next; 
		if(p->cha == q->cha) continue;
		else 
		{
			return (p->cha - q->cha);
		}
	
	}
	if(p->next == NULL && q->next == NULL) return 0;
	else if(p->next == NULL) return -1;
	else return 1;
}

int get_length(char a[])
{
	int num = 0;
	int i = 0;
	while(a[i] != '\0')
	{
		num++;
		i++;
	}
	return num;
} 

typedef struct
{
	char *cha;
	int length;
} HString;

int main()
{
	//方法1：数组
	/*
	int i;
	char a[20001],b[20001];
	gets(a);
	gets(b);
	int a_length = get_length(a);
	int b_length = get_length(b);
	for(i = 0;i < min(a_length,b_length);i++)
	{
		if(a[i] == b[i]) continue;
		else if(a[i] > b[i]) 
		{
			printf("1\n");
			break;
		}
		else
		{
			printf("-1\n");
			break;
		}
		
	} 
	if(i==min(a_length,b_length))
	{
		if(b_length == a_length)printf("0\n");
		else if(i == a_length) printf("-1\n");
		else printf("1\n");
	}
	*/
	
	
	//方法2：链表 
	/*
	char a,b;
	scanf("%c",&a);
	compare *p_a = head_a;
	while (a != '\n')
	{
		compare *q = (compare *)malloc(sizeof(compare));
		p_a->next = q;
		q->next = NULL;
		q->cha = a;
		p_a = q;
		scanf("%c",&a);
	}
	compare *p_b = head_b;
	scanf("%c",&b);
	while (b != '\n')
	{
		compare *q = (compare *)malloc(sizeof(compare));
		p_b->next = q;
		q->next = NULL;
		q->cha = b;
		p_b = q;
		scanf("%c",&b);
	}
	int num = compare_string(head_a,head_b);
	printf("%d\n",num);
	*/
	
	
	//方法3：串
	
	//获取字符串string_a 
	char *string_a = (char *)malloc(sizeof(char));
	char cha_a;
	cha_a = getchar();
	int num_a = 0,i;
	while(cha_a != '\n')
	{
		string_a[num_a] = cha_a;
		string_a = (char *)realloc(string_a,sizeof(char));
		cha_a = getchar();
		num_a++;
	}

	//获取字符串string_b
	char *string_b = (char *)malloc(sizeof(char));
	char cha_b;
	cha_b = getchar();
	int num_b = 0;
	while(cha_b != '\n')
	{
		string_b[num_b] = cha_b;
		string_b = (char *)realloc(string_b,sizeof(char));
		cha_b = getchar();
		num_b++;
	}
	
	int a_length = strlen(string_a);
	int b_length = strlen(string_b);
	for(i = 0;i < min(a_length,b_length);i++)
	{
		if(string_a[i] == string_b[i]) continue;
		else if(string_a[i] > string_b[i]) 
		{
			printf("1\n");
			break;
		}
		else
		{
			printf("-1\n");
			break;
		}
		
	} 
	if(i==min(a_length,b_length))
	{
		if(b_length == a_length)printf("0\n");
		else if(i == a_length) printf("-1\n");
		else printf("1\n");
	}

	return 0;
}
