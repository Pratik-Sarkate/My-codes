// https://www.codechef.com/COOK138B/problems/PREFPERM

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(k);
    for(int i = 0; i<k; i++){
        cin>>a[i];
    }

    int j = 0;
    int i = 0;

    vector<int> ans;

    while(j<k){

        int start = a[j];
        // cout<<"satart = "<<start<<endl;
        while(start>i){
            ans.push_back(start);
            start--;
        }

        i = a[j];
        j++;
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