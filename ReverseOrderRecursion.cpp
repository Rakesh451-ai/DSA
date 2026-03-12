#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int index, int size, Node *prev)
{
    // Base case
    if(index == size)
    {
        return prev;
    }

    Node *temp = new Node(arr[index]);

    // link current node to previous
    temp->next = prev;

    // recursive call
    return CreateLinkedList(arr, index + 1, size, temp);
}

int main()
{
    Node *Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    // pass NULL as initial previous node
    Head = CreateLinkedList(arr, 0, 5, NULL);

    // print linked list
    Node *temp = Head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
