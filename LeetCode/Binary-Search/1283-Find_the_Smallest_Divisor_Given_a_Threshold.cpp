// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n = nums.size();
        int s = 1, e = 1e6;
        int mid, ans;
        
        while(s<=e){
            mid = s + (e-s)/2;
            
            int result = 0;
            for(int i = 0; i<n; i++){
                result+=(nums[i]+mid-1)/mid;
            }
            
            
            if(result<=threshold){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        
        return ans;
    }
};