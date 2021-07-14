#include<iostream>
using namespace std;
typedef struct{
    int front;
    int rear;
    char data[20];
    int length;
} quene;

int main(){
    quene Q;
    int m;
    int j=0;
    Q.front = 0;
    Q.rear = 0;
    cin >> Q.length>>m;
    if(m>=2&&m<=20){
        for (int i = 0; i < m;i++){
            cin >> j;
            if(j==1){
                cin >> Q.data[Q.rear];
                Q.rear++;
                if(Q.rear==Q.length){
                    Q.rear = 0;
                }
            }
            else if(j==2){
                Q.front++;
                if(Q.front==Q.length){
                    Q.front = 0;
                }
            }
            cout << Q.front << ' ' << Q.rear << endl;
        }
        for (int i = Q.front;;i++){
            if(i==Q.length){
                i = 0;
            }
            if(i==Q.rear){
                cout << endl;
                break;
            }
            cout << Q.data[i];
        }
    }
    return 0;
}
