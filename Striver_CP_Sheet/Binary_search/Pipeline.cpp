// https://codeforces.com/contest/287/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n,k;cin>>n>>k;

    if(((k-1)*k)/2ll < n-1){
        cout<<-1<<endl;
        return;
    }
    ll s = 0, e = k-1;
    ll mid, ans = 0;   // here mid is the total no of element to include from last ie 2 , 4 , 10 elements from the last should be added or not

    while(s<=e){
        mid = s + (e-s)/2ll;

        ll total_pipes = ((mid)*(k-1 + (k-mid)))/2ll;

        if(total_pipes >= n-1){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }

    }

    cout<<ans<<endl;
}

/*

<---------OR---------->


void solve(){
    ll n,k;cin>>n>>k;

    if(((k-1)*k)/2ll + 1 < n){
        cout<<-1<<endl;
        return;
    }
    ll s = 0, e = k;
    ll mid, ans = 0;   // here mid is the lowest number of the set ie (mid , mid + 1, mid + 2 , ..... , k)

    while(s<=e){
        mid = s + (e-s)/2ll;

        ll nums = k-mid;

        ll total_pipes = (nums*(mid + k-1))/2ll + 1;


        if(total_pipes >= n){
            ans = nums;
            s = mid + 1;
        }else{
            e = mid - 1;
        }

    }

    cout<<ans<<endl;
}
*/


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


/*
    
    k = 3 n = 4;

    (k-1)*k/2 = (3-1)*2 = 3 (2+1) - 1 (k-mid) [3-2] = 2;

    lo = 2, hi = 3, mid = 2

    3 2
*/