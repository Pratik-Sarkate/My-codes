// https://practice.geeksforgeeks.org/problems/burning-tree/1

/** Approach: TC is O(N) for all the processing but map is used so it becomes-> O(n logn)
			thus TC = O(n logn)  SC = O(N)
**/

class Solution {
  public:
        
    // this function using BFS create mapping and return the target node
    Node* createMapping(Node* root, int target, map<Node*, Node*> &nodeToParent){
        
        Node* targetNode = NULL;
        queue<Node*> q;
        q.push(root);
        
        nodeToParent[root] = NULL;
        
        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            
            if(front->data==target){
                targetNode = front;
            }
            
            if(front->left){
                nodeToParent[front->left] = front;
                q.push(front->left);
            }
            
            if(front->right){
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        
        return targetNode;
    }
    
    // used BFS to burnt the tree
    int burnTree(Node* root,map<Node*, Node*> &nodeToParent){
        
        int ans = 0;
        map<Node*,bool> visited;
        
        queue<Node*> q;
        q.push(root);
        visited[root] = true; // since target node is already visited
        
        while(!q.empty()){
            
            bool flg = 0;
            int size = q.size();
            
            for(int i = 0; i<size; i++){
                
                // processing the neighbouring nodes
                
                Node* front = q.front();
                q.pop();
                
                // check for the left child
                if(front->left && visited[front->left]==0){
                    flg = 1;
                    visited[front->left] = 1;
                    q.push(front->left);
                }
                
                //  check for the right child
                if(front->right && visited[front->right]==0){
                    flg = 1;
                    visited[front->right] = 1;
                    q.push(front->right);
                }
                
                // check for the parent
                if(nodeToParent[front] && visited[nodeToParent[front]]==0){
                    flg = 1;
                    visited[nodeToParent[front]] = 1;
                    q.push(nodeToParent[front]);
                }
                
            }
            
            if(flg) ans++;
        }
        
        return ans;
        
    }
    
    int minTime(Node* root, int target) 
    {
        // algo:
        // 1. create node to parent mapping
        // 2. find the target node
        // 3. burn the tree in minimum time
        
        map<Node*, Node*> nodeToParent;
        
        Node* targetNode = createMapping(root,target,nodeToParent);
        
        return burnTree(targetNode, nodeToParent);
    }
};