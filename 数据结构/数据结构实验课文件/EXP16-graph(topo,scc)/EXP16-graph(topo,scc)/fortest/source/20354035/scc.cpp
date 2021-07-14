#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

const int maxn=50000;
const int maxm=500000;


int count=0;
int index[maxn];
int low[maxn];
int stack[maxn],top=0;
int on_stack[maxn];

int tComponent=0; // tComponent是当前找到的强连通块个数。 
int size[maxn];   // size[i]保存第i个强连通块 的顶点个数。 

int min(int a,int b){                 //求较小的 
	return a<b ? a:b; 
}


void swap(int &a, int &b) {           //交换 
  int t = a; a = b; b = t;
}


int partion(int low,int high)
{
	int p = size[low];
	
	while(low < high)
	{
		if(size[high] <= p && low < high)
		{
			high --;
		}
		size[low] = size[high];
		
		if(size[low] > p && low < high)
		{
			low ++;
		}
		
		size[high] = size[low];
	}
	size[low] = p;
	return low;
}


void quick_sort(int low ,int high)
{
	if(low < high)
	{
		int p = partion(low,high);
		quick_sort(low ,p - 1);
		quick_sort(p + 1 ,high);
	}
}
int n,m;

int a[maxm + 1], b[maxm + 1];
int p[maxn + 2];
int linkto[2 * maxm + 1];

/*p 和linkto 是一维数组来 存储整个邻接表 (使用方便，无需用动态数组） 
 linkto 这个一维数组的   p[v]+1...p[v+1] 这些位置存储v的直接后继。 
 可通过阅读下面这段函数的代码，来理解p和linkto  */ 
 
void input_data() {                              //输入数据 
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
		scanf("%d %d", &a[i], &b[i]);
	for (int i = 1; i <= m; i++) p[a[i]]++;	
	for (int i = 1; i <= n; i++) p[i] = p[i] + p[i - 1];//相当于指针，方便遍历
	p[n + 1] = p[n];  //trick 多一个指针指向最后一个元素
	for (int i = 1; i <= m; i++) {//构建邻接链表
		linkto[p[a[i]]] = b[i];
		p[a[i]]--;
	}
}


  

void tarjan_scc(int v){  // SCC主过程! 
	index[v]=low[v]=count++;
	stack[++top]=v;on_stack[v]=1;
	// push v into the stack and mark v to be on stack.
	for(int i=p[v]+1;i<=p[v+1];i++){
		int w=linkto[i];
		if(!index[w]){
			tarjan_scc(w);
			low[v]=min(low[v],low[w]);
		}
		else if(on_stack[w]){
			low[v]=min(low[v],index[w]);
		}
		//add some code here by yourself
		//Hint 1. dfs. Hint 2. modify low[v]
	}
	if(index[v]==low[v]){ // find out a new component. 
		int j;
		do{
			//Add some code in the following.
			//Hint: pop an element from the stack to j, and mark j to be not on stack.
			j=stack[top--];on_stack[j]=0;
			size[tComponent]++;
		} while (j!=v);
		tComponent++;
	}
}




int main(){
	input_data();
	for(int i=1;i<=n;i++)
		if(!index[i]) tarjan_scc(i);
	
	quick_sort(0,tComponent-1);
    for(int i=0;i<tComponent;i++) printf("%d ",size[i]);
	return 0;
} 












