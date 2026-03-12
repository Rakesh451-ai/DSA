#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;

    // Constructor of Node

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head;  // Node *Head = NULL;
    Head = NULL;
    Node *Tail;
    Tail = NULL;
    int arr[]={2,4,6,8,10};

    // Insert the value at end 

    for(int i=0;i<5;i++)
    {
        // Linked list empty 
        if(Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        // Linked list exist karti hai 
        else{
            Tail -> next = new Node(arr[i]);
            Tail = Tail -> next;
        }
    }
    // Print value 

    Node *temp;
    temp = Head;
    while(temp)
    {
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
}