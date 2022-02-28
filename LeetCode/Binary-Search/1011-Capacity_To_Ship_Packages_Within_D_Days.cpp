// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    
    bool possible(vector<int>& weights, int days, int mx){
        
        int cnt = 0;
        int sum = 0;
        for(int i = 0; i<weights.size(); i++){
            if(weights[i]+sum <= mx){
                sum+=weights[i];
            }else{
                cnt++;
                sum = 0;
                i--;
            }
            
            if(cnt>days) return 0;
        }
        
        if(sum) cnt++;
        
        if(cnt<=days) return 1;
        else return 0;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        
        int s = 1, e = 0;
        
        for(int i = 0; i<weights.size(); i++) e+=weights[i];
        
        int mid, ans = e;
        while(s<=e){
            mid = s + (e-s)/2;
            
            if(possible(weights,days,mid)){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        
        return ans;
        
    }
};