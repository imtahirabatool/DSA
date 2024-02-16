#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
void displayList(Node *head)
{
    cout << "Linked List: ";
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}
int main()
{
    Node *head = nullptr;
    // Creating the linked list by taking input from the user
    int elements;
    cout << "Enter the number of elements: ";
    cin >> elements;

    Node *temp = nullptr;
    for (int i = 0; i < elements; ++i)
    {
        Node *newNode = new Node;
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> newNode->data;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    displayList(head);
    // Asking user for position and data to insert
    int position, newData;
    cout << "Enter position to insert: ";
    cin >> position;
    cout << "Enter data to insert: ";
    cin >> newData;

    Node *newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    if (position == 1 || head == nullptr)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; ++i)
        {
            temp = temp->next;
        }
        if (temp == nullptr)
        {
            cout << "Position out of range." << endl;
        }
        else
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    displayList(head);
    return 0;
}