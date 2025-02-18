#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int val) {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

// Properly inserts a node into the BST and returns the updated root
Node* Buildbst(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = Buildbst(root->left, val);
    } else {
        root->right = Buildbst(root->right, val);
    }
    return root;
}

// Creates a BST from user input
Node* CreateTree() {
    //for the creation of root node
    cout << "Enter the values of nodes (enter -1 to stop):" << endl;
    int val;
    cin >> val;

    Node* root = NULL;
    while (val != -1) {
        root = Buildbst(root, val);
        cout << "Enter the next value:" << endl;
        cin >> val;
    }
    return root;
}

// Level Order Traversal
void print(Node* root) {
    if (root == NULL) return; // Handle empty tree case

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // Level separator

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();
        if (front == NULL) {
            cout << endl; // Print new level
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << front->data << " ";
            if (front->left) q.push(front->left);
            if (front->right) q.push(front->right);
        }
    }
}

//Searching
bool Searching(Node* root,int target){
    if(root==NULL){
        return false;
    }
    if(root->data==target){
        return true;
    }
    // return Searching(root->left,target)|| Searching(root->right,target) ;

    //method 2
    if(target<root->data){
        bool leftAns=Searching(root->left,target);
        if(leftAns==true){
            return true;
        }
    }
    if(target>root->data){
        bool rightAns=Searching(root->right,target);
        if(rightAns==true){
            return true;
        }
    }
    return false;
    
}

int getmin(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
int getmax(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}

int main() {
    Node* root = CreateTree();
    cout << "Level Order Traversal of BST:" << endl;
    print(root);
    cout<<getmin(root)<<endl;
    cout<<getmax(root)<<endl;
    cout<<Searching(root,250)<<endl;
    return 0;
}
