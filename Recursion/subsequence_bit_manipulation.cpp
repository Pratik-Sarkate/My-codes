#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<string> ans;


void subsets(string s, int n, int total){

    for(int i = 0; i<total; i++){
        int x = i;
        string temp;

        int j = 0;
        while(x>0){
            if(x&1){
                temp.push_back(s[j]);
            }
            x = x>>1;
            j++;
        }

        ans.push_back(temp);
    }
}

void solve(){
    string s;cin>>s;
    int n = s.length();

    // total subsequence = 2^n

    subsets(s,n,pow(2,n));
    for(auto i: ans){
        cout<<i<<endl;
    }
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}

/* 
    Eg: s = abc
    
    total subsequence = 2^n = 8
    Output:
                  --> (empty)
                a
                b
                ab
                c
                ac
                bc
                abc

*/