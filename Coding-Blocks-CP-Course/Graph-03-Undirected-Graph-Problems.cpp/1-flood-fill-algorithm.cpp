/*
Flood Fill Algorithm

W,N,E,S
int dx[] = {-1,0,1,0}
int dy[] = {0,-1,0,1};

void floodFill(char mat[][50] , int i , int j,char ch , char color){
    //base case - Matrix Bounds
    if(i < 0 || j < 0 || i >= row || j >= column){
        return;
    }

    //Figure Boundry Condition
    if(mat[i][j] != ch){
        return;
    }

    //Recursive call
    mat[i][j] = color;

    for(int k = 0 ; k < 4 ; k++){
        floodFill(mat,i+dx[k],j+dy[k],ch,color);
    }

}

*/