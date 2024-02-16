#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class circular
{
public:
    struct Node *newnode, *tail;
    void init()
    {
        int choice = 1;
        tail = NULL;
        do
        {
            Node *newnode = new Node;
            cout << "Enter data: ";
            cin >> newnode->data;
            newnode->next = 0;
            if (tail == NULL)
            {
                tail = newnode;
                tail->next = tail; // Pointing to itself in a circular list
            }
            else
            {
                newnode->next = tail->next;
                tail->next = newnode;
                tail = newnode;
            }
            cout << "Do you want to continue...? (1/0)";
            cin >> choice;
        } while (choice);
    }
    void reverse()
    {
        if (tail == NULL || tail->next == tail)
        {
            cout << "List is empty or has only one node!" << endl;
            return;
        }
        Node *prev = NULL;
        Node *current = tail->next;
        Node *nextnode;
        do
        {
            nextnode = current->next;
            current->next = prev;
            prev = current;
            current = nextnode;
        } while (current != tail->next);
        // Update pointers to correctly reflect the reversed list
        tail->next = prev; // Updating the old tail to point to the new head
        tail = tail->next; // Update tail to the new head of the list
    }
    void display()
    {
        struct Node *temp;
        if (tail == NULL)
        {
            cout << "No list Exists!";
        }
        else
        {
            temp = tail->next;
            cout << "Data in Linked List: " << endl;
            do
            {
                cout << temp->data << "  ";
                temp = temp->next;
            } while (temp != tail->next);
        }
        cout << endl;
    }
};
int main()
{
    circular obj;
    obj.init();
    obj.display();
    obj.reverse();
    cout << "------- Reversed List -------";
    obj.display();
    return 0;
}