#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int binarysearch(int *a, int s, int e, int key){

    int mid = s + (e-s)/2;

    if(s>e) return -1;

    if(a[mid]==key) return mid;
    else if(a[mid]>key) return binarysearch(a,s,mid-1,key);
    else return binarysearch(a,mid+1,e,key);
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
    int s = 0, e = n-1;
    int ind = binarysearch(a,s,e,key);
    if(ind>=0) cout<<"Found at index: "<<ind<<endl;
    else cout<<"Not found"<<endl;
    
    return 0;
}