#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next,*prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

Node * createDLL(int arr[],int size,int index,Node*back)
{
    if(index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp -> next = createDLL(arr,size,index+1,temp);
    return temp;
}
int main()
{
    int arr[]={1,2,3,4};
    Node *head;
    head = createDLL(arr,4,0,NULL);



    // Print value 
    Node *trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}