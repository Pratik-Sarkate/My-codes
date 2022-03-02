// https://www.codechef.com/LTIME105B/problems/DISTCON

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int d;cin>>d;

    if(d&1){
        cout<<-1<<endl;
        return;
    }

    int x1 = 0, y1 = 0;
    int x2 = d, y2 = 0;
    int x3 = d/2, y3 = d/2;
    int x4 = d/2, y4 = -d/2;

    cout<<x1<<" "<<y1<<endl;
    cout<<x2<<" "<<y2<<endl;
    cout<<x3<<" "<<y3<<endl;
    cout<<x4<<" "<<y4<<endl;

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