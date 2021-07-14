#include<iostream>
#include<string>
using namespace std;


int main()
{
	int s,e;
	cin>>s>>e;
	string str;
	cin>>str;
	for(int i=s-1;i<=e;i++) cout<<str[i];
	cout<<endl;
	return 0;
}
