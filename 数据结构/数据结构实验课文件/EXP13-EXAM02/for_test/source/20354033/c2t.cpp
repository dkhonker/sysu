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
	else{
		//Fill this part by yourself.  Think about it first.
		int j=lastchild[f];
		nodes[j].rchild=lastchild[f]=i;
	}
  }
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
if(root.data==0) return;
else
{

printf("%c",root.data);
/*cout<<root.lchild;
cout<<root.rchild;*/
Preorder(nodes[root.lchild]);
Preorder(nodes[(root.rchild)]);}



}
void Midorder(Node &root){ 

if(root.data==0) return;
else{

printf("%c",root.lchild);//please finish the following parts. It is easier.
//cout<<root.data;
//cout<<root.rchild;
Midorder(nodes[root.data]);
Midorder(nodes[root.rchild]);}
}
int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  //Fill this part by yourself.
  Midorder(nodes[1]);
  return 0;
}
