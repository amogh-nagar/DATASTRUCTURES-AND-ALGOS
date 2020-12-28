// BACKTRACKING
bool issafe(int **arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }}
        int row=x,col=y;
while(row>=0 && col>=0){
    if(arr[row][col]==1)
    return false;


row--;col--;
    }
row=x,row=y;
while(row>=0 && col<n){
    if(arr[row][col]==1)
    return false;


row--;col++;
    }
return true;
}

bool nqueen(int **arr,int x,int n){

if(x>=n)
{
    return true;
}

for(int col=0;col<n;col++){
    if(issafe(arr,x,col,n)){
        arr[x][col]=1;

        if(nqueen(arr,x+1,n)){
            return true;
        }
        //  Backtracking
        arr[x][col]=0;
    }
}
return false;
}