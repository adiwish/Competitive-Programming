#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{   
    int data;
    Node* next;
    Node* prev;
};
Node* create(int n){
    if(n==0) return NULL;
    int x; cin>>x;
    Node* head=new Node();
    head->data=x;
    Node* newhead=head;
    for(int i=0;i<n-1;i++){
        int x; cin>>x;
        Node* temp=new Node();
        temp->data=x;
        temp->prev=newhead;
        newhead->next=temp;
        newhead=temp;
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void insert(Node* head,int data,int in){
    int cnt=0;
    Node* prev=head;
    while(head!=NULL){
        if(cnt==in){
            Node* temp=new Node();
            temp->data=data;
            prev->next=temp;
            temp->prev=prev;
            temp->next=head;
            head->prev=temp;
            return;
        }
        cnt++;
        prev=head;
        head=head->next;
    }
    Node* temp=new Node();
    prev->next=temp;
    temp->prev=prev;
    temp->data=data;
    return;
}
void deleteN(Node* head,int in){
    if(head==NUL){
        cout<<"Linked List in empty"<<endl; return;
    }
    int cnt=0;
    Node* prev=head;
    while(head!=NULL){
        if(cnt==in){
            if(head->next!=NULL){
                prev->next=head->next;
                head->next->prev=prev;
                return;
            }
            else{
                prev->next=NULL;
            }
        }
        cnt++;
        prev=head;
        head=head->next;
    }
    cout<<"Index out of bound"<<endl;
    return;
}

int main() {
    int n; cin>>n;
    Node* head=create(n);

    //  what you want to do -- Insertion or Deletion
    int type; cin>>type;

    // Insertion
    if(type){
        int data,in; cin>>data>>in;
        if(in==0){
            Node* temp=new Node();
            temp->data=data;
            temp->next=head;
            head->prev=temp;
            head=temp;
            
        }
        else{
            insert(head,data,in);
        }
    }
    
    // Deletion
    else{
        int in; cin>>in;
        if(in==0){
            head=head->next;
        }
        else{
            deleteN(head,in);
        }
    }

    //print the Linked List
    print(head);
    
    
    
    
}