// https://www.codechef.com/LTIME105B/problems/MAGNETSORT

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<pair<int,char>> a(n);
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
        a[i].first = v[i];
    }

    string s;cin>>s;
    int N = 0, S = 0;
    for(int i = 0; i<n; i++){
        a[i].second = s[i];

        if(s[i]=='N') N++;
        else S++;
    }

    if(is_sorted(v.begin(),v.end())){
        cout<<0<<endl;
        return;
    }

    if((N==n && S==0) || (N==0 && S==n)){
        if(is_sorted(v.begin(),v.end())){
            cout<<0<<endl;
        }else{
            cout<<-1<<endl;
        }
        return;
    }


    sort(v.begin(),v.end());

    int start = -1, end = -1;

    for(int i = 0; i<n; i++){
        if(a[i].first != v[i]){
            if(start==-1){
                start = i;
            }
            end = i;
        }
    }

    // cout<<start<<" "<<end<<endl;

    if(s[start]!=s[end]){
        cout<<1<<endl;
        return;
    }else{
        int earlyN = 0, earlyS = 0, betweenN = 0, betweenS = 0, endN = 0, endS = 0;

        for(int i = 0; i<start; i++){
            if(s[i]=='N') earlyN++;
            else earlyS++;
        }

        for(int i = start; i<=end; i++){
            if(s[i]=='N') betweenN++;
            else betweenS++;
        }

        for(int i = end+1; i<n; i++){
            if(s[i]=='N') endN++;
            else endS++;
        }

        if((earlyN && s[end]=='S') || (earlyS && s[end]=='N') || (s[start]=='N' && endS) || (s[start]=='S' && endN)){
            cout<<1<<endl;
            return;
        }

        if(betweenN && betweenS){
            cout<<2<<endl;
            return;
        }
    }
    cout<<-1<<endl;


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