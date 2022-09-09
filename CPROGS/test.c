//Prasanna Anjankar
// To detect cycle in directed graph....
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#define MAX 100
#define initial 1
#define visited 2
#define finished 3

int n;    /*Number of vertices in the graph */
int adj[MAX][MAX];
void create_graph( );
int state[MAX];

void DF_Traversal();
void DFS(int v);

int main()
{        
        printf("\t\t***Prasanna Anjankar***\n");
        printf("\t\tDetect Loop in Directed graph\n\n");
        create_graph();
        DF_Traversal();
        return 0;
}/*End of main()*/

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
        printf("\nLoop is not present\n");
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
                                printf("\nBack edge  (%d,%d) found\n", v, i);
                                printf("\nLoop is Present\n");
                                exit(1);
                        }
                }
        }
        state[v] = finished;
}/*End of DFS()*/

void create_graph()
{
    int i=0, j;
    int a[50];
    int k;
    FILE *fp;
    fp = fopen("matrix.txt","r");
    if(fp == NULL)
    {
        printf("\n\t\tCamt open the file \n ");
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
        
}


// int i,max_edges,origin,destin;

        // printf("\nEnter number of vertices : ");
        // scanf("%d",&n);
        // max_edges = n*(n-1);

        // for(i=1;i<=max_edges;i++)
        // {
        //         printf("\nEnter edge %d( -1 -1 to quit ) : ",i);
        //         scanf("%d %d",&origin,&destin);
        //         if( (origin == -1) && (destin == -1) )
        //                 break;
        //         if( origin >= n || destin >= n || origin<0 || destin<0)
        //         {
        //                 printf("\nInvalid edge!\n");
        //                 i--;
        //         }
        //         else
        //         {
        //                 adj[origin][destin] = 1;
        //         }
        // }