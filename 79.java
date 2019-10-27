
class Solution {
    int[][] isused=new int[1000][1000];
    boolean isfinished = false;
    char board[][];
    int l = 0;
    String word;
    public boolean couldAdd(int row,int col){
        if(l<word.length() && word.charAt(l) == board[row][col]){
            return isused[row][col]==0;
        }
        return false;
    }
    public void addChar(int row,int col){
        l++;
        isused[row][col]++;
    }
        
    public void removeChar(int row,int col){
        l--;
        isused[row][col]--;
    }
    
    public void testNextChar(int row,int col){
        if(l > word.length()-1)
            isfinished = true;
        else{
            if(row>0)
                traceback(row-1,col);
            if(col < board[0].length-1)
                traceback(row,col+1);
            if(row < board.length -1)
                traceback(row+1,col);
            if(col>0)
                traceback(row,col-1);
        }
    }
    public void traceback(int row,int col){
        if(couldAdd(row,col))
        {
            addChar(row,col);
            testNextChar(row,col);
            if(!isfinished)
                removeChar(row,col);

        }
    }
    public boolean exist(char[][] board, String word) {
        this.board=board;
        this.word=word;
        int rowlen = board.length;
        int collen = board[0].length;
        if(rowlen * collen < word.length())
            return false;
        for(int row = 0;row<rowlen;row++){
            for(int col = 0;col<collen;col++){
                traceback(row,col);
                if(isfinished == true)
                    return true;
            }
        }
        return isfinished;
    }
}
