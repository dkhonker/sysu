#include<iostream>
using namespace std;
#define max_size 20001
int main(){
    char s1[max_size], s2[max_size];
    cin >> s1 >> s2;
    int i{0};
    while(s1[i]!='\0'||s2[i]!='\0'){
        if(s1[i]>s2[i]){
            cout << 1 << endl;
            return 0;
        }
        if(s1[i]<s2[i]){
            cout << -1 << endl;
            return 0;
        }
        i++;
    }
    cout << 0 << endl;
    return 0;
}