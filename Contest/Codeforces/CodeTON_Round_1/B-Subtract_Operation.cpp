// https://codeforces.com/contest/1656/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    for(int i = 0; i<n; i++){

        int s = i, e = n-1;
        int mid, ans = i;
        while(s<=e){
            mid = s + (e-s)/2;
            // cout<<s<<" "<<mid<<" "<<e<<" "<<a[mid]<<" "<<a[i]<<endl;
            if(a[mid] - a[i] == k){
                cout<<"YES"<<endl;
                return;
            }else if(a[mid] - a[i] > k){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
    }

    cout<<"NO"<<endl;
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