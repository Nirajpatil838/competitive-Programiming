#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void insertAttail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        insertAthead(head,val);
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deletion(node* &head, int pos){
    node* temp=head;
    int count=1;
    while(temp!=NULL && cont!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
       temp->next->next=temp->prev;
    }
    delete temp;

}
void display(node* head){
    node*temp=head;
    if(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node*head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    display(head);
    insertAthead(head,5);
    display(head);

    return 0;

}


