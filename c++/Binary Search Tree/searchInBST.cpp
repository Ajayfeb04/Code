//TC= o(log base 2 n)

#include <iostream>
#include<climits>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int v)
    {
        value = v;
        right = left = NULL;
    }
};
class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
};
void insertBST(Node *&root, int value)
{
    Node *newNode = new Node(value);
    if (root == NULL)
    {
        root = newNode;
        return;
    }
    Node *current = root;
    while (true)
    {
        if (current->value > value)
        {
            if (current->left == NULL)
            {
                current->left = newNode;
                return;
            }
            current = current->left;
        }
        else
        {
            if (current->right == NULL)
            {
                current->right = newNode;
                return;
            }
            current = current->right;
        }
    }
}
     bool searchBST(Node* root, int key){
        if(root == NULL){
            cout<< "Given element is not present in this binary search tree"<<endl;
           // return false;
        }
        if(root->value == key){
            cout<< "Given element is present in this binary search tree"<<endl;
            //return true;
        }
        if(root->value < key){
            return searchBST(root->right, key);
        }
        if(root->value > key){
            return searchBST(root->left, key);
        }
    }

    // int searchBST(Node* root, int key){
    //     if(root == NULL){
    //         cout<< "Given element is not present in this binary search tree"<<endl;
    //         return INT_MIN;
    //         //return false;
    //     }
    //     if(root->value == key){
    //         cout<< "Given element is present in this binary search tree"<<endl;
    //         return INT_MIN;
    //         // return true;
    //     }
    //     if(root->value < key){
    //         return searchBST(root->right, key);
    //     }
    //     if(root->value > key){
    //         return searchBST(root->left, key);
    //     }
    // }

void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}
int main()
{
    BST bst1;
    insertBST(bst1.root, 3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);
    inorderTraversal(bst1.root);
    cout<<endl;
    cout<<searchBST(bst1.root, 5)<<endl;
    // Node* root = NULL;
    // insertBST(root, 3);
    // insertBST(root, 1);
    // insertBST(root, 4);
    // insertBST(root, 6);
    // insertBST(root, 2);
    //  inorderTraversal(root);

    return 0;
}