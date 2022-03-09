// https://www.codechef.com/START29B/problems/PMA

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n;cin>>n;
    vector<ll> a(n);

    ll mneven = 0, mxodd = 1;

    for(ll i = 0; i<n; i++){
        cin>>a[i];
        a[i] = abs(a[i]);
    }


    ll sum1 = 0;
    for(ll i = 0; i<n; i++){
        if(i&1){
            sum1-=abs(a[i]);

        }else{
            sum1+=abs(a[i]);
        }
    }

    vector<ll> odd,even;
    for(ll i = 0; i<n; i++){
        if(i&1){
            odd.push_back(a[i]);
        }else{
            even.push_back(a[i]);
        }
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    if(even[0]<odd[odd.size()-1]) swap(even[0],odd[odd.size()-1]);

    ll sum = 0;
    for(auto it: even) sum+=it;
    for(auto it: odd) sum-=it;


    cout<<max(sum1,sum)<<endl;

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