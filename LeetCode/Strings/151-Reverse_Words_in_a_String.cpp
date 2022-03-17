// https://leetcode.com/problems/reverse-words-in-a-string/


/*  Approach 1:  TC = O(N)   SC = O(N) */

class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        int n = s.length();
        int i = n-1, k = n-1;

        while(i>=0){
            if(s[i]==' '){
                i--;
                continue;
            }

            int j = i, k = i;
            while(j>=0 && s[j]!=' '){
                j--;
            }

            for(int x = j+1; x<=k; x++){
                ans.push_back(s[x]);
            }
            ans.push_back(' ');
            i = j;
        }
        if(ans.back()==' ') ans.pop_back();

        return ans;
    }
};


/*  Approach 2:  TC = O(N)   SC = O(1) */

class Solution {
public:
    string reverseWords(string s) {
        
        reverse(s.begin(),s.end());
        
        int n = s.length();
        int i = 0, l = 0, r = 0;
        
        while(i<n){
            
            while(i<n && s[i]!=' '){
                s[r] = s[i];
                i++;
                r++;
            }
            
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                if(r==n) break;
                s[r] = ' ';
                r++;
                l = r;
            }
            
            i++;
            
        }
        
        if(r>0 && s[r-1]==' '){
            r--;
        }
        
        s.resize(r);
        return s;
        
    }
};
