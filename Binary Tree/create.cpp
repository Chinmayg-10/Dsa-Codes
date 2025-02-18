#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }

    
};
Node* createtree(){
        cout<<"Enter the value"<<endl;
        int val;
        cin>>val;

        if(val==-1){
            return NULL;
        }
        Node* root=new Node(val);

        //recursion
        cout<<"adding left child for:"<<val<<endl;
        root->left=createtree();
        cout<<"adding right child for:"<<val<<endl;
        root->right=createtree();

        return root;
    }

void preorder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    cout<<endl;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }

    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    cout<<endl;
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }

    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    cout<<endl;
}

void levelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;

    //initial state maintain
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
            //yaha par level complete hua hai
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        

        //fir print karalo
        cout<<front->data<<" ";

        //child ko kha jao
        if(front->left!=NULL){
            q.push(front->left);
        }
        else if(front->right!=NULL){
            q.push(front->right);
        }
    }
}
void rightToLeft(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    queue<Node*>q;

    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        cout<<front->data<<" ";
        if(front->right!=NULL){
            q.push(front->right);
        }
        if(front->left!=NULL){
            q.push(front->left);
        }
        
    }

    
}
int main(){
    Node* root;
    root=createtree();

    cout<<"printing root"<<" "<<root->data<<endl;
    rightToLeft(root);
    preorder(root);
    inorder(root);
}