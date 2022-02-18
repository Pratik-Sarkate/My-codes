// https://www.codingninjas.com/codestudio/problems/mergesort-linked-list_630514



// Approach:   TC = O(n logn)	SC = O(logn)


node* findMid(node* head){
    
    node* slow = head;
    node* fast = head->next;
    
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return slow;
}

node* merge(node* &first, node* &second){
    if(first==NULL) return second;
    if(second==NULL) return first;
    
    if(first->data > second->data){
        return merge(second,first);
    }
    node* curr1 = first;
    node* next1 = first->next;
    node* curr2 = second;
    node* next2 = second->next;
    
    while(next1 != NULL && curr2 != NULL){
        
        if(curr1->data <= curr2->data && curr2->data <= next1->data){
            
            next2 = curr2->next;
            curr1->next = curr2;
            curr2->next = next1;
            
            curr2 = next2;
            curr1 = curr1->next;
            
        }else{
            
            curr1 = curr1->next;
            next1 = next1->next;
        }
    }
    
    if(next1 == NULL){
        curr1->next = curr2;
    }
    
    return first;
}

/* Below code is another way of mergin 2 sorted linked lists

Node* merge(Node* first, Node* second){

    if(first==NULL) return second;
    if(second==NULL) return first;
    
    Node* ans = new Node(-1);
    Node* temp = ans;
    
    while(first != NULL && second != NULL){
        
        if(first->data <= second->data){
            temp->next = first;
            temp = temp->next;
            first = first->next;
        }else{
            temp->next = second;
            temp = temp->next;
            second = second->next;
        }
    }
    
    while(first != NULL){
        temp->next = first;
        temp = temp->next;
        first = first->next;
    }
    
    while(second != NULL){
        temp->next = second;
        temp = temp->next;
        second = second->next;
    }
    
    ans = ans->next;
    return ans;
    
}
*/


node* mergeSort(node *head) {
	
    // base case
    if(head==NULL || head->next == NULL) return head;
    
    // find mid of the linked list
    node* mid = findMid(head);
    
    
    // divide the list into 2 halves
    node* left = head;
    node* right = mid->next;
    mid->next = NULL;
    
    // Now sort the 2 lists formed
    
    left = mergeSort(left);
    right = mergeSort(right);
    
    // Merge the two sorted linked lists
    node* result = merge(left,right);
    
    return result;
}