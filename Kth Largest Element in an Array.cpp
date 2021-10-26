// q->https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>p;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            p.push(nums[i]);
        }
        
        int ans;
        
        while(k){
            
            ans=p.top();
            p.pop();
            k--;
            
        }
        
        return ans;
    }
};
