#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


/*** Insertion in Doubly Linked List ***/

/* 1. Insert Node at Head */

class Node{

public:
    int data;
    Node* prev;
    Node* next;

    // constructor

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};


/* Insert Node at Head */

void insertAtHead(Node* &head, Node* &tail, int d){


    // in case of empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}



/* Traversal or print */

void print(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



/* Length of the Doubly Linked list*/

int getLength(Node* &head){

    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }

    return len;
}

void solve(){
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head,tail,11);
    print(head);

    insertAtHead(head,tail,13);
    print(head);

    insertAtHead(head,tail,8);
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

/*
    Output:
    10 
    11 10 
    13 11 10 
    8 13 11 10 
    head = 8
    tail = 10

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


/*****************************************************/

/* 2. Insert Node at Tail */

class Node{

public:
    int data;
    Node* prev;
    Node* next;

    // constructor

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};


/* Insert Node at Head */

void insertAtHead(Node* &head, Node* &tail, int d){


    // in case of empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}



/* Insert Node at Tail */

void insertAtTail(Node* &head, Node* &tail, int d){

    // in case of empty list
    if(tail==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}



/* Traversal or print */

void print(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



/* Length of the Doubly Linked list*/

int getLength(Node* &head){

    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }

    return len;
}

void solve(){
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head,tail,11);
    print(head);

    insertAtHead(head,tail,13);
    print(head);

    insertAtHead(head,tail,8);
    print(head);

    insertAtTail(head,tail,25);
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

/*
    Output:
    10 
    11 10 
    13 11 10 
    8 13 11 10 
    8 13 11 10 25 
    head = 8
    tail = 25

*/
}


/***********************/

/* 3. Insert Node at a position */

class Node{

public:
    int data;
    Node* prev;
    Node* next;

    // constructor

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};


/* Insert Node at Head */

void insertAtHead(Node* &head, Node* &tail, int d){


    // in case of empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}



/* Insert Node at Tail */

void insertAtTail(Node* &head, Node* &tail, int d){

    // in case of empty list
    if(tail==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}




/* Insert Node at a position */

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    // insert at start
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        cnt++;
        temp = temp->next;
    }

    // inserting at last position
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}


/* Traversal or print */

void print(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



/* Length of the Doubly Linked list*/

int getLength(Node* &head){

    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }

    return len;
}

void solve(){
    
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insertAtHead(head,tail,11);
    print(head);

    insertAtHead(head,tail,13);
    print(head);

    insertAtHead(head,tail,8);
    print(head);

    insertAtTail(head,tail,25);
    print(head);

    insertAtPosition(head,tail,2,100);
    print(head);

    insertAtPosition(head,tail,1,101);
    print(head);

    insertAtPosition(head,tail,7,102);
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

/*
    Output:
        --> here the list is empty
    11 
    13 11 
    8 13 11 
    8 13 11 25 
    8 100 13 11 25 
    101 8 100 13 11 25 
    101 8 100 13 11 25 102 
    head = 101
    tail = 102

*/
}


/******************************************************/


/*** Deletion of node in Doubly LL ***/

class Node{

public:
    int data;
    Node* prev;
    Node* next;

    // constructor

    Node(int d){
        this->data = d;
        this->prev = NULL;
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


/* Insert Node at Head */

void insertAtHead(Node* &head, Node* &tail, int d){


    // in case of empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}



/* Insert Node at Tail */

void insertAtTail(Node* &head, Node* &tail, int d){

    // in case of empty list
    if(tail==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}




/* Insert Node at a position */

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    // insert at start
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        cnt++;
        temp = temp->next;
    }

    // inserting at last position
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}



/* Delete node */

void deleteNode(Node* &head, Node* &tail, int position){

    // deleting first or start node
    if(position==1){

        Node* temp = head;
        temp->next->prev = NULL;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle or end node

        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){

            prev = curr;
            curr = curr->next;
            cnt++;
        }


        if(curr==tail){
            tail = curr->prev;
        }

        // fixing prev ptr of element next to curr
        if(curr->next != NULL){
            curr->next->prev = curr->prev;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


/* Traversal or print */

void print(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



/* Length of the Doubly Linked list*/

int getLength(Node* &head){

    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }

    return len;
}

void solve(){
    
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insertAtHead(head,tail,11);
    print(head);

    insertAtHead(head,tail,13);
    print(head);

    insertAtHead(head,tail,8);
    print(head);

    insertAtTail(head,tail,25);
    print(head);

    insertAtPosition(head,tail,2,100);
    print(head);

    insertAtPosition(head,tail,1,101);
    print(head);

    insertAtPosition(head,tail,7,102);
    print(head);


    deleteNode(head,tail,7);
    print(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

/*
    Output:
        --> here the list is empty 
    11 
    13 11 
    8 13 11 
    8 13 11 25 
    8 100 13 11 25 
    101 8 100 13 11 25 
    101 8 100 13 11 25 102 
    Memory is free for node with data = 102
    101 8 100 13 11 25 
    head = 101
    tail = 25

*/
}