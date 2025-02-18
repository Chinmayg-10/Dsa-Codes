#include<iostream>
using namespace std;
class node{
    public:
    node* prev;
    int data;
    node* next;

    node(int value){
        this->prev=NULL;
        this->data=value;
        this->next=NULL;
    }
};
node* InsertAtHead(node* &head,node* &tail,int value){
    if(head==NULL && tail==NULL){
        node* NewNode=new node(value);
        head=NewNode;
        tail=NewNode;
    }
    else{
        node* NewNode=new node(value);
        NewNode->next=head;
        head->prev=NewNode;
        head=NewNode;
    }
    return head;
}
node* InsertAtTail(node* &head,node* &tail,int value){
    if(head==NULL && tail==NULL){
        node* NewNode=new node(value);
        head=NewNode;
        tail=NewNode;
    }
    else{
        node* NewNode=new node(value);
        NewNode->prev=tail;
        tail->next=NewNode;
        tail=NewNode;
    }
    return head;
}
int getLength(node* head){
    node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

node* InsertAtPosition(node* &head,node* &tail,int value,int pos){
    int len=getLength(head);
    if(pos==1){
        InsertAtHead(head,tail,value);
    }
    else if(pos==(len+1)){
        InsertAtTail(head,tail,value);
    }
    else{
        node* temp=head;
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        node* NewNode=new node(value);
        NewNode->next=temp->next;
        temp->next->prev=NewNode;
        temp->next=NewNode;
        NewNode->prev=temp;
    }
    return head;
}
bool Searching(node* head,int target){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void Print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void DeleteNode(node* &head,node* &tail,int pos){
    if(head==NULL && tail==NULL){
        cout<<"the Linked List is already empty"<<endl;
        return;
    }
    else if(head==tail){
        node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else if(pos==1){
            node* temp=head;
            head=temp->next;
            head->prev=NULL;
            temp->next=NULL;
            delete temp;
    }
    else{
            node* temp=head;
            for(int i=0;i<pos-2;i++){
                temp=temp->next;
            }
            node* NodeToDelete=temp->next;

            if(NodeToDelete->next!=NULL){
                node* forward=NodeToDelete->next;
                temp->next=forward;
                forward->prev=temp;
                NodeToDelete->next=NULL;
                NodeToDelete->prev=NULL;
                delete NodeToDelete;
            }
            //deleting last node
            else{
                temp->next=NULL;
                NodeToDelete->next=NULL;
                NodeToDelete->prev=NULL;
                tail=temp;
                delete NodeToDelete;
            }

            
    }
        
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    head=InsertAtHead(head,tail,10);
    // Print(head);
    head=InsertAtHead(head,tail,20);
    // Print(head);
    head=InsertAtHead(head,tail,30);
    // Print(head);
    head=InsertAtTail(head,tail,40);
    // Print(head);
    head=InsertAtPosition(head,tail,450,4);
    Print(head);
    // bool ans=Searching(head,50);
    // cout<<ans<<endl;
    DeleteNode(head,tail,5);
    DeleteNode(head,tail,3);
    Print(head);
   



}