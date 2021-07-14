#include<stdio.h>
int N=50000;
const int low[N],dfn[N];
bool instack[N];
stack<int>st;
struct LIST
{
    int v;
    LIST *next;
};
LIST *head[N]={NULL};
void tarjan(int v)
{
    dfn[v]=low[v]=time++;
    st.push(v);
    instack[v]=true;
    for(LIST *p=head[v];p!=NULL;p=p->next)
        {    
        if(!dfn[p->v])
                {
            tarjan(p->v);
            low[v]=min(low[v],low[p->v]);
        }
        else if(instack[p->v])
                    low[v]=min(low[v],dfn[p->v]);
    }
    if(dfn[v]==low[v])
        {
        cout<<"{ ";
        do
                {
            v=st.top();
            st.pop();
            instack[v]=false;
            cout<<v<<' ';
        }while(dfn[v]!=low[v]);
        cout<<"}"<<endl;
    }
}
