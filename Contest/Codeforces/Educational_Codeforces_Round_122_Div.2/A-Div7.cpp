// https://codeforces.com/contest/1633/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;

    if(n%7==0){
        cout<<n<<endl;
        return;
    }

    int d = log10(n) + 1;
    // cout<<d<<endl;

    int ten = 1, cnt = 0;


    for(int j = 0; j<d; j++){
        for(int i = 0; i<10; i++){
            if((n-((n%(ten*10))/ten)*ten+i*ten)%7==0){
                cout<<n-((n%(ten*10))/ten)*ten+i*ten<<endl;
                return;
            }
        }

        ten*=10;
    }

    cout<<n<<endl;
    


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