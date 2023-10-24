#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{   
    int data;
    Node* next;
    Node* prev;
};
pair<Node*,Node*> create(int n){
    if(n==0) return {NULL,NULL};
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
    newhead->next=head;
    head->prev=newhead;
    return {head,newhead};
}
void print(Node* head,Node* tail){
    Node* temp=head;
    if(head==NULL) return;
    cout<<head->data<<" ";
    head=head->next;
    while(head!=temp){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void printrev(Node* head,Node* tail){
    Node* temp=head;
    if(head==NULL) return;
    cout<<head->data<<" ";
    head=head->prev;
    while(head!=temp){
        cout<<head->data<<" ";
        head=head->prev;
    }
    cout<<endl;
}
void insert(Node* &head,Node* &tail,int data,int in,int &size){
    if(size==0){
        Node* temp=new Node();
        head=temp; tail=temp;
    }
    else if(in==size){
        Node* temp=new Node();
        temp->data=data;
        tail->next=temp;
        head->prev=temp;
        temp->prev=tail;
        temp->next=head;
        tail=temp;
        
    }
    else{
        int cnt=0;
        Node* prev=tail;
        Node* curr_head=head;
        while(curr_head!=head){
            if(cnt==in){
                Node* temp=new Node();
                temp->data=data;
                prev->next=temp;
                temp->prev=prev;
                temp->next=curr_head;
                curr_head->prev=temp;
                if(in==0) curr_head=temp;
                break;
            }
            cnt++;
            prev=curr_head;
            curr_head=curr_head->next;
        }
    }
    size++;
    return;
}
void deleteN(Node* head,Node* tail,int in,int &size){
    if(head==NULL){
        cout<<"Linked List in empty"<<endl;
    }
    else if(in==size){
        cout<<"Index out of bound"<<endl;
    }
    else if(in==0){
        cout<<"Node deleted"<<endl;
        Node* temp=head->next;
        temp->prev=tail;
        tail->next=temp;
        head=temp;
    }
    else if(in==size-1){
        cout<<"Node deleted"<<endl;
        Node* temp=tail->prev;
        temp->next=head;
        head->prev=temp;
        tail=temp;
    }
    else{
        int cnt=0;
        Node* prev=tail;
        Node* curr_head=head;

        while(cnt!=size){
            if(cnt==in){
                Node* temp=curr_head->next;
                temp->prev=prev;
                prev->next=temp;
                cout<<"Node deleted"<<endl;
                size--;
                break;
            }
            cnt++;
            prev=curr_head;
            curr_head=curr_head->next;

        }
    }
    
    return;
}

int main() {
    int n; cin>>n;
    pair<Node*,Node*> head_tail=create(n);
    Node* head=head_tail.first;
    Node* tail=head_tail.second;
    printrev(head,tail);

    //  what you want to do -- Insertion or Deletion
    // int type; cin>>type;

    // // Insertion
    // if(type){
    //     int data,in; cin>>in>>data;
    //     insert(head,tail,data,in,n);
        
    // }
    
    // // Deletion
    // else{
    //     int in; cin>>in;
    //     deleteN(head,tail,in,n);
    // }
    // cout<<tail->data;
    // print(head,tail);
    
    
    
    
}