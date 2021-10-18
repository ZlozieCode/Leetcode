// q-> https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>v(256,-1);
        int start=-1;
        int ans=0;
        
        int n=s.length();
        
        for(int i=0;i<n;i++){
            
            if(v[s[i]]>start){
                start=v[s[i]];
            }
            
            v[s[i]]=i;
            ans=max(ans,i-start);
        }
        
        return ans;
    }
};
