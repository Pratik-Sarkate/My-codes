#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


class Node{

public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;

        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is free for node with data = "<<value<<endl;
    }
};



/** Insertion **/

void insertNode(Node* &tail, int element, int d){

    // empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }else{
        // non empty list
        // assuming element is present in the list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        // element is found and curr is representing the element's node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }  

}




/** Deletion **/

void deleteNode(Node* & tail, int value){

    // empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }else{

        // non-empty list
        // assuming that "value" is present in the list

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        // 1 node list
        if(curr==prev){
            tail = NULL;
        }

        // >=2 node list
        else if(curr==tail){
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}



/** Travesal **/

void print(Node* tail){

    // empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    Node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);

    cout<<endl;
    
}


void solve(){
    
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    insertNode(tail,3,4);
    print(tail);


    deleteNode(tail,3);
    print(tail);

/*
    Output:
    3 
    3 5 
    3 5 7 
    3 5 7 9 
    3 5 6 7 9 
    3 5 6 7 9 10 
    3 4 5 6 7 9 10 
    Memory is free for node with data = 3
    10 4 5 6 7 9 

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
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}