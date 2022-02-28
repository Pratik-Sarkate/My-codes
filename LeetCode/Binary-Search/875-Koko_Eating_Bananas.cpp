// https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        int s = 1, e = 1e9;
        int mid, ans = 0;
        
        while(s<=e){
            mid = s + (e-s)/2;
            
            int hr = 0;
            for(int i = 0; i<n; i++){
                hr+=(piles[i]+mid-1)/mid;
            }
            
            if(hr<=h){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        
        return ans;
    }
};