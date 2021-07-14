#include<iostream>
using namespace std;

struct Node {
    char data;
    int parent, lchild, rchild;
} nodes[101];

int n, lastchild[101];//什么东西？ 

void buildTree() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> nodes[i].data >> nodes[i].parent;
	//从一开始 
	for (int i = 1; i <= n; i++) {
		lastchild[i] = nodes[i].parent;
	}
	for (int i = 2; i <= n; i++)
	{/*
	  int f = nodes[i].parent;
	  if (lastchild[f] == 0)
		  nodes[f].lchild = lastchild[f] = i;
	  else{
		  //干什么？ 直接搞二叉树。。。 改nodes[i].parent
		  //Fill this part by yourself.  Think about it first.
	  }*/

		if (lastchild[i - 1] != nodes[i].parent) {
			nodes[i].parent = nodes[nodes[i].parent].parent + 1;
			if (nodes[nodes[i].parent].rchild == 0)
				nodes[nodes[i].parent].rchild = i;
			else
				nodes[nodes[i].parent].lchild = i;
		}
		else
		{
			nodes[i].parent = i - 1;
			if (nodes[nodes[i].parent].rchild == 0)
				nodes[nodes[i].parent].rchild = i;
			else
				nodes[nodes[i].parent].lchild = i;
		}
	}
}
void Preorder(int x) {
	cout << nodes[x].data;
    if(nodes[x].lchild != 0)
        Preorder(nodes[x].lchild);
	if (nodes[x].rchild != 0)
        Preorder(nodes[x].rchild);
}
void Midorder(int x)
{ //please finish the following parts. It is easier. 
	if (nodes[x].lchild != 0)
	{   
	Midorder(nodes[x].lchild);
    }
	cout << nodes[x].data;
	if (nodes[x].rchild != 0)
	Midorder(nodes[x].rchild);
	
	
}
int main(){
  buildTree();
  //Preorder(nodes[1]); cout<<"\n";
  //Midorder(nodes[1]); 
  Preorder(1); cout<<"\n";
  Midorder(2); cout<<nodes[1].data;
  //Fill this part by yourself.
  return 0;
}
