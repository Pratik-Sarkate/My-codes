// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/a-simple-task/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int euclid_gcd(int a, int b){
    if(b==0) return a;

    return euclid_gcd(b,a%b);
}

void solve(){

    /* 
        a[1] - a[0] = d  
        a[0] + d = a[1]

        taking mod k on both sides

        a[0]%k + d%k = a[1]%k  

        but according to ques we want, a[0]%k = a[1]%k

        therefore,
        d%k = 0;

        hence we want to find all the divisors of d
        and also the divisor commom to all the difference between all the elements will be our ans.

        To find the common divisor, gcd of all the difference will be our required 'd'
    */
    
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    int d = a[1] - a[0];

    for(int i = 2; i<n; i++){
        d = euclid_gcd(d, a[i]-a[i-1]);
    }

    vector<int> div;
    for(int i = 2; i*i<=d; i++){
        if(d%i==0){
            div.push_back(i);
            if(i*i!=d) div.push_back(d/i);
        }
    }
    div.push_back(d);
    sort(div.begin(), div.end());

    for(auto it: div){
        cout<<it<<" ";
    }
    cout<<endl;

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