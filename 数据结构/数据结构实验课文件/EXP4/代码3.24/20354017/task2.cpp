#include<string>
#include<iostream>
using namespace std;

int bj(string s1,string s2)
{
	int min=0;
	if(s1.length()<=s2.length()) min=s1.length();
	for(int i=0;i<s1.length();i++ )
	{
		if(s1[i]<s2[i]) return -1;
		if(s1[i]>s2[i]) return 1;
	}
	return 0;
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<bj(s1,s2)<<endl; 
	return 0;
}
