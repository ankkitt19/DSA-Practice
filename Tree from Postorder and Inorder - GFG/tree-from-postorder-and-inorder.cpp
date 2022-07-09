// { Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
 Node* solve(int in[],int post[],int &index,int inorderstart,int inorderend,int n,unordered_map<int,int> &mp){
        if(index<0 or inorderstart>inorderend){
            return NULL;
        }
        int element=post[index--];
        Node* root=new Node(element);
        int position =mp[element];
        root->right=solve(in,post,index,position+1,inorderend,n,mp);
        root->left=solve(in,post,index,inorderstart,position-1,n,mp);
       
        return root;
    }
    //   void mappping(int in[],int n, unordered_map<int,int> &mp){
        
    // }
   Node *buildTree(int in[], int post[], int n) 
    {  
        unordered_map<int,int> mp;
        int posind=n-1;
        // mappping(in,n,mp);
        for(int i=0;i<n;i++){
            mp[in[i]]=i;
        }
        Node* ans=solve(in,post,posind,0,n-1,n,mp);
        return ans;
    }
// Node *buildTree(int in[], int post[], int n) {
//     // Your code here
// }
