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
    struct Node *head, *newNode, *tail, *temp;
    int count = 0;
    void init()
    {
        int choice = 1;
        head = nullptr;
        while (choice)
        {
            Node *newNode = new Node;
            cout << "Enter data:";
            // cin>>newNode->data;
            cin >> (*newNode).data;
            newNode->prev = nullptr;
            newNode->next = nullptr;
            if (head == nullptr)
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
        tail = head;
        while (tail != nullptr)
        {
            cout << tail->data << "   " << endl;
            tail = tail->next;
        }
    }
    void insertatBeg()
    {
        Node *newNode = new Node;
        cout << "Enter data: ";
        cin >> newNode->data;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }
    void insertatEnd()
    {
        Node *newNode = new Node;
        cout << "Enter data: ";
        cin >> newNode->data;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    int len()
    {
        int count = 0;
        struct Node *tail = head;
        while (tail != 0)
        {
            count++;
            tail = tail->next;
        }
        cout << "Total number of nodes: " << count << endl;
        return count;
    }
    void insertatPos()
    {
        int pos, i = 0;
        temp = head;
        cout << "Enter the position;";
        cin >> pos;
        if (pos <= 0 || pos > this->len())
        {
            cout << "Invalid Position!";
        }
        else if (pos == 1)
        {
            insertatBeg();
        }
        else
        {
            Node *newNode = new Node;
            cout << "Enter data:";
            cin >> newNode->data;
            newNode->prev = 0;
            newNode->next = 0;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->next->prev = newNode;
        }
    }
    void insertafterPos()
    {
        int pos, i;
        temp = head;
        cout << "Enter the position;";
        cin >> pos;
        if (pos <= 0 || pos > this->len())
        {
            cout << "Invalid Position!";
        }
        else
        {
            Node *newNode = new Node;
            cout << "Enter data:";
            cin >> newNode->data;
            newNode->prev = 0;
            newNode->next = 0;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->next->prev = newNode;
        }
    }
};
int main()
{
    doubly obj;
    obj.init();
    cout << "Elements in Linked List:" << endl;
    obj.display();

    obj.insertatEnd();
    cout << "-----Updated linked List after insertion-----" << endl;
    obj.display();

    return 0;
}