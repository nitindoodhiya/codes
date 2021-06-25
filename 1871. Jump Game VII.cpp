/*
https://leetcode.com/problems/jump-game-vii/
You are given a 0-indexed binary string s and two integers minJump and maxJump. 
In the beginning, you are standing at index 0, which is equal to '0'.
You can move from index i to index j if the following conditions are fulfilled:

    >i + minJump <= j <= min(i + maxJump, s.length - 1), and
    >s[j] == '0'.
    
Return true if you can reach index s.length - 1 in s, or false otherwise.
*/

// SOLUTION

/*
If you can reach i then you can reach [i+minJump, i+maxJump]
this is overlapping subproblems and optimal substructure property, hence dp can be used.

Partial sums are introduced to reduce the complexity, for one iteration, from O(maxJump-minJump) to O(1)
Partial sums helps to mark the whole range in O(1) time. increment the start point and decrement the end point + 1, and use prefix sum logic.
If particular index's partial sum is >=1 and it is 0, then we can somehow reach to this index from starting index.

iteratively doing the previous step will lead you towards solution
*/


bool canReach(string s, int minJump, int maxJump) {
        int n = s.length();
        vector<int> pref(n,0);
        if(minJump < n)
            pref[minJump] = 1;
        if(maxJump+1 < n)
            pref[maxJump+1] = -1;
        
        for(int i = 1; i < n; i++){
            pref[i] += pref[i-1];
            if(pref[i] == 0)
                continue;
            if(s[i] == '1')
                continue;
            
            if(i+minJump < n)
                pref[i+minJump]++;
            if(i+maxJump+1 < n)
                pref[i+maxJump+1]--;
        }
        if(pref[n-1] != 0 && s[n-1] != '1')
            return true;
        return false;
    }
