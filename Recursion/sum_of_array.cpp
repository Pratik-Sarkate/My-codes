#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int sum(int *a, int n){

    if(n==0) return 0;      // base case

    return a[0]+sum(a+1,n-1); // Recursion relation:  a[0] + (sum of next n-1 elements) 
}


int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    int n;cin>>n;
    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];
    cout<<sum(a,n)<<endl;
    
    return 0;
}