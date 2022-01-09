// https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/


/* Eg:
				n items:  				3
				Values:					60 100 120
				Weights:				10 20 30
				Max capacity(weight):	50

	Output: 220
*/

// Time complexity: O (2^n)		Space Complexity: O (1)

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int knapsack(vector<int> &value, vector<int> &weight, int w, int n){

    if(n==value.size()){
        return 0;
    }

    if(weight[n]>w){ //skip this weight and go for the next one
        return knapsack(value,weight,w,n+1);
    }


    int a1 = value[n] + knapsack(value,weight,w-weight[n],n+1); // include
    int a2 = knapsack(value,weight,w,n+1); //not include

    return max(a1,a2);
}

void solve(){
    int n;cin>>n;
    vector<int> value(n), weight(n);
    for(int i = 0; i<n; i++){
        cin>>value[i];
    }
    for(int i = 0; i<n; i++){
        cin>>weight[i];
    }
    int w;cin>>w;

    cout<<knapsack(value,weight,w,0);


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