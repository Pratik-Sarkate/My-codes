// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution {
public:
    
    bool possible(vector<int>& a, int m, int k, long long mid){
        
        int flower = 0, cnt = 0;
        
        for(int i = 0; i<a.size(); i++){
            if(a[i]>mid){
                flower = 0;
                continue;
            }else{
                flower++;
            }
            
            if(flower>=k){
                flower = 0;
                cnt++;
            }
            
        }
        
        if(cnt>=m) return 1;
        else return 0;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        if(m*k>bloomDay.size()) return -1;
        
        long long s = 1, e = 1e9;
        long long mid, ans = 0;
        
        while(s<=e){
            mid = s + (e-s)/2;
            
            if(possible(bloomDay,m,k,mid)){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        return ans;
    }
};