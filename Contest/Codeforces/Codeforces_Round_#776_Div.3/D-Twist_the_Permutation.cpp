// https://codeforces.com/contest/1650/problem/D

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        mp[a[i]] = i;
    } 

    vector<int> ans(n,0);

    for(int i = n-1; i>=0; i--){

        int pos = mp[i+1];
        int shifts = i-pos;

        if(shifts<0){
            cout<<-1<<endl;
            return;
        }

        if(a[i]==i+1){
            ans[i] = 0;
            continue;
        }

        reverse(a.begin() , a.begin()+i+1 - shifts);
        reverse(a.begin()+i+1-shifts , a.begin()+i+1);
        reverse(a.begin(),a.begin()+i+1);


        for(int j = 0; j<n; j++){
            mp[a[j]] = j;
        }

        ans[i] = i-shifts+1;

    }

    for(auto it: ans) cout<<it<<" ";
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
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}