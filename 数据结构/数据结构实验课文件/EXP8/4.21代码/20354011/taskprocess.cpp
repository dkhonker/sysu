#include<iostream>
using namespace std;
typedef struct {
    int r;
    int p;
} task;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b = temp;
}
int main(){
    int n,min_,temp{0},temp1,sum{0},count{0};
    cin >> n;
    task a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i].r;
    }
    for(int i=0;i<n;i++){
        cin >> a[i].p;
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n - i-1;j++){
            if(a[j].r>a[j+1].r){
                swap(a[j].r, a[j + 1].r);
                swap(a[j].p, a[j + 1].p);
            }
        }
    }
    for (int i = a[0].r;; i++){
        min_ = 201;
        temp1 = 0;
        while(temp<n&&a[temp].r<=i){
            temp++;
        }
        for (int j = 0; j < temp;j++){
            if(min_>=a[j].p&&a[j].p!=0){
                min_ = a[j].p;
                temp1 = j;
            }
        }
        a[temp1].p--;
        if(a[temp1].p==0){
            sum += i;
            count++;
        }
        if(count==n)
            break;
    }
    cout << sum+n << endl;
    return 0;
}
