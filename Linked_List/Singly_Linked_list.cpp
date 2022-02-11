#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


// Inserting 

// 1. Inserting node at Head

class Node{

public:
    int data;
    Node* next;


    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void insertAtHead(Node* &head, int d){

    // create a new node

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


void print(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void solve(){
    
    // creating a first node
    Node* node1 = new Node(10);
    // cout<<node1->data<<" "<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,15);
    print(head);

/*
    Output:
    10 
    12 10 
    15 12 10         

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


/***********************************************************/



// 2. Inserting node at Tail

class Node{

public:
    int data;
    Node* next;


    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void insertAtHead(Node* &head, int d){

    // create a new node

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    // create a new node

    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    // OR tail = tail->next;
}


void print(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void solve(){
    
    // creating a first node
    Node* node1 = new Node(10);
    // cout<<node1->data<<" "<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

/*
    Output:
    10 
    10 12 
    10 12 15       

*/
}


/*******************/

// 3. Inserting node at a position

class Node{

public:
    int data;
    Node* next;


    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void insertAtHead(Node* &head, int d){

    // create a new node

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    // create a new node

    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    // OR tail = tail->next;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    // insert at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }


    // insert at end

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }


    // creating node to insert
    
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void print(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void solve(){
    
    // creating a first node
    Node* node1 = new Node(10);
    // cout<<node1->data<<" "<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail,3,22);
    print(head);

/*
    Output:
    10 
    10 12 
    10 12 15 
    10 12 22 15   --> here 22 is added at pos 3   

*/
}


/***********************************************************/
// 2. Traversal (discussed in print function)

// 3. Deleting a node

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
    // No need to write this, here it is written just to explain how it works while freeing the memory

    ~Node(){
        int value = this->data;

        // memory freed
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is free for node with data = "<<value<<endl;
    }
};


void insertAtHead(Node* &head, int d){

    // create a new node

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    // create a new node

    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    // OR tail = tail->next;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    // insert at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }


    // insert at end

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }


    // creating node to insert
    
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void deleteNode(Node* &head, Node* &tail, int position){

    // for deleting the first or starting node
    if(position==1){
        Node* temp = head;
        head = head->next;

        // memory free for start node
        temp->next = NULL;
        delete temp;
    }
    else
    { // for deleting the middle or last node

        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // correcting position of tail when last element is deleted
        if(curr->next == NULL){
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void solve(){
    
    // creating a first node
    Node* node1 = new Node(10);
    // cout<<node1->data<<" "<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail,4,22);
    print(head);

    cout<<"Head = "<<head->data<<endl;
    cout<<"Tail = "<<tail->data<<endl;

    
    deleteNode(head,tail,4);
    print(head);

    cout<<"Head = "<<head->data<<endl;
    cout<<"Tail = "<<tail->data<<endl;


/*
    Output:
    10 
    10 12 
    10 12 15 
    10 12 15 22 
    Head = 10
    Tail = 22
    Memory is free for node with data = 22
    10 12 15 
    Head = 10
    Tail = 15

*/
}