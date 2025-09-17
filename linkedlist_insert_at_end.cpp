#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *Next;

    /* data */
};
void insert_at_end(Node* head,int value)
{
    Node* newnode=new Node();
    newnode->data=value;
    newnode->Next=nullptr;
    if(head==nullptr)
    {
        head=newnode;
        return;
    }
 Node *temp=head;
 while(temp->Next!=nullptr){
 
    temp=temp->Next;
    return;
}
 temp->Next=newnode;
}
void display(Node *head)
{
    Node*temp=head;
    while(temp!=nullptr)
    {
        temp=temp->Next;
        cout<<temp->data<<"->";
        cout<<"Null";
    }
}
int main()
{
    Node*head=nullptr;
    insert_at_end(head,21);
    insert_at_end(head,85);
    insert_at_end(head,46);
    insert_at_end(head,32);
    insert_at_end(head,95);
    display(head);
    return 0;
}



