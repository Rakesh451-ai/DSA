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
    int arr[]={1,2,3,4,5};

    Node *head, *Tail;
    Tail = NULL, head = NULL;
    for(int i=0;i<5;i++)
    {
        if(head == NULL)
        {
            head = new Node(arr[i]);
            Tail = head;
        }
        else{
            Node *temp = new Node(arr[i]);
            Tail->next=temp;
            Tail=temp;
        }
    }




    // // Node *head=NULL;

    // // // Insert value at starting in linkedlist

    // // // Linkedlist doesn't exit
    // // if(head==NULL)
    // // {
    // //     head = new Node(5);
    // // }
    // // // Linked list exist karti hai 
    // // else{
    // //     Node *temp = new Node(5);
    // //     temp->next = head;
    // //     head->prev = temp;
    // //     temp = head;
    
    // // print value


    //  int pos = 5;
    // // insert at start

    // if(pos == 0)
    // {
    //     // linked list doesn't exist
    //     if(head == NULL)
    //     head = new Node(5);

    //     // exist karti hai
    //     Node *temp = new Node(5);
    //     temp -> next = head;
    //     head -> prev= temp;
    //     head = temp;

    // }

    // else{
    //     Node * curr = head;
    //     // goto the node after which i have to insert
    //     while(--pos)
    //     {
    //         curr = curr->next;
    //     };

    // // insert at end
    // if(curr->next==NULL)   // last Node
    // {
    //     Node *temp=new Node(5);
    //     temp->prev=curr;
    //     curr->next = temp;
    // }
    // // insert at middle
    // else{
    //     Node *temp = new Node(5);
    //     temp->next = curr->next;
    //     temp->prev = curr;
    //     curr->next = temp;
    //     temp->next->prev = temp;
    // }

    // }

    // if(head != NULL)
    // {

    //     // if only one node exist
    //     if(head -> next = NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }

    //     // If more than One Node exist

    //     Node *temp = head;
    //     head = head ->next;
    //     delete temp;
    //     if(head)
    //     head->prev = NULL;
    // }

    // Delete Node at end

    if(head != NULL)
    {
        // if only 1 Node exist
        if(head -> next == NULL)
        {
            delete head;
            head = NULL;
        }
        else{
            Node *curr = head ;
            // last node pe le ke jao 

            while(curr->next)
            {
                curr=curr->next;
            }
            curr->prev->next=NULL;
            delete curr;
        }
    }
    
    Node * trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }

}