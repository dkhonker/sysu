#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], d[MAXN + 1];

int max(int a, int b){if(a>b) return a;return b;} 

int longestNum(){
	int min=200+1,len=1;
	d[1]=a[1];
	for(int i=2;i<=n;i++){
		if(a[i]>d[len])
			d[++len]=a[i];
		else{
			int l=1,r=len,pos=0;
			while(l<=r){
				int mid=(l+r)/2; 
				if(d[mid]<a[i]){
					pos=mid;
					l=mid+1;
				}
				else{
					r=mid-1;
				} 
			}
			d[pos+1]=a[i];
		} 
	}
	return len; 
} 

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
