//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> p;
void helper(queue<int> &q){
    
    
    if(q.empty()) return;
   
        int num = q.front();
        q.pop();
        helper(q);
        p.push(num);
}

queue<int> rev(queue<int> q)
{
    // add code here.
    helper(q);
    while(!p.empty()){
        int num = p.front();
        p.pop();
        q.push(num);
        
    }
    
    return q;
}