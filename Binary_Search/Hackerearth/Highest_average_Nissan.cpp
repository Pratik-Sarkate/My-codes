// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/highest-average-64bdd761/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    
    ll n;cin>>n;
    vector<ll> a(n);
    // a[0] = 0;

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    for(int i = 1; i<n; i++){
        a[i] = a[i] + a[i-1];
    }


    ll q;cin>>q;
    vector<ll> b(q);
    for(int i = 0; i<q; i++){
        cin>>b[i];
    }


    for(int i = 0; i<q; i++){
        ll k = b[i];

        ll s = 0, e = n-1;
        ll mid;

        ll ans = 0;

        while(s<=e){
            mid = s + (e-s)/2;

            double avg = (double)(a[mid])/double(mid+1);

            if(avg<k){
                ans = mid+1;
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }

        cout<<ans<<endl;
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