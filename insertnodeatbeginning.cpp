#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;  /* Pointer that stores the address of the next node
    If it is the last node, it will be NULL*/

    Node (int value) // Constructor of Node 
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head;
    Head = NULL;
    int arr[]={2,4,6,8,10};

    // Insert the node at begining
    // Linked list doesn't exist

    for(int i=0;i<5;i++)
{
    if(Head == NULL)  // check linked list is empty
        Head = new Node(arr[i]);
    
    else{           // Linked list is already exist

    Node *temp;
    temp = new Node(arr[i]);
    temp -> next = Head;
    Head = temp;
    }

}

    // print value
    Node *temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}