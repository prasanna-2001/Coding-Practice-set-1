#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define initial 1
#define visited 2
#define finished 3
#define MAX 10
int adj[MAX][MAX],n;
int state[MAX];
void DF_Traversal();
void DFS(int v);


int main(){
    int i=0, j;
    int a[50];
    int k;
    FILE *fp;
    fp = fopen("matrix.txt","r");
    if(fp == NULL)
    {
        printf("\n\t\tFile Opening Error \n ");
        exit(0);
    }
    else
    {
        while(fscanf(fp,"%d\t",&a[i])!=EOF)
        {
            printf("%d\t",a[i]);
            i++;
        }
    }
    n = sqrt(i+1);
    printf("\n\t\tNo. of Vertices in Graph are  :  %d \n\n",n);
    k = 0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            adj[i][j] = a[k];
            k++;
        }
    }
    printf("\n\t\t**Adjacency Matrix**\n\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",adj[i][j]);
        }
        printf("\n");
    }
    DF_Traversal();
    return 0;
}

void DF_Traversal()
{
        int v;
        for(v=0; v<n; v++)
                state[v] = initial;

        DFS(0);/*start DFS from vertex 0*/

        for(v=0; v<n; v++)
        {
                if(state[v]==initial)
                        DFS(v);
        }
        printf("\nGraph is Acyclic\n");
}/*End of DF_Traversal( )*/


void DFS(int v)
{
        int i;
        state[v] = visited;

        for(i=0; i<n; i++)
        {
                if(adj[v][i]==1)
                {
                        if(state[i]==initial)
                                DFS(i);
                        else if(state[i]==visited)
                        {
                                // printf("\nBack edge  (%d,%d) found\n", v, i);
                                printf("\nGraph is cyclic\n");
                                exit(1);
                        }
                }
        }
        state[v] = finished;
}/*End of DFS()*/



















































// #include <stdlib.h>
//  #include <stdio.h>
// typedef struct {
//     unsigned int first;
//     unsigned int second;
// } edge;
 
// static unsigned int cyclic_recursive(const edge *edges, unsigned int n, unsigned int *visited,
//         unsigned int order, unsigned int vertex, unsigned int predecessor)
// {
//     unsigned int i;
//     unsigned int cycle_found = 0;
//     visited[vertex] = 1;
//     for (i = 0; i < n && !cycle_found; i++) {
//         if (edges[i].first == vertex || edges[i].second == vertex) {
//             /* Adjacent */
//             const unsigned int neighbour = edges[i].first == vertex ?
//                     edges[i].second : edges[i].first;
//             if (visited[neighbour] == 0) {
//                 /* Not yet visited */
//                 cycle_found = cyclic_recursive(edges, n, visited, order, neighbour, vertex);
//             }
//             else if (neighbour != predecessor) {
//                 /* Found a cycle */
//                 cycle_found = 1;
//             }
//         }
//     }
//     return cycle_found;
// }
 
// unsigned int cyclic(const edge *edges, unsigned int n, unsigned int order)
// {
//     unsigned int *visited = calloc(order, sizeof(unsigned int));
//     unsigned int cycle_found;
//     if (visited == NULL) {
//         return 0;
//     }
//     cycle_found  = cyclic_recursive(edges, n, visited, order, 0, 0);
//     free(visited);
//     return cycle_found;
// }


 
// int main(void)
// {
//     const unsigned int order = 6; /* Vertices */
//     const unsigned int n = 6; /* Edges */
//     edge *edges;
//     unsigned int c;
    
//     edges = malloc(n * sizeof(edge));
//     if (edges == NULL) {
//         return 1;
//     }
 
//     edges[0].first = 0;
//     edges[0].second = 1;
//     edges[1].first = 1;
//     edges[1].second = 2;
//     edges[2].first = 2;
//     edges[2].second = 3;
//     edges[3].first = 3;
//     edges[3].second = 0;
//     edges[4].first = 3;
//     edges[4].second = 4;
//     edges[5].first = 3;
//     edges[5].second = 5;
 
//     c = cyclic(edges, n, order);
//     printf("Graph is %s.\n", c ? "cyclic" : "acyclic");
//     free(edges);
 
//     return 0;
// }

// 0   1   1   0   0   0   0
// 1   0   0   1   0   0   0
// 1   0   0   1   0   0   0
// 0   1   1   0   1   1   0
// 0   0   0   1   0   0   1
// 0   0   0   1   0   0   1
// 0   0   0   0   1   1   0