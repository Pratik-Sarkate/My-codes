// https://codeforces.com/problemset/problem/1470/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


bool comparator(int a, int b){
    return a>b;
}

void solve(){
    int n,m;cin>>n>>m;
    vector<int> k(n),c(m);
    for(int i = 0; i<n; i++){
        cin>>k[i];
    }

    for(int i = 0; i<m; i++){
        cin>>c[i];
    }

    sort(k.begin(),k.end(),comparator); // sorted in descending order
    

    // Using binary search

    int s = 0, e = min(n,m)-1;
    int mid;

    while(s<e){                     // for finding the largest index of 'k' till which we can map the highest k[i] to the smallest c[i]
        mid = (e+s+1)>>1;
        bool flg = 1;
        for(int i = 0; i<=mid; i++){
            if((k[i]-1)<i){
                flg = 0;
            }
        }

        if(flg) s = mid;
        else e = mid - 1;
    }

    ll sum = 0;
    for(int i = 0; i<n; i++){
        if(i<=s){
            sum+=c[i];
        }else{
            sum+=c[k[i]-1];
        }
    }
    cout<<sum<<endl;

    // Using direct implementation
    /*
        ll j = 0, ans = 0;
        for(int i = 0; i<n; i++){

            if(k[i]>j){
                ans+=(c[j++]);
            }else{
                ans+=(c[k[i]-1]);
            }
        }
        cout<<ans<<endl;

    */
    
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
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}