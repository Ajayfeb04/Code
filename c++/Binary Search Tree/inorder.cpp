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
void inorderTraversal(Node* rootNode){
    if(rootNode == NULL){
        return ;
    }
    inorderTraversal(rootNode->left);
    cout<<rootNode->value<<" ";
    inorderTraversal(rootNode->right);
}
int main (){
    Node* rootNode = new Node(5);
    rootNode->left = new Node(3);
    rootNode->right = new Node(7);
    rootNode->left->left = new Node(1);
    rootNode->left->right = new Node(4);
    rootNode->right->left = new Node(6);
    inorderTraversal(rootNode);
    return 0;
}