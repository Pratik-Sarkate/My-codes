// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/sub-array-problem-1/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


bool isprime(int n){

    if(n<=1) return 0;

    for(int i = 2; i*i<=n; i++){
        if(n%i==0){

            return 0;
        }
    }

    return 1;
}

void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int,int>> a(n+1);
    a[0].first = a[0].second = 0;
    vector<int> pre(n+1,0);
    for(int i = 1; i<=n; i++){
        cin>>a[i].first;
    }

    for(int i = 1; i<=n; i++){
        if(isprime(a[i].first)){
            a[i].second = 1;
        }else{
            a[i].second = 0;
        }
        if(i!=0) pre[i] = a[i].second + pre[i-1];
        else pre[i] = a[i].second;
    }

    // for(int i = 1; i<=n; i++){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;


    ll ans = 0;
    for(int i = 1; i<=n; i++){
        int mx = i;

        int s = i, e = n;
        int mid;
        while(s<=e){

            mid = s + (e-s)/2;

            if((pre[mid]-pre[i-1])<=k){
                mx = max(mx,mid);
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        // cout<<i<<" "<<mx<<" ans = "<<(mx+1-i)<<endl;
        ans+=(mx-i+1);
    }
    cout<<ans<<endl;


}

int main()
{
    fast_io;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
