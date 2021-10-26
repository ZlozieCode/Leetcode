// q->https://leetcode.com/problems/find-all-anagrams-in-a-string/submissions/


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<char,int>m;
        int n=s.length();
        int k=p.length();
        
        for(int i=0;i<k;i++){
            m[p[i]]++;
        }
        
        int i=0;
        int j=0;
        vector<int>v;
        int c=m.size();
        
        while(j<n){
            
            if(m.find(s[j])!=m.end()){
                m[s[j]]--;
                if(m[s[j]]==0){
                    c--;
                }
            }
            
            if(j-i+1<k){
                j++;
            }
            
            
            else if(j-i+1==k){
                if(c==0){
                    v.push_back(i);
                }
                
                
                if(m.find(s[i])!=m.end()){
                    m[s[i]]++;
                    
                    if(m[s[i]]==1)c++;
                }
                
                i++;
                j++;
            }
            
            
            
        }
        
        
        return v;
        
        
    }
};
