class Solution {
    int n = 3;
    int N = 3*3;
    int[][] rows = new int[N][N+1];
    int[][] cols = new int[N][N+1];
    int[][] boxes = new int[N][N+1];
        
    char[][] board;
        
    boolean sudokuSolved = false;
        
    public boolean couldPlace(int d,int row,int col){
        int idx = (row / n)*n+col/n;
        return (rows[row][d] + cols[col][d] + boxes[idx][d]) == 0;
    }
        
    public void place(int d,int row,int col){
        int idx = (row / n)*n+col/n;
        rows[row][d]++;
        cols[col][d]++;
        boxes[idx][d]++;
        board[row][col] = (char)(d + '0');
    }
    public void remove(int d,int row,int col){
        int idx = (row / n)*n+col/n;
        rows[row][d]--;
        cols[col][d]--;
        boxes[idx][d]--;
        board[row][col] = '.';
    }
    public void placeNextNum(int row,int col){
        if(row == N-1 && col == N-1)
            sudokuSolved = true;
        else{
            if(col == N-1)
                backtrace(row+1,0);
            else
                backtrace(row,col+1);
        }
    }
    public void backtrace(int row,int col){
        if(board[row][col] == '.'){
            for(int d = 1;d < 10;d++){
                if(couldPlace(d,row,col))
                {
                    place(d,row,col);
                    placeNextNum(row,col);
                    if(!sudokuSolved)
                        remove(d,row,col);
                }
            }
        }else
            placeNextNum(row,col);
    }
    public void solveSudoku(char[][] board) {
        this.board = board;
        for(int i = 0;i<N;i++){
            for(int j = 0;j<N;j++){
                char num = board[i][j];
                if(num!='.'){
                    int d = Character.getNumericValue(num);
                    place(d,i,j);
                }
            }
        }
        
        backtrace(0,0);
    }
}
