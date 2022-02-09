// https://www.codechef.com/START25B/problems/DISTK

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n,k;cin>>n>>k;

    vector<int> a;

    a.push_back(1);
    ll total = 1, present = 1;
    for(ll i = 2; i<=n; i++){


        ll temp_total = (k-total)-(n-i);

        if(temp_total >= i){
            present++;
            a.push_back(present);
            total+=i;
        }else if(temp_total < i){
            present = present - temp_total + 1;
            a.push_back(present);
            total+=(temp_total);
        }
    }

    for(auto it: a){
        cout<<it<<" ";
    }cout<<endl;
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