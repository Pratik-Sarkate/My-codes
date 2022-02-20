// https://codeforces.com/contest/1635/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    vector<int> maxi;


    for(int i = 1; i <n-1; i++){
        // Condition for local maxima
        if((a[i-1]<a[i]) && (a[i]>a[i+1])) maxi.push_back(i);
    }

    if(maxi.size()==0){
        cout<<0<<endl;
        for(auto it: a) cout<<it<<" ";
        cout<<endl;
        return;
    }else{

        int cnt = 0;
        for(int i = 0; i<maxi.size(); ){
            int j = -1;
            if(i+1 < maxi.size()) j = i+1;

            if(j!=-1 && maxi[j]-maxi[i]==2){
                a[(maxi[i]+maxi[j])/2] = max(a[maxi[i]],a[maxi[j]]);
                i = j+1;
                cnt++;
            }else{
                a[maxi[i]] = max(a[maxi[i]-1],a[maxi[i]+1]);
                cnt++;
                i++;
            }
        }

        cout<<cnt<<endl;
        for(auto it: a) cout<<it<<" ";
        cout<<endl;

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
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}