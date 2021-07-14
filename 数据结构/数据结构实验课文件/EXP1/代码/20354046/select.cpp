#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a[10001];
	int n,t;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	cin>>a[i];
	int k=0,j;
	for(i=0;i<n;i++)
	{j=i;
	for(k=i+1;k<n;k++)
	{if(a[k]<a[j])
	j=k;
	}
	t=a[j];a[j]=a[i];a[i]=t;	
	}		
	for(i=0;i<n;i++)
	cout<<a[i];
	return 0;
}
