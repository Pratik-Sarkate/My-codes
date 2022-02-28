// https://leetcode.com/problems/arranging-coins/

#define ll long long int
class Solution {
public:
    int arrangeCoins(int n) {
        
        ll lo = 1, hi = n;
        ll mid;
        int ans;
        
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            
            ll temp = (mid*(mid+1))/2;
            
            if(temp<=n){
                ans = mid;
                lo = mid + 1;
            }else{
                hi = mid - 1;
            }
        }
        
        return ans;
    }
};