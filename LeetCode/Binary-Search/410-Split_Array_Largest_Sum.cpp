// https://leetcode.com/problems/split-array-largest-sum/

class Solution {

private:
    
    bool possible(vector<int>& a, int m, int mid){
        
        int cnt = 0, sum = 0;
        
        for(int i = 0; i<a.size(); i++){
            
            if(a[i]>mid) return 0;
            
            if((sum+a[i])<=mid){
                sum+=a[i];
            }else{
                cnt++;
                sum = a[i];
                
                if(cnt>m) return 0;
            }
        }
        
        if(sum) cnt++;
        if(cnt<=m) return 1;
        else return 0;
    }
    
public:
    int splitArray(vector<int>& nums, int m) {
        
        int s = 0, e = 1e9;
        int mid, ans = 0;
        
        while(s<=e){
            mid = s + (e-s)/2;
            
            if(possible(nums,m,mid)){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        
        return ans;
    }
};