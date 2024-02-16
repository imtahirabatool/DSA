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
    struct Node *head;
    void init()
    {
        struct Node *newNode, *tail, *temp;
        int choice = 1;
        head = NULL;
        while (choice)
        {
            Node *newNode = new Node;
            cout << "Enter data:";
            // cin>>newNode->data;
            cin >> (*newNode).data;
            newNode->prev = NULL;
            newNode->next = NULL;
            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            cout << "Do you want to continue??";
            cin >> choice;
        }
    }
    void display()
    {
        struct Node *tail;
        tail = head;
        while (tail != NULL)
        {
            cout << tail->data << "   " << endl;
            tail = tail->next;
        }
    }
    void delfromBeg()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            if (head != NULL)
            {
                head->prev = NULL;
            }
            delete temp;
        }
    }

    void delfromEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
        }
        else if (head->next == NULL)
        { // Only one node
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->prev->next = NULL;
            delete temp;
        }
    }

    void delfromPos()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        int pos, i = 1;
        cout << "Enter position:";
        cin >> pos;

        Node *temp = head;
        while (temp != NULL && i < pos)
        {
            temp = temp->next;
            i++;
        }

        if (temp == NULL)
        {
            cout << "Position not found!" << endl;
            return;
        }

        if (temp == head)
        {
            head = temp->next;
        }

        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
        if (temp->prev != NULL)
        {
            temp->prev->next = temp->next;
        }

        delete temp;
    }
};
int main()
{
    doubly obj;
    obj.init();
    cout << "Elements in Linked List:" << endl;
    obj.display();
    obj.delfromPos();
    cout << "-------Updated List------" << endl;
    obj.display();
    return 0;
}