// https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1/#


/** Approach:  TC = O(N)   SC = O(2^(height-1)) ~= O(N) **/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> result;
    	if(root==NULL){
    	    return result;
    	}
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(!q.empty()){
    	    
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    // level process
    	    for(int i = 0; i<size; i++){
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        // normal or reverse insertion
    	        int index = (leftToRight)? i:size-i-1;
    	        
    	        ans[index] = frontNode->data;
    	        
    	        
    	        if(frontNode->left){
    	            q.push(frontNode->left);
    	        }
    	        
    	        if(frontNode->right){
    	            q.push(frontNode->right);
    	        }
    	    }
    	    
    	    // change the direction
    	    leftToRight = !leftToRight;
    	    
    	    for(auto it: ans) result.push_back(it);
    	    
    	}
    	
    	return result;
    }
};