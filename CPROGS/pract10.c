#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int n;    /*Number of vertices in the graph*/
int adj[MAX][MAX]; /*Adjacency Matrix*/
void create_graph();

int queue[MAX], front = -1,rear = -1;
void insert_queue(int v);
int delete_queue();
int isEmpty_queue();

int indegree(int v);

int main()
{
        int i,j,v,count,topo_order[MAX],indeg[MAX];
        printf("\n***Prasanna Anjankar --> Topological Sort***\n");
        create_graph();

        /*Find the indegree of each vertex*/
        for(i=0;i<n;i++)
        {
                indeg[i] = indegree(i);
                if( indeg[i] == 0 )
                        insert_queue(i);
        }

        count = 0;

        while(  !isEmpty_queue( ) && count < n )
        {
                v = delete_queue();
        topo_order[++count] = v; /*Add vertex v to topo_order array*/
                /*Delete all edges going fron vertex v */
                for(i=0; i<n; i++)
                {
                        if(adj[v][i] == 1)
                        {
                                adj[v][i] = 0;
                                indeg[i] = indeg[i]-1;
                                if(indeg[i] == 0)
                                        insert_queue(i);
                        }
                }
        }

        if( count < n )
        {
                printf("\nNo topological ordering possible, graph contains cycle\n");
                exit(1);
        }
    printf("The adjency matrix is : \n");
    

    printf("\nProcess(vertices) in topological order are :\n");
    for(i=1; i<=count; i++)
            printf( "%d ",topo_order[i] );
    printf("\n");

    return 0;
}/*End of main()*/

void insert_queue(int vertex)
{
        if (rear == MAX-1)
                printf("\nQueue Overflow\n");
        else
        {
                if (front == -1)  /*If queue is initially empty */
                        front = 0;
                rear = rear+1;
                queue[rear] = vertex ;
        }
}/*End of insert_queue()*/

int isEmpty_queue()
{
        if(front == -1 || front > rear )
                return 1;
        else
                return 0;
}/*End of isEmpty_queue()*/

int delete_queue()
{
        int del_item;
        if (front == -1 || front > rear)
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        else
        {
                del_item = queue[front];
                front = front+1;
                return del_item;
        }
}/*End of delete_queue() */

int indegree(int v)
{
        int i,in_deg = 0;
        for(i=0; i<n; i++)
                if(adj[i][v] == 1)
                        in_deg++;
        return in_deg;
}/*End of indegree() */

void create_graph()
{
        int i,max_edges,origin,destin;

        printf("\nEnter number of Process(vertices) : ");
        scanf("%d",&n);
        max_edges = n*(n-1);

        for(i=1; i<=max_edges; i++)
        {
                printf("\nEnter edge %d(-1 -1 to quit): ",i);
                scanf("%d %d",&origin,&destin);

                if((origin == -1) && (destin == -1))
                        break;

                if( origin >= n || destin >= n || origin<0 || destin<0)
                {
                        printf("\nInvalid edge!\n");
                        i--;
                }
                else
                        adj[origin][destin] = 1;
        }
}


























// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 10
// int adj[MAX][MAX],n;

// int topsort[MAX];
// void store();
// void display();
// int main(){
//     int rep = 1,ch;
//     do{
//         printf("Enter your choice\n");
//         printf("1.Store \n2.Display\n");
//         scanf("%d",&ch);
//         switch(ch){
//             case 1 :
//                 store();
//                 break;
//             case 2 :
//                 display();
//                 break;
//             default :
//                 printf("Please Enter a valid choice");
//         }
//         printf("Press 1 to continue or 0 to end : ");
//         scanf("%d",&rep);
//     }while(rep==1);
    
// }

// void store(){
//     int i,j,x=1,a,b;
//     printf("enter the number of process :  ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0; j<n; j++){
//             adj[i][j]=0;
//         }
//     }
//     // for(i=0;i<n;i++){
//     //     for(j=0; j<n; j++){
//     //         printf("%d \n",adj[i][j]);
//     //     }
//     // }
//     printf("Enter the depencies in order (a b) wher b depends on a\n");
//     do{
//         printf("Enter the source: ");
//         scanf("%d",&a);
//         printf("Enter the dependee: ");
//         scanf("%d",&b);
//         adj[a][b]=1;
//         printf("enter 1 to continue nd 0 to stop entering dependencies\n");
//         scanf("%d",&x);
//     }while(x==1);
//     for(i=0;i<n;i++){
//         for(j=0; j<n; j++){
//             printf("%d \n",adj[i][j]);
//         }
//     }
// }
// void display(){
//         printf("display");
// }