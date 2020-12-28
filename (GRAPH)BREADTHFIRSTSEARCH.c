#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include "Queue.h"

void BFS(int a[][7],int start,int n){
    int i=start;
int visited[8]={0};
// struct queue q;
    printf("%d",i);
    visited[i]=1;



    
enqueue(&q,i);
while(!isEmpty(q)){

int u=dequeue(&q);

for(int v=1;v<=n;v++){
    if(a[u][v]==1 && visited[v]==0)
    {
printf("%d",v);
visited[v]=1;
enqueue(&q,v);
    }
}

}
}







// ***************** DEPTH FIRST SEARCH ***************************


// u->starting vertex
void DFS(int a[][7],int start,int n){
    static int visited[8]={0};
    int u=start;
if(visited[u]==0)
{
    printf("%d",u);
    visited[u]=1;
    for(int v=1;v<=n;v++){
        if(a[u][v]==1 && visited[v]!=1)
// means there is an edge
        {
DFS(a,v,n);

        }




        
    }
}
}


int main(){

int a[7][7]={
{0,0,0,0,0,0,0},
{0,0,1,1,0,0,0},
{0,1,0,0,1,0,0},
{0,1,0,0,1,0,0},
{0,0,1,1,0,1,1},
{0,0,0,0,1,0,0},
{0,0,0,0,1,0,0}


};
// BFS(a,1,7);
DFS(a,1,7);
    return 0;
}