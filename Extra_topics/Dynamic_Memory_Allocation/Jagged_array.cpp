#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int row;cin>>row;

    int** arr = new int*[row];

    int* col = new int[row];

    for(int i = 0; i<row; i++){
        cin>>col[i];

        arr[i] = new int[col[i]];

        for(int j = 0; j<col[i]; j++){
            cin>>arr[i][j];
        }
    }


    for(int i = 0; i<row; i++){
        for(int j = 0; j<col[i]; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }



    for(int i = 0; i<row; i++){
        delete[] arr[i];  
    }

    delete[] arr;
    delete[] col;


/*
    
    Input:    
    3
    1 1
    2 1 2
    3 1 2 3

    Output:
    1 
    1 2 
    1 2 3 

*/

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