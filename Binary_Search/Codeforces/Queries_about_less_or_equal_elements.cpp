// https://codeforces.com/problemset/problem/600/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    for(int i = 0; i<m; i++){
        cin>>b[i];
    }

    for(int i = 0; i<m; i++){

        int s = 0, e = n;

        int mid;
        while(s<e){
            mid = s + (e-s)/2;

            if(a[mid]<=b[i]){
                s = mid + 1;
            }else{
                e = mid;
            }
        }

        cout<<e<<" ";
    }
    cout<<endl;
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