#include <iostream>

using namespace std;

int main()
{
	int data[10001];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>data[i];
	for(int i=n;i>=2;i--)
		for(int j=1;j<=i;j++)
			if(data[j]>data[j+1])
			{
				int temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
	for(int i=1;i<n;i++)
		cout<<data[i];
	
	
	return 0;
 } 
