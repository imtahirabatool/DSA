#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

class doubly
{
public:
    struct Node *head, *tail, *newnode;
    void init()
    {
        int choice = 1;
        head = 0;
        while (choice)
        {
            Node *newnode = new Node;
            cout << "Enter Data:";
            cin >> newnode->data;

            if (head == NULL)
            {
                head = tail = newnode;
                head->next = head;
                head->prev = head;
            }
            else
            {
                tail->next = newnode;
                newnode->prev = tail;
                newnode->next = head;
                head->prev = newnode;
                tail = newnode;
            }
            cout << "Do you want to continue..?";
            cin >> choice;
        }
    }
    void display()
    {
        struct Node *temp;
        temp = head;
        if (head == 0)
        {
            cout << "List is Empty!";
        }
        else
        {
            cout << "Data in Linked List:" << endl;
            do
            {
                cout << temp->data << endl;
                temp = temp->next;
            } while (temp != head);
            cout << temp->data << endl;
        }
    }
};
int main()
{
    doubly obj;
    obj.init();
    obj.display();
    return 0;
}