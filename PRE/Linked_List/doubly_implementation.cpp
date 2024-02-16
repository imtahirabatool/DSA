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
    struct Node *head, *newNode, *temp;
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
                head = temp = newNode;
            }
            else
            {
                temp->next = newNode;
                newNode->prev = temp;
                temp = newNode;
            }
            cout << "Do you want to continue??";
            cin >> choice;
        }
    }
    void display()
    {
        temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "   " << endl;
            temp = temp->next;
        }
    }
};
int main()
{
    doubly obj;
    obj.init();
    cout << "Elements in Linked List:" << endl;
    obj.display();
    return 0;
}