// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/in-another-base-1-e0d0f1ca/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


ll digits(ll a, ll b, ll x){

    
    // Mathematical expression for digits of a number 'n' in base 'b' = log(n)/log(b) + 1;
    // digits of ax^x = log(ax^x)/log(b) + 1 = (log(a) + xlog(x))/log(b) + 1
    
    ll d = ((log(a)/log(b)) + x*(log(x)/log(b))) + 1;
    return d;
}


void solve(ll a, ll n, ll b){
    // ll a,n,b; 
    // cin>>a>>n>>b;


    // this binary search for non inclusive upper-limit value of 'x' for digit to be 'n' 
    int s = 1, e = 1e9;
    int mid;
    int ans1 = 0, ans2 = 0;
    while(s<=e){
        mid = s + (e-s)/2;
        ll d = digits(a,b,mid);
        // cout<<mid<<" "<<d<<endl;
        if(d<=n){
            s = mid + 1;
        }else{
            ans1 = mid;
            e = mid - 1;
        }
    }

    
    // this binary search for non inclusive lower-limit value of 'x' for digit to be 'n' 
    s = 1, e = 1e9;
    while(s<=e){

        mid = s + (e-s)/2;
        ll d = digits(a,b,mid);
        
        if(d<n){
            ans2 = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    // cout<<"ans1 = "<<ans1<<" ans2 = "<<ans2<<endl;
    // if(ans1!=0) cout<<ans2-ans1-1<<endl;
    // else 
    cout<<ans1-ans2-1<<endl;


}


int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    ll a,n,b;

    int t = 1;
    // cin>>t;
    while(cin>>a>>n>>b){    // method to get inputs till it ends
        solve(a,n,b);
    }
    
    return 0;
}