// https://codeforces.com/contest/1631/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n,k;cin>>n>>k;

    vector<bool> a(n,0);

    if(n==4 && k==3){
        cout<<-1<<endl;
        return;
    }

    // for k==n-1

    if(k==(n-1)){
        cout<<n-1<<" "<<n-2<<endl;
        cout<<n-3<<" "<<1<<endl;

        a[n-1] = a[n-2] = a[n-3] = a[1] = 1;


    }
    // for k < (n-1)
    else{

        cout<<n-1<<" "<<k<<endl;
        a[n-1] = 1, a[k] = 1;
    }

    

    for(int i = n-1; i>0; i--){

        if(a[i]==0){
            int d = (log10(i)/log10(2)) + 1;
            int b = i ^ ((1<<d) - 1);

            if(a[b]==0){
                cout<<i<<" "<<b<<endl;
                a[i] = 1, a[b] = 1;
            }

        }
    }

    int cnt = 0;

    for(int i = n-1; i>=0; i--){
        if(a[i]==0){
            cout<<i<<" ";
            a[i] = 1;
            cnt++;
        }
        if(cnt==2){
            cout<<endl;
            cnt = 0;
        }
    }
    // cout<<endl;

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

/*

0  0000
1  0001
2  0010
3  0011
4  0100
5  0101
6  0110
7  0111 

k = 4  n = 8;

4 7
6 1
5 2
3 0

*/