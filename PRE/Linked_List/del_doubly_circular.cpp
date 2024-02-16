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
    struct Node *head, *tail, *newnode, *temp;
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
    void delfromBeg()
    {
        if (head == NULL)
        {
            cout << "List is Empty!";
            return;
        }
        else if (head->next == head)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            head->prev = tail;
            tail->next = head;
            delete temp;
        }
    }
    void delfromEnd()
    {
        if (head == NULL)
        {
            cout << "List is Empty!";
            return;
        }
        else if (head->next == head)
        {
            head = tail = NULL;
            delete head;
        }
        else
        {
            tail = tail->prev;
            tail->next = head;
            head->prev = tail;
            delete temp;
        }
    }
    void delfromPos()
    {
        int pos, i = 1;
        temp = head;
        cout << "Enter position:";
        cin >> pos;
        if (pos < 0)
        {
            cout << "Invalid Position!";
        }
        else if (pos == 1)
        {
            delfromBeg();
        }
        else
        {
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            if (temp->next == head)
            {
                tail = temp->prev;
                delete temp;
            }
            else
            {
                delete temp;
            }
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
        }
    }
};
int main()
{
    doubly obj;
    obj.init();
    obj.display();
    obj.delfromPos();
    obj.display();
    return 0;
}