#include<iostream>
using namespace std;
#define max_N 5000
#define elemtype int 
typedef struct{
    int u;
    int v;
    elemtype w;
}matrix;
matrix m[max_N],m1[max_N];
void tran_pos(){
    int x,y;
    cin >> x >> y;
    for (int i = 1; i <= m1[0].w;i++){
        if(x==m1[i].u&&y==m1[i].v)
            cout << m1[i].w << endl;
    }
}
int main(){
    cin >> m[0].u >> m[0].v>>m[0].w;
    int num[m[0].v + 1]{0},col[m[0].v+1]{0},k;
    m1->v = m->u;
    m1->u = m->v;
    m1->w = m->w;
    for (int i = 1; i <= m->w;i++){
        cin >> m[i].u >> m[i].v >> m[i].w;
        num[m[i].v]++;
    }
    col[1] = 1;
    for (int i = 2; i <= m->v;i++){
        col[i] = col[i - 1] + num[i - 1];
    }
    for (int i = 1; i <= m->w;i++){
        k = m[i].v;
        m1[col[k]].u = m[i].v;
        m1[col[k]].v = m[i].u;
        m1[col[k]].w = m[i].w;
        col[k]++;
    }
    for (int i = 0; i <= m->w;i++){
        cout << m1[i].u << " " << m1[i].v << " " << m1[i].w << endl;
    }
    tran_pos();
    return 0;
}