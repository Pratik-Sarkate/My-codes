// https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1#

/* Approach 1: TC = O(n^2)   SC = O(n) 

	Step 1: create a normal cloned list with next pointer

	Step 2: Using for loop to traverse for each node and then in it while loop to find how much far is the random node from the present node.
			Then connect the random node 	

*/


// Approach 2:  TC = O(n)   SC = O(n)

class Solution
{
    
    private:
    
    void insertAtTail(Node* &head, Node* &tail, int d){
        
        Node* newNode = new Node(d);
        
        // if list is empty
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }else{
            
            tail->next = newNode;
            tail = newNode;
        }
        
        
    }
    public:
    Node *copyList(Node *head)
    {
        // step 1: Create a clone
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL){
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp = temp->next;
        }
        
        
        // step 2: create a mapping
        
        unordered_map<Node*, Node*> oldToNew;
        
        Node* oldNode = head;
        Node* cloneNode = cloneHead;
        
        while(oldNode!=NULL){
            oldToNew[oldNode] = cloneNode;
            oldNode = oldNode->next;
            cloneNode = cloneNode->next;
        }
        
        
        // step 3: insert the mapping in the clone node
        
        oldNode = head;
        cloneNode = cloneHead;
        
        while(oldNode != NULL){
            cloneNode->arb = oldToNew[oldNode->arb];
            oldNode = oldNode->next;
            cloneNode = cloneNode->next;
        }
        
        
        return cloneHead;
        
        
    }

};


/***************************/


// Approach 3:  TC = O(n)   SC = O(1)

class Solution
{
    private:
    
    void insertAtTail(Node* &head, Node* &tail, int d){
        
        Node* newNode = new Node(d);
        
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }else{
            
            tail->next = newNode;
            tail = tail->next;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        // step 1: Create a clone list
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL){
            
            insertAtTail(cloneHead,cloneTail,temp->data);
            
            temp = temp->next;
        }
        
        // step 2: cloneNodes add in between original node
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL){
            
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
        
        // step 3: copying random pointer in clone nodes
        
        temp = head;
        
        while(temp != NULL){
            
            if(temp->next != NULL)  temp->next->arb = (temp->arb != NULL)? temp->arb->next: temp->arb;
            
            temp = temp->next->next;
        }
        
        // step 4: revert changes done in step 2
        
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL){
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            
            if(originalNode != NULL) cloneNode->next = originalNode->next;
            cloneNode = cloneNode->next;
        }
        
        // step 5: return the cloneHead
        
        return cloneHead;
        
    }

};