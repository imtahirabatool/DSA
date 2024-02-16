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
    struct Node *newnode, *temp, *tail, *head;
    void init() // we can also use this function to add node at the beginning...
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
                cout << temp->data << "  " << endl;
                temp = temp->next;
            } while (temp != tail->next);
        }
    }
    void insertatBeg()
    {
        Node *newnode = new Node;
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = NULL;

        if (tail == NULL)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            newnode->next = tail->next;
            tail->next = newnode;
        }
        cout << tail->next->data << endl;

        // Update head to the beginning of the list
        head = tail->next;
    }
    void insertatEnd()
    {
        Node *newnode = new Node;
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = NULL;

        if (tail == NULL)
        {
            tail = newnode;
            tail->next = newnode;
            head = tail->next;
        }
        else
        {
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
        cout << tail->next->data << endl;
    }
    int len()
    {
        int count = 0;
        struct Node *temp = head;
        while (temp != 0)
        {
            count++;
            temp = temp->next;
        }
        cout << "Total number of nodes: " << count << endl;
        return count;
    }
    void insertatPos()
    {
        int pos, i = 0;
        cout << "Enter Position:";
        cin >> pos;
        if (pos <= 0 || pos > len())
        {
            cout << "Invalid Position!";
        }
        else if (pos == 1)
        {
            insertatBeg();
        }
        else
        {
            Node *newnode = new Node;
            cout << "Enter data:";
            cin >> newnode->data;
            newnode->next = NULL;
            temp = tail->next;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            if (temp == tail) // Check if insertion is at the end
            {
                tail = newnode; // Update tail if insertion is at the end
            }
        }
    }
};
int main()
{
    circular obj;
    obj.init();
    obj.display();
    obj.insertatPos();
    obj.display();
    return 0;
}