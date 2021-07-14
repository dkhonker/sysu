#include<iostream>
using namespace std;

struct Node {
    char data;
    int parent, lchild, rchild;
} nodes[101];

int n, lastchild[101];

void buildTree(){
  cin >> n;
  for (int i = 1; i <= n; i++)
	  cin >> nodes[i].data >> nodes[i].parent;
  for (int i = 2; i <= n; i++){
	int f = nodes[i].parent;
	if (lastchild[f] == 0)
		nodes[f].lchild = lastchild[f] = i;
	else
	{
		if(nodes[f].lchild!=0&&nodes[f].rchild!=0)
			lastchild[f]=i;
		if(nodes[f].lchild==0)
			lastchild[f]=i+1;
		if(nodes[f].rchild==0)
			lastchild[f]=i++;
		//Fill this part by yourself.  Think about it first.
	}
  }
}

void Preorder(Node &root)
{
//please finish the following parts.  It is easy. 
nodes[f].lchild=lastchild[f]=i;
nodes[f].rchild=lastchild[f]=i;
nodes[f].parent=lastchild[f]=i;
}
void Midorder(Node &root)
{ //please finish the following parts. It is easier. 
nodes[f].rchild=lastchild[f]=i;
nodes[f].parent=lastchild[f]=i;
nodes[f].lchild=lastchild[f]=i;
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  Midorder(nodes[1]); cout<<"\n";
  //Fill this part by yourself.
  return 0;
}
