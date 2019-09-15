class Solution {
public:
    int numTrees(int n) {
        long q = 0;
        if(n == 0 || n == 1)
            return n;
        if(n%2 == 1){
            for(int i = 0;i<n/2;i++)
            {
                if(i != 0)
                    q+=2*(numTrees(i) * numTrees(n-i-1));
                else
                     q+=2*numTrees(n-i-1);
            }
            q+=(numTrees((n-1)/2)*numTrees((n-1)/2));
        }
        else{
            for(int i = 0;i<n/2;i++){
                if(i != 0)
                    q+=2*(numTrees(i) * numTrees(n-i-1));
                else
                     q+=2*numTrees(n-i-1);
            }
        }
        return q;
        
    }
};
