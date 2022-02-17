#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


class Stack{

public:

    // properties

    int *arr;
    int top;
    int size;

    // behaviour or methods
    

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }


    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }


};


void solve(){
    
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);        // will overflow here as size is exceeding 5

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }

/*
    Output:
    Stack Overflow
    43
    22
    44
    43
    Stack is not Empty mere dost 

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