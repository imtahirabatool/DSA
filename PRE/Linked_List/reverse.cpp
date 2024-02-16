#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
class ll
{
public:
    struct Node *head, *newNode, *temp;
    void init()
    {
        int choice;
        head = 0;
        while (choice)
        { // init newnode
          // here *newNode will contain the address of newly created node
            Node *newNode = new Node;
            cout << "Enter data:";
            cin >> newNode->data;
            newNode->next = 0;
            if (head == 0)
            {
                head = temp = newNode;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
            }
            cout << "Do you want to continue...?";
            cin >> choice;
        }
    }
    void display()
    {
        temp = head;
        cout << "Data in Linked List: " << endl;
        while (temp != 0)
        {
            cout << temp->data << "  " << endl;
            temp = temp->next;
        }
    }
    void reverse()
    {
        struct Node *prevNode, *curNode, *nextNode;
        prevNode = 0;
        curNode = nextNode = head;
        while (nextNode)
        {
            nextNode = nextNode->next;
            curNode->next = prevNode;
            prevNode = curNode;
            curNode = nextNode;
        }
        head = prevNode;
    }
    void displayReversed()
    {
        temp = head;
        cout << "Reversed Linked List: " << endl;
        while (temp != nullptr)
        {
            cout << temp->data << "  " << endl;
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    ll obj;
    obj.init();
    obj.display();
    obj.reverse();
    obj.displayReversed();
    return 0;
}