#include <stdio.h>

#define VER_LEN (101)
#define EDGE_LEN (10001)

typedef struct {
    int u, v;
    int cost;
} edge;

edge Edge[EDGE_LEN];
int Parent[VER_LEN];
int Size[VER_LEN];
int Flag[VER_LEN];

// 排序，按照边的权重，从小到大排序
void sort(int edge_num) {
    int i, j;
    int temp_u, temp_v, temp_cost;

    for(i = 1; i < edge_num; i++) {
        for(j = 1; j <= edge_num - i; j++) {
            if(Edge[j].cost > Edge[j+1].cost) {
                temp_u = Edge[j].u;
                temp_v = Edge[j].v;
                temp_cost = Edge[j].cost;
                Edge[j].u = Edge[j+1].u;
                Edge[j].v = Edge[j+1].v;
                Edge[j].cost = Edge[j+1].cost;
                Edge[j+1].u = temp_u;
                Edge[j+1].v = temp_v;
                Edge[j+1].cost = temp_cost;
            }
        }
    }
}

void init(int ver_num) {
    int i;

    for(i = 1; i <= ver_num; i++) {
         // 将parent初始化为自身
        Parent[i] = i;
         // 将size初始化为1，用于按秩压缩（如果不需要进行按秩压缩，不需要这个数组信息）
        Size[i] = 1;
    }
}

int find(int vertex) {
    if(vertex != Parent[vertex]) {
        Parent[vertex] = find(Parent[vertex]); // 路径压缩
    }

    return Parent[vertex];
}

int union_set(int i) {
    int parent_u = find(Edge[i].u);
    int parent_v = find(Edge[i].v);

    // 节点u和v已经在同一颗树上了
    if(parent_u == parent_v) {
        return 0;
    }

    // 按秩压缩，将秩小一些的树加入到秩大一些的树
    if(Size[parent_u] > Size[parent_v]) {
        Parent[parent_v] = parent_u;
        Size[parent_u] += Size[parent_v];
    } else {
        Parent[parent_u] = parent_v;
        Size[parent_v] += Size[parent_u];
    }
    return 1;
}

void Kruskal(int ver_num, int edge_num) {
    int i;
    int counter;

    // 排序，按照边的权重，从小到大排序
    sort(edge_num);

    // 进行初始化
    init(ver_num);

    counter = 0;
    // 按照边的权重，从小到大遍历所有的边
    // 直到编译完所有边，或者生成了最小生成树为止
    for(i = 1; i <= edge_num && counter < ver_num-1; i++) {
        // 当新加入的边会形成环时，需要舍弃
        if(union_set(i) == 0) {
            continue;
        }

        // 将新加入的边的编号保存在Flag数组中，以便输入
        counter++;
        Flag[counter] = i;
    }
}

int main() {
    int i,sum;
    sum=0;
    int ver_num, edge_num;
    scanf("%d%d", &ver_num, &edge_num);
    for(i = 1; i <= edge_num; i++) {
        scanf("%d%d%d", &Edge[i].u, &Edge[i].v, &Edge[i].cost);
    }

    Kruskal(ver_num, edge_num);
    for(i = 1; i < ver_num; i++) {
        sum=sum+Edge[Flag[i]].cost;
    }
	printf("%d",sum);
    return 0;
}

