#include<stdio.h>
const int max_N=11;
int n,T{0};
bool col[max_N],left[2*max_N],right[2*max_N];
void Trial(int r){
	for(int i=1;i<=n;i++){
		if(!col[i]&&!left[i+r]&&!right[i-r+n]){
			col[i]=left[i+r]=right[i-r+n]=true;
			if(r<n)Trial(r+1);
			else T++;
			col[i]=left[i+r]=right[i-r+n]=false;
		}
	}
} 
int main(){
	scanf("%d",&n);
	Trial(1);
	printf("%d",T%10000);
	return 0;
}
