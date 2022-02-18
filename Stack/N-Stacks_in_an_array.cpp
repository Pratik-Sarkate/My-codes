// https://www.codingninjas.com/codestudio/problems/n-stacks-in-an-array_1164271

class NStack
{
public:
    
    int *arr;
    int *top;
    int *next;
    
    int n,s;
    int freespot;
    
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        // initialize top
        for(int i = 0; i<n; i++){
            top[i] = -1;
        }
        
        // initialize next
        for(int i = 0; i<s; i++){
            next[i] = i+1;
        }
        
        //update last element of next to -1 as not element present after it
        next[s-1] = -1;
        
        // initialize freespot
        freespot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // check overflow condition
        if(freespot==-1){
            return false;
        }
        
        // find index
        int index = freespot;
        
        // update freespot
        freespot = next[index];
        
        // insert the element in the arr
        arr[index] = x;
        
        // update next (to element below top)
        next[index] = top[m-1];
        
        // update top
        top[m-1] = index;
        
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // check underflow condition
        if(top[m-1]==-1){
            return -1;
        }
        
        int index = top[m-1];
        
        top[m-1] = next[index];
        
        next[index] = freespot;
        
        freespot = index;
        
        return arr[index];
    }
};