

#include <cstdio>
typedef char VertexType;
typedef int EdegType;
#define MAXVEX 100

typedef struct{
    VertexType vexs[MAXVEX];
    EdegType arc[MAXVEX][MAXVEX];
    int numVertexes, numEdges;
}MGraph;

void CreatMGraph(MGraph *G){
    int i,j,k,w;
    printf("输入顶点数和边数：");
    scanf("%d, %d", &G->numVertexes, &G->numVertexes);
    for(i = 0; i < G->numVertexes; i++){
        scanf(&G->vexs[i]);
    }
    for(i = 0; i < G->numVertexes; i++){
        for(j = 0; j < G->numVertexes; j++){
            G->arc[i][j] = 0;
        }
    }
    for(k = 0; k < G->numEdges; k++){
        printf("输入边上的下标i，下标j以及权重w");
        scanf("%d,%d,%d",&i, &j, &w);
        G->arc[i][j] = w;
        G->arc[j][i] = G->arc[i][j];
    }
}