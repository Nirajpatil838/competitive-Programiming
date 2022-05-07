#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAtstart(node* &head, int val)
{
    node* n= new node(val);
    n->next=head;
    head=n;

}
    
void insertAtend(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL){
        head=n;
    }
    node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
node* reverse(node* &head){
    node* pervptr=NULL;
    node* currptr=head;
    node* nextptr;
    if(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=pervptr;
        pervptr=currptr;
        currptr=nextptr;
    }
    return pervptr;
}

 void display(node* head)
 {
     node*temp=head;
     if(temp!=NULL)
     {
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<"NULL"<<endl;
 }

int main(){
    node*head=NULL;
    insertAtend(head,4);
    insertAtend(head,3);
    display(head);
}