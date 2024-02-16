#include <iostream>
using namespace std;
int main()
{
    struct Node
    {
        int data;
        Node *next;
        Node(int value) : data(value), next(nullptr) {}
    };
    // Creating nodes and linking them to form a linked list
    Node *prevnode;
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Displaying the original list
    cout << "Original List: ";
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Deleting the first node
    // if (head != nullptr)
    // {
    //     Node *temp = head;
    //     head = head->next;
    //     delete temp;
    // }
    // else
    // {
    //     cout << "List is empty, cannot delete from an empty list." << endl;
    // }
    // 2nd method;
    temp = head;
    head = head->next;
    delete temp;

    // Displaying the list after deleting the last node
    cout << "List after deleting last node: ";
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // // Displaying the list after deleting the first node
    // cout
    //     << "List after deleting first node: ";
    // temp = head;
    // while (temp != nullptr)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;

    // Freeing memory by deleting remaining nodes
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
