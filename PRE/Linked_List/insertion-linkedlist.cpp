#include <iostream>
using namespace std;

int main()
{
    struct node
    {
        int data;
        node *next;
    };
    struct node *head, *temp, *newnode;
    int choice = 1;
    head = 0;
    while (choice)
    {
        newnode = new node;
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "Do you want to continue? ";
        cin >> choice;
    }
    temp = head;
    cout << "Data in Linked List: ";
    while (temp != 0)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    // Inserting a node at the beginning of the list
    newnode = new node; // Allocate memory for the new node to be inserted
    cout << "\nEnter data that you want to insert: ";
    cin >> newnode->data;
    newnode->next = 0;
    // head = newnode;
    temp = head; // to insert at the end
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    // Display the updated linked list
    cout << "Data in Updated Linked List: ";
    temp = head;
    // while (temp != 0)            // for adding at the beginning
    // {
    //     cout << temp->data << "  ";
    //     temp = temp->next;
    // }
    cout << "Data in Linked List: "; // for adding at the end
    while (temp != nullptr)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }

    return 0;
}