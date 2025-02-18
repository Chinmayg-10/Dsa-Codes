#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    //constructor
    node(int value){
        this->data=value;
        this->next=NULL;
    }
};

//Returns head of the new linked list after insertion
node* insertAtHead(int value,node* &head,node* &tail){
    //it means we are creating a first node
    if(head==NULL && tail==NULL){
        node* newNode=new node(value);
        head=newNode;
        tail=newNode;
    }
    else{
        //phele se ek node hai
        node* newNode=new node(value);
        newNode->next=head;
        head=newNode;
    }
    return head;
}
node* insertAtTail(int value,node* &head,node* &tail){
    //it means we are creating a first node
    if(head==NULL && tail==NULL){
        node* newNode=new node(value);
        head=newNode;
        tail=newNode;
    }
    else{
        //phele se ek node hai
        node* newNode=new node(value);
        tail->next=newNode;
        tail=newNode;
    }
    return head;
}
int getLength(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}

node* insertAtAnyPosition(int value,node* &head,node* &tail,int pos){
    //check if position in valid or not
    int len=getLength(head);
    if(pos==1){
        insertAtHead(value,head,tail);
    }
    else if(pos==(len+1)){
        insertAtTail(value,head,tail);
    }
    else{
        node* temp=head;
        //agr 4th position pe add karana ho toh temp ko 2 baar jump karana hai
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        node* newNode=new node(value);
        
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
}

//searching
bool Searching(node* head,int value){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==value){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void DeleteNode(int pos,node* head,node* tail){
    if(head==NULL && tail==NULL){
        cout<<"No node to Delete"<<endl;
    }
    //single node
    if(head==tail){
        node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else{
        //multiple nodes are inside the ll
        //if to remove first node
        if(pos==1){
            node* temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            node* temp=head;
            for(int i=0;i<pos-2;i++){
                temp=temp->next;
            }
            node* NodetoDel=temp->next;
            temp->next=NodetoDel->next;
            NodetoDel->next=NULL;
            delete NodetoDel;
        }
        
    }
    

}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    // head=insertAtHead(10,head,tail);
    // print(head);
    // head=insertAtHead(20,head,tail);
    // print(head);
    // head=insertAtHead(30,head,tail);
    // print(head);
    head=insertAtTail(10,head,tail);
    print(head);
    head=insertAtTail(20,head,tail);
    print(head);
    head=insertAtTail(30,head,tail);
    print(head);
    head=insertAtAnyPosition(40,head,tail,2);
    print(head);
    head=insertAtAnyPosition(50,head,tail,3);
    print(head);
    head=insertAtAnyPosition(60,head,tail,5);
    print(head);
    // bool ans=Searching(head,50);
    // cout<<ans<<endl;
    DeleteNode(4,head,tail);
    print(head);
    DeleteNode(5,head,tail);
    print(head);

}