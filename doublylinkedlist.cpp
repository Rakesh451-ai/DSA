#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main()
{
    Node *head=NULL;

    // Insert value at starting in linkedlist

    // Linkedlist doesn't exit
    if(head==NULL)
    {
        head = new Node(5);
    }
    // Linked list exist karti hai 
    else{
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        temp = head;
    }
    // print value
    Node * trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }

}