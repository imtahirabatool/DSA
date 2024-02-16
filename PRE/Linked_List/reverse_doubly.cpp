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
    struct Node *head, *newNode, *tail;
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
    // void reverse()
    // {
    //     struct Node *temp, *current, *nextnode;
    //     current = head;
    //     while (current != nullptr)
    //     {
    //         nextnode = current->next;
    //         current->next = current->prev;
    //         current->prev = nextnode;
    //         current = nextnode;
    //     }
    //     current = head;
    //     head = tail;
    //     tail = current;
    // }
    void reverse()
    {
        struct Node *current, *nextNode;
        current = head;
        nextNode = nullptr;
        while (current != nullptr)
        {
            nextNode = current->prev;
            current->prev = current->next;
            current->next = nextNode;
            head = current;
            current = current->prev;
        }
        if (head != nullptr)
        {
            tail = head;
            while (tail->next != nullptr)
            {
                tail = tail->next;
            }
        }
    }
};
int main()
{
    doubly obj;
    obj.init();
    cout << "Elements in Linked List:" << endl;
    obj.display();
    obj.reverse();
    cout << "--------Reveresed linked list------" << endl;
    obj.display();
    return 0;
}