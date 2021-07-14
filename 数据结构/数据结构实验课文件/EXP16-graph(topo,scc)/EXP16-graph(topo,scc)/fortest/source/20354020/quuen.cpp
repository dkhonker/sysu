#include<iostream>

using namespace std;

const int maxn=10;
int n,t,count=0;
bool col[maxn+1],dplus[maxn*2+1],dmius[2*maxn+1];

void dfs(int i){
	for(int j=1;j<=n;j++){
		if(!col[j]&&!dplus[i+j]&&!dmius[j-i]){
			col[j]=dplus[j+i]=dmius[j-i]=true;
			if(i<n) dfs(i+1);
			else count++;
			col[j]=dplus[j+i]=dmius[j-i]=false;
		}
	}
}

int main(){
	cin>>n;
	dfs(1);
	printf("%d",count%10000);
	return 0;
}
