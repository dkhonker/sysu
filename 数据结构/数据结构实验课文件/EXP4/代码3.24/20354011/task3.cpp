#include<iostream>
#include<string.h>
using namespace std;
#define max_size 20001
int main(){
    int pos{0}, len{0};
    cin >> pos >> len;
    char s1[max_size];
    cin >> s1;
    if(len>=0&&len<=strlen(s1)-pos+1){
        for (int i = pos - 1; i < pos + len-1;i++){
            cout << s1[i];
        }
        cout << endl;
    }
    else
        cout <<"ERROR" << endl;
    return 0;
}