/*Write a program to implement Linked List and define delete from end function i.e. delete_end() to delete a node from end of the linked list.*/


#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;

  Node(int data){
    this->data=data;
    next=NULL;
  }
};
Node* takeInput(){
    int data;
    Node *head = NULL;
    Node *tail = NULL;
    int i = 0;
    
    while(i<5)
    {
        cin>>data;
        Node *newNode = new Node(data);
        if(head == NULL)
        {
        head = newNode;
        tail = newNode ;
        }
        else
        {   
        tail -> next = newNode;
        tail = tail -> next;
        }
        i++;
    }
    return head;
}
Node *delete_end(Node *head)
{
    if (head == NULL) return NULL;
 
    if (head->next == NULL) 
    {
        delete head;
        return NULL;
    }
    Node* second_last = head;

    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
        delete (second_last->next);
        second_last->next = NULL;
 
    return head;
}
void print(Node* head){
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    cout<<"Enter 5 nodes :\n";
    Node* head = takeInput();
    
    delete_end(head);
    
    print(head);
    
    return 0;
}

