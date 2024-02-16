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
};
int main()
{
    circular obj;
    obj.init();
    obj.display();
    return 0;
}