// https://codeforces.com/contest/96/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

bool create(int len, string a, vector<ll> &pre){  // to precompute all the lucky numbers

    if(a.length()>10){
        return false;
    }

    string temp = a;
    // include 4 for a pos;
 
    if(create(len+1,'4'+a, pre)){
        pre.push_back(stoll('4'+a));
    }
    
    // include 7 for a pos;
    
    if(create(len+1,'7'+a, pre)){
        pre.push_back(stoll('7'+a));
    }
    return true;
}

int is_equal(ll n){
    int f = 0, s = 0;
    while(n){
        ll ld = n%10;
        if(ld==4) f++;
        else s++;
        n/=10;
    }

    if(f==s) return 1;
    else return 0;
}


void solve(){
    string s;cin>>s;

    if(s.length()&1){
        for(int i = 0; i<(s.length()+1)/2; i++){
            cout<<'4';
        }
        for(int i = 0; i<(s.length()+1)/2; i++){
            cout<<'7';
        }
        return;
    }

    int len = s.length();
    vector<ll> pre;         // to store all the lucky numbers

    string ss = "";
    
    create(0,ss,pre);

    vector<ll> ans;         // to store all the super lucky numbers

    for(int i = 0; i<pre.size(); i++){
        if(is_equal(pre[i])){
            ans.push_back(pre[i]);
        }
    }


    sort(ans.begin(), ans.end());

    ll num = stoll(s);
    ll l = 0, r = ans.size()-1;

    ll mid;
    while(l<r){                     // binary search to find the required number

        ll mid = l + (r-l)/2;

        if(ans[mid]>=num){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    cout<<ans[r]<<endl;



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