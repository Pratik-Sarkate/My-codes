/** Binary Tree  **/


// Level Order Traversal

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;



class node{
public:
    int data;
    node* left;
    node* right;


    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node* buildTree(node* root){

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data==-1) return NULL;

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}


void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL); // This is used as a separator to give output of each level on new line

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            // purana level complete ho chuka hai

            cout<<endl; // print new line

            if(!q.empty()){ // to check if the queue has still some child nodes

                q.push(NULL); // added so that when it is encountered in the queue new line is printed as it indicates end of the level
            }

        }
        else{

            cout<<temp->data<<" ";

            if(temp->left){ // check if left part is not NULL, and if not add the node in queue

                q.push(temp->left);
            }

            if(temp->right){ // check if right part is not NULL, and if not add the node in queue
                q.push(temp->right);
            }
        }
    }

}


void solve(){
    
    node* root = NULL;
    
    //creating a Tree
    root = buildTree(root);

    //INPUT: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    //level order
    cout << "Printing the level order traversal output " << endl;
    levelOrderTraversal(root);

/*

                     1
                  /     \
                3        5
               / \       / \
             7    11    17  -1
            / \  / \    /\     
          -1 -1 -1 -1 -1 -1
          
    Input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    Output:
    Enter the data: 
    Enter data for inserting in left of 1
    Enter the data: 
    Enter data for inserting in left of 3
    Enter the data: 
    Enter data for inserting in left of 7
    Enter the data: 
    Enter data for inserting in right of 7
    Enter the data: 
    Enter data for inserting in right of 3
    Enter the data: 
    Enter data for inserting in left of 11
    Enter the data: 
    Enter data for inserting in right of 11
    Enter the data: 
    Enter data for inserting in right of 1
    Enter the data: 
    Enter data for inserting in left of 5
    Enter the data: 
    Enter data for inserting in left of 17
    Enter the data: 
    Enter data for inserting in right of 17
    Enter the data: 
    Enter data for inserting in right of 5
    Enter the data: 
    Printing the level order traversal output 
    1 
    3 5 
    7 11 17 


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


/********************************************************************/


/* Inorder - (LNR)
   Preorder- (NLR)
   Postorder-(LRN)
*/


class node{
public:
    int data;
    node* left;
    node* right;


    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node* buildTree(node* root){

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data==-1) return NULL;

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}


void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL); // This is used as a separator to give output of each level on new line

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            // purana level complete ho chuka hai

            cout<<endl; // print new line

            if(!q.empty()){ // to check if the queue has still some child nodes

                q.push(NULL); // added so that when it is encountered in the queue new line is printed as it indicates end of the level
            }

        }
        else{

            cout<<temp->data<<" ";

            if(temp->left){ // check if left part is not NULL, and if not add the node in queue

                q.push(temp->left);
            }

            if(temp->right){ // check if right part is not NULL, and if not add the node in queue
                q.push(temp->right);
            }
        }
    }

}



void inorder(node* root){

    // base case
    if(root==NULL) return;

    inorder(root->left);    // L
    cout<<root->data<<" ";  // N
    inorder(root->right);   // R

}

void preorder(node* root){

    // base case
    if(root==NULL) return;

    cout<<root->data<<" ";  // N
    preorder(root->left);    // L
    preorder(root->right);   // R
    
}

void postorder(node* root){

    // base case
    if(root==NULL) return;

    postorder(root->left);    // L
    postorder(root->right);   // R
    cout<<root->data<<" ";  // N
    
}


void solve(){
    
    node* root = NULL;
    
    //creating a Tree
    root = buildTree(root);

    //INPUT: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    //level order
    cout << "Printing the level order traversal output " << endl;
    levelOrderTraversal(root);


    // inorder
    cout << "inorder traversal is:  ";
    inorder(root); 

    // preorder
    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    //postorder
    cout << endl << "postorder traversal is:  ";
    postorder(root); 

/*

                     1
                  /     \
                3        5
               / \       / \
             7    11    17  -1
            / \  / \    /\     
          -1 -1 -1 -1 -1 -1

    Input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    Output:
    Enter the data: 
    Enter data for inserting in left of 1
    Enter the data: 
    Enter data for inserting in left of 3
    Enter the data: 
    Enter data for inserting in left of 7
    Enter the data: 
    Enter data for inserting in right of 7
    Enter the data: 
    Enter data for inserting in right of 3
    Enter the data: 
    Enter data for inserting in left of 11
    Enter the data: 
    Enter data for inserting in right of 11
    Enter the data: 
    Enter data for inserting in right of 1
    Enter the data: 
    Enter data for inserting in left of 5
    Enter the data: 
    Enter data for inserting in left of 17
    Enter the data: 
    Enter data for inserting in right of 17
    Enter the data: 
    Enter data for inserting in right of 5
    Enter the data: 
    Printing the level order traversal output 
    1 
    3 5 
    7 11 17 
    inorder traversal is:  7 3 11 1 17 5 
    preorder traversal is:  1 3 7 11 5 17 
    postorder traversal is:  7 11 3 17 5 1 

*/

}


/*********************************************************************/



/* Build tree from level order traversal */


class node{
public:
    int data;
    node* left;
    node* right;


    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node* buildTree(node* root){

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data==-1) return NULL;

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}


void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL); // This is used as a separator to give output of each level on new line

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            // purana level complete ho chuka hai

            cout<<endl; // print new line

            if(!q.empty()){ // to check if the queue has still some child nodes

                q.push(NULL); // added so that when it is encountered in the queue new line is printed as it indicates end of the level
            }

        }
        else{

            cout<<temp->data<<" ";

            if(temp->left){ // check if left part is not NULL, and if not add the node in queue

                q.push(temp->left);
            }

            if(temp->right){ // check if right part is not NULL, and if not add the node in queue
                q.push(temp->right);
            }
        }
    }

}



void inorder(node* root){

    // base case
    if(root==NULL) return;

    inorder(root->left);    // L
    cout<<root->data<<" ";  // N
    inorder(root->right);   // R

}

void preorder(node* root){

    // base case
    if(root==NULL) return;

    cout<<root->data<<" ";  // N
    preorder(root->left);    // L
    preorder(root->right);   // R
    
}

void postorder(node* root){

    // base case
    if(root==NULL) return;

    postorder(root->left);    // L
    postorder(root->right);   // R
    cout<<root->data<<" ";  // N
    
}


void buildFromLevelOrder(node* &root){

    queue<node*> q;
    cout<<"Enter data for root: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}


void solve(){
    
    node* root = NULL;
    
    // INPUT: 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    
    buildFromLevelOrder(root);
    levelOrderTraversal(root);


/*

                     1
                  /     \
                3        5
               / \       / \
             7    11    17  -1
            / \  / \    /\     
          -1 -1 -1 -1 -1 -1

    Input: 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    Output:
    Enter data for root: 
    Enter left node for: 1
    Enter right node for: 1
    Enter left node for: 3
    Enter right node for: 3
    Enter left node for: 5
    Enter right node for: 5
    Enter left node for: 7
    Enter right node for: 7
    Enter left node for: 11
    Enter right node for: 11
    Enter left node for: 17
    Enter right node for: 17
    1 
    3 5 
    7 11 17 

*/

}