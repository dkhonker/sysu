#include<iostream>
#define max_N 12001
using namespace std;
int main(){
    int a[max_N]{0},F[max_N]{0};
    int n,max;
    cin>>n;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    F[1] = 1;
    for (int j = 2; j <= n;j++){
        max = 0;
        for (int k = 1; k < j;k++){
            if(a[j]>a[k]){
                if(max<=F[k]){
                    max = F[k];
                }
            }
        }
        F[j] = max + 1;
    }
    max = 1;
    for (int i = 2; i <= n;i++){
        if(max<F[i]){
            max = F[i];
        }
    }
    cout <<  max << endl;
    return 0;
}