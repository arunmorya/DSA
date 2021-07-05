#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};
Node* insert(Node* root,int d){
    Node* n=NULL;
    if(root==NULL){
        n=new Node();
        n->data=d;
        n->left=n->right=NULL;
        return n;
    }
    if(root->data>d)
    root->left=insert(root->left,d);
    else if(root->data<d)
    root->right=insert(root->right,d);

return root;
}
void inorder(Node* t){
    if(t){
    inorder(t->left);    
    cout<<t->data<<" ";
    inorder(t->right);
    }
}
void preorder(Node* t){
    if(t){
    cout<<t->data<<" ";
    preorder(t->left);    
    preorder(t->right);
    }
}
void postorder(Node* t){
    if(t){
    postorder(t->left);    
    postorder(t->right);
    cout<<t->data<<" ";
    }
}
int main(){
    Node* root=NULL;
    //root=insert(root,50);
    root=insert(root,25);
    insert(root,15);
    insert(root,50);
    insert(root,10);
    insert(root,22);
    insert(root,35);
    insert(root,70); 
    insert(root,4);
    insert(root,12);
    insert(root,18);
    insert(root,24);
    insert(root,31);
    insert(root,44);
    insert(root,66); 
    insert(root,90);
    cout<<"preorder\n"; 
    preorder(root);
    cout<<"\ninorder\n";
    inorder(root);  
    cout<<"\npostorder\n";
    postorder(root);  
}