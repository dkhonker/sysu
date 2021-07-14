#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

char put[10001];
char  d[10001];

int main()
{
	int start=0,end=0;
	int len,time;
	cin>>len>>time;
	gets(d);
	for(int i=0;i<time;i++)
	{
		gets(d);
		if(d[0]=='1')  put[end++]=d[2];
		else 
		start++;
		if(d[0]=='1'&&end==len) 
		{
			end=0;
		}
		cout<<start<<" "<<end<<endl;
	}
	for(int i=start;i<len;i++) 
	 cout<<put[i];
	return 0;
}
