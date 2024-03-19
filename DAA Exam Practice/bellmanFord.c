#include<stdio.h>
#include<stdlib.h>

struct Edge{
    int u;
    int v;
    int w;
};

struct graph{
    int V;
    int E;
    struct Edge *edge; 
};

void bellmanford(struct graph *g){
    int tv = g->V;
    int te = g->E;
    int d[tv], source, i , j;
    printf("Enter the source node: ");
    scanf("%d",&source);
    for(i = 0; i<tv; i++){
        d[i] = 99999;
    }
    d[source] = 0;
    for(i = 0; i<tv-1; i++){
        for(j = 0; j<te; j++){
            int u = g->edge[j].u;
            int v = g->edge[j].v;
            int w = g->edge[j].w;
            int temp = d[u] + w;
            if(temp < d[v]) d[v] = temp;
        }
    }

    for(i = 0; i<tv; i++){
        printf("%d ",d[i]);
    }
}

int main(){
    struct graph *g = (struct graph *) malloc(sizeof(struct graph));
    g->V = 5;
    g->E  = 7;
    g->edge = (struct Edge *) malloc(g->E * sizeof(struct Edge));

    g->edge[0].u = 0;
    g->edge[0].v = 1;
    g->edge[0].w = 6;

    g->edge[1].u = 0;
    g->edge[1].v = 2;
    g->edge[1].w = 5;

    g->edge[2].u = 2;
    g->edge[2].v = 1;
    g->edge[2].w = -2;

    g->edge[3].u = 1;
    g->edge[3].v = 3;
    g->edge[3].w = -1;

    g->edge[4].u = 2;
    g->edge[4].v = 3;
    g->edge[4].w = 4;

    g->edge[5].u = 3;
    g->edge[5].v = 4;
    g->edge[5].w = 3;

    g->edge[6].u = 2;
    g->edge[6].v = 4;
    g->edge[6].w = 3;

    bellmanford(g);
    return 0;
}