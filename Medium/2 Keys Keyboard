class Solution {
private:
    int helper(int size, int n, int lastCopied)
    {
        if(size == n) return 0;
        if(size > n) return 1e8;
        
        int copyAndPaste = 2 + helper(size + size, n, size);
        int onlyPaste = 1e8;
        if(lastCopied != 0)
        {
            onlyPaste = 1 + helper(size + lastCopied, n, lastCopied);
        }
        return min(copyAndPaste, onlyPaste);

    }

public:
    int minSteps(int n) {
        return helper(1, n, 0);
    }
};
