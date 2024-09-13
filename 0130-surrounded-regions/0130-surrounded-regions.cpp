class Solution {
public:
    void dfs(vector<vector<char>>& board,vector<vector<int>>& visit,int row, int col){
       visit[row][col]=1;
       int dir1[] = {-1,0,1,0};
       int dir2[] = {0,-1,0,1};
       int n=board.size();
       int m= board[0].size();
       for(int i=0;i<4;i++){
        int node1 = row+dir1[i];
        int node2 = col+dir2[i];
        if( node1>=0 && node1<n && node2>=0 && node2<m && board[row+dir1[i]][col+dir2[i]]=='O' ){
            if(!visit[node1][node2])
            dfs(board,visit,node1,node2);
        }
       }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        vector<vector<int>> visit(n,vector<int>(m,0));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='O' && i==0 ){

                    dfs(board,visit,i,j);
                }
                if(board[i][j]=='O' && i==n-1 ){

                    dfs(board,visit,i,j);
                }
                if(board[i][j]=='O' && j==0 ){

                    dfs(board,visit,i,j);
                }
                if(board[i][j]=='O' && j==m-1){

                    dfs(board,visit,i,j);
                }
            }
        }
     for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]=='O' && visit[i][j]!=1){
                board[i][j]='X';
            }
        }
     }

    }
};