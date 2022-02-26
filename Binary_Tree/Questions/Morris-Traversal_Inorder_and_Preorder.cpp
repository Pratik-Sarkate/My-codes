/** TC = O(n)   SC = O(1) **/


class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};



/*  Print INORDER using Morris Traversal  */


void MorrisTraversal_Inorder(Node* root){

    Node* curr = root;

    while(curr!=NULL){

        // here we have two cases if left child is present or not

        if(curr->left == NULL){
            // left child not present so print move curr to right child
            cout<<curr->data<<" ";
            curr = curr->right;

        }else{

            // left child is present, so go to left child and thread its rightmost node to curr

            Node* prev = curr->left;

            while((prev->right != NULL)  &&  (prev->right != curr)){
                prev = prev->right;
            }

            if(prev->right == NULL){
                // it means node is not threaded so thread it to curr and then move curr to left so to travel to the leftmost node
                prev->right = curr;
                curr = curr->left;

            }else{
                // node is threaded to curr so remove threading and print the curr node and then move it to right

                prev->right = NULL;
                cout<<curr->data<<" ";
                curr = curr->right;
            }
        }
    }
}



/*  Print PREORDER using Morris Traversal  */


void MorrisTraversal_Preorder(Node* root){

    Node* curr = root;

    while(curr!=NULL){

        // here we have two cases if left child is present or not

        if(curr->left == NULL){
            // left child not present so print move curr to right child
            cout<<curr->data<<" ";
            curr = curr->right;

        }else{

            // left child is present, so go to left child and thread its rightmost node to curr

            Node* prev = curr->left;

            while((prev->right != NULL)  &&  (prev->right != curr)){
                prev = prev->right;
            }

            if(prev->right == NULL){
                // it means node is not threaded so thread it to curr, print the curr node and then move curr to left so to travel to the leftmost node
                prev->right = curr;
                cout<<curr->data<<" ";
                curr = curr->left;

            }else{
                // node is threaded to curr so remove threading and then move curr to right

                prev->right = NULL;
                curr = curr->right;
            }
        }
    }
}