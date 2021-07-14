#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct link_str     //创建链表 
{
	char cha;
	struct link_str *next;
};

link_str *head= (link_str *)malloc(sizeof(link_str));

void string_print(link_str *head)   //输出指定头指针的链表 
{
	link_str *p;
	p = head->next;
	while(p != NULL)
	{
		printf("%c",p->cha);
		p = p -> next;
	}
}

int get_length(char a[])   //获取字符串的长度，相当于cstring库下的strlen函数 
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

typedef  struct
{  
	char *cha;
	int length;
} HString;

int main()
{
	//方法1：数组
	/*
	char a[40001],b[40001];
	gets(a);
	gets(b);
	int a_length = strlen(a);
	int b_length = strlen(b);
	for(int i = a_length ;i <= a_length + a_length - 1;i++)
	{
		a[i] = b[i-a_length];
	 } 
	for(int i = 0;i < a_length + b_length;i++)
	{
		cout<<a[i];
		printf("%c",a[i]);
	}
	*/
	
	
	//方法2：链表 
	/* 
	char a,b;
	link_str *p = head,*q;
	scanf("%c",&a);
	while(a != '\n')
	{
		q = (link_str *)malloc(sizeof(link_str));
		p->next = q;
		q->cha = a;
		q->next = NULL;
		p = q;
		scanf("%c",&a);
	}
	scanf("%c",&a);
	while(a != '\n')
	{
		q = (link_str *)malloc(sizeof(link_str));
		p->next = q;
		q->cha = a;
		q->next = NULL;
		p = q;
		scanf("%c",&a);
	}
	string_print(head); 
	*/ 
	
	
	//方法3：串
	 
	char a[20001],b[20001];
	gets(a);
	gets(b);
	int a_length = get_length(a),b_length = get_length(b);
	HString str;
	str.cha = (char *)malloc((a_length + b_length)*sizeof(char));
	str.length = a_length + b_length;
	for(int i =0;i < str.length;i++)
	{
		if(i < a_length)
		{
			str.cha[i] = a[i];
		}
		else
		{
			str.cha[i] = b[i-a_length];
		}
	}
	for(int i = 0;i < str.length;i++)
	{
		printf("%c",str.cha[i]);
	}
	
	
	
	
	
	return 0;
} 
