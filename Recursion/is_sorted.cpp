#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int is_sorted(int *a, int n){

    if(n<=1) return true;

    if(a[0]>a[1]){
        return false;
    }else{
        return is_sorted(a+1,n-1);
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
    int n;cin>>n;
    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];
    
    if(is_sorted(a,n)) cout<<"Sorted"<<endl;
    else cout<<"Not sorted"<<endl;
    
    return 0;
}