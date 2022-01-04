#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


bool linearsearch(int *a, int n, int key){

    if(n==0) return false;

    if(a[0]==key) return true;
    else return linearsearch(a+1,n-1,key);
}


int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    int n,key;cin>>n>>key;
    int a[n];

    for(int i = 0; i<n; i++) cin>>a[i];
    
    if(linearsearch(a,n,key)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    
    return 0;
}