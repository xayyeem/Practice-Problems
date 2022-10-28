#include <bits/stdc++.h>
using namespace std ;

struct bin_searchTreeNode
{
    int data ;
    struct bin_searchTreeNode *left ;
    struct bin_searchTreeNode *right ;
} ;

// A utility function to create a new BST node
struct bin_searchTreeNode *createNode(int val)
{
    struct bin_searchTreeNode *newNode = (struct bin_searchTreeNode *)malloc(sizeof(struct bin_searchTreeNode));

    if (newNode == NULL)
        return NULL;

    return newNode;
}

// A utility function to do 
// inorder traversal of BST
void inOrder(struct bin_searchTreeNode *root)
{
    if(root != NULL)
    {
        inOrder(root->left) ;
        printf("%d " , root->data) ;
        inOrder(root->right) ;
    }
}

struct bin_searchTreeNode *inOrderSucc(struct bin_searchTreeNode *root )
{   
    root = root->right ;

    while(root->left != NULL)
    {
        root = root->left ;
    }

    return root ;
}


/* A utility function to 
insert a new node with given key in
 * BST */
struct bin_searchTreeNode* insert(struct bin_searchTreeNode* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return createNode(key);
  
    /* Otherwise, recur down the tree */
    if (key < node->data)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
  
    /* return the (unchanged) node pointer */
    return node;
}

/* Given a binary search tree and a key, this function
deletes the key and returns the new root */
struct bin_searchTreeNode *deleteNode(struct bin_searchTreeNode *root , int key)
{
    struct bin_searchTreeNode *iSucc ; 

    if(root ==NULL)
    return NULL ;

    if(root->left == NULL && root->right == NULL)
    {
        free(root) ;

        return NULL ;
    }

    if(root->data < key)
    {   
        root->right = deleteNode(root->right , key) ;
    }

    else if(root->data > key) root->left = deleteNode(root->left , key) ;

    else
    {
        iSucc = inOrderSucc(root) ;
        root->data = iSucc->data ;
        root->right = deleteNode(root->right , key) ;
    }
    
    return root ;

}

int main()
{
    struct bin_searchTreeNode* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
  
    cout << "Inorder traversal of the given tree \n";
    inOrder(root);
  
    cout << "\nDelete 20\n";
    root = deleteNode(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    inOrder(root);
  
    cout << "\nDelete 30\n";
    root = deleteNode(root, 30);
    cout << "Inorder traversal of the modified tree \n";
    inOrder(root);
  
    cout << "\nDelete 50\n";
    root = deleteNode(root, 50);
    cout << "Inorder traversal of the modified tree \n";
    inOrder(root);
  
    return 0;
}