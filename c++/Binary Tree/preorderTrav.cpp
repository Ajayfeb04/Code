#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left; 
    Node* right;
    Node(int v){
        value = v;
        left=right=NULL;
    }
};
void preorderTraversal(Node* rootNode){
    if(rootNode == NULL){
        return ;
    }
    cout<<rootNode->value<<" ";
    preorderTraversal(rootNode->left);
    preorderTraversal(rootNode->right);
}
int main (){
    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->left->left = new Node(7);
    rootNode->left->left->right = new Node(13);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(12);
    rootNode->right->left = new Node(12);
    preorderTraversal(rootNode);
    return 0;
}