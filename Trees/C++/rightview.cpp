//Problem Link : https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void rightview(Node* root){
     if(root==NULL){
         return;
     }
     queue <Node*> q;
     q.push(root);
     while(!q.empty()){
         int n=q.size();
         for(int i=0;i<n;i++){
             Node* curr = q.front();
             q.pop();
             if(i==n-1){
                 cout<<curr->data;
             }
             if(curr->left!=NULL){
                 q.push(curr->left);
             }
             if(curr->right!=NULL){
                 q.push(curr->right);
             }
         }
     }
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
   
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

      rightview(root);

    return 0;
}
//Example 1:

// Input:
//        1
//     /    \
//    3      2
// Output: 1 2
// Example 2:

// Input:
//      10
//     /   \
//   20     30
//  /   \
// 40  60 
// Output: 10 30 60
