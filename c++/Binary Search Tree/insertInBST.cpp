//TC-avg = log base 2 n and worst case TC=O(n)

#include <iostream>
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
    // Node* root = NULL;
    // insertBST(root, 3);
    // insertBST(root, 1);
    // insertBST(root, 4);
    // insertBST(root, 6);
    // insertBST(root, 2);
    //  inorderTraversal(root);

    return 0;
}

// RECURSIVE WAY
// #include <iostream>
// using namespace std;
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int value;
//     Node *left;
//     Node *right;
//     Node(int v)
//     {
//         value = v;
//         right = left = NULL;
//     }
// };
// class BST
// {
// public:
//     Node *root;
//     BST()
//     {
//         root = NULL;
//     }
// };
// Node *insertBST(Node *root, int val)
// {
//     if (root == NULL)
//     {
//         Node *newNode = new Node(val);
//         return newNode;
//     }
//     if (root->value > val)
//     {
//         root->left = insertBST(root->left, val);
//     }
//     else if (root->value < val)
//     {
//         root->right = insertBST(root->right, val);
//     }
//     return root;
// }
// void inorderTraversal(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorderTraversal(root->left);
//     cout << root->value << " ";
//     inorderTraversal(root->right);
// }
// int main()
// {
//     // BST bst1;
//     // bst1.root = insertBST(bst1.root, 3);
//     // insertBST(bst1.root, 1);
//     // insertBST(bst1.root, 4);
//     // insertBST(bst1.root, 6);
//     // insertBST(bst1.root, 2);
//     // inorderTraversal(bst1.root);
//         Node* root = NULL;
//        root = insertBST(root, 3);
//         insertBST(root, 1);
//         insertBST(root, 4);
//         insertBST(root, 6);
//         insertBST(root, 2);
//          inorderTraversal(root);

//     return 0;
// }
