#include <iostream>
#include <cmath>
using namespace std;
int arr[1024][1024];
void gray(int a,int b)
{
	if(b==1)
	{
		arr[0][0]=0;
		arr[1][0]=1;
		return;
	}
	for(int i=0;i<a/2;i++){
		arr[i][b-1]=0;
		arr[a-i-1][b-1]=1;
	}
	gray(a/2,b-1);
	for(int i=a/2;i<a;i++)
	{
		for(int j=0;j<b-1;j++) arr[i][j]=arr[a-i-1][j];
	}
}
int main()
{
	int b;
	cin>>b;
	int a=pow(2,b-1);
	gray(a,b);
	for(int i=0;i<a;i++){
	  for(int j=0;j<b;j++){
	     cout<<arr[i][j];
       }
	   cout<<endl;}
	return 0;
}
