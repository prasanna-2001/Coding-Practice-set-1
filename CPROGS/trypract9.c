#include<stdio.h>

iscycle(int a[v][v], int ref){
    int q[20],int viar[20],i,j,f=-1,r=-1;
    r++;
    q[r]=ref;
    
}

int main(){
    int v,e,i,j,x=1,ref,c,flag=0,ans;
    int ep1,ep2;
    printf("enter the number of vertices \n");
    scanf("%d",&v);
    printf("the vertices are : \n");
    for(i=0;i<v;i++){
        printf("%d ",i);
    }
    printf("\n\n");
    printf("enter the number of edges \n");
    scanf("%d",&e);
    int a[v][v];
    for(i=0; i<v; i++){
        for(j=0; j<v; j++){
            a[i][j]=0;    
        }
    }
    // for(i=0; i<v; i++){
    //     for(j=0; j<v; j++){
    //         printf("%d \n",a[i][j]);    
    //     }
    // }

    printf("Enter the end points of edges \n");
    for(i=0;i<e;i++){
        printf("Enter the end point 1st of edge %d\n",i);
        scanf("%d",&ep1);
        printf("Enter the end point 2nd of edge %d\n",i);
        scanf("%d",&ep2);
        a[ep1][ep2]=1;
    }
    // for(i=0; i<v; i++){
    //     for(j=0; j<v; j++){
    //         printf("a[%d][%d] = %d \n",i,j,a[i][j]);    
    //     }
    // }
    for(i=0; i<v; i++){
        for(j=0; j<v; j++){
            if(a[i][j]==1){
                printf("a[%d][%d] = %d \n",i,j,a[i][j]);
            }    
        }
    }

    while(x==1){
        printf("enter a reference node : ");
        scanf("%d",&ref);

        //base case if ref has no edge;
        // for(c=0;c<v;c++){
        //     if(a[ref][c]==1){
        //         flag=1;
        //     }
        // }
        // if(flag==0){
        //     printf("the graph has no loop for node %d \n",ref);
        // }
        // else{
        //     printf("the graph may or may not contain loop for node %d\n",ref);
        // }
        ans = iscycle(a[v][v],ref);
        printf("Enter 1 if you want to find loops for more refrence node or else enter 0 \n");
        scanf("%d",&x);
    }
}


