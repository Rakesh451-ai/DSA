// Time Complexity: O(n)
// Space Complexity: O(n) due to recursion

#include <iostream>
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

Node* CreateLinkedList(int arr[], int index, int size)
{
    // Base case
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    Node *Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    Head = CreateLinkedList(arr, 0, 5);

    // Insert node at particular position
    int x = 3;       // position (1-based index)
    int value = 30;  // value to insert

    if (x <= 0)
    {
        cout << "Invalid position";
        return 0;
    }

    Node *temp = Head;

    // Move to (x-1)th node
    for (int i = 1; i < x - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "Position out of range";
            return 0;
        }
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print linked list (start from Head)
    temp = Head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
