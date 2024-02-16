#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
class del
{
public:
    struct Node *head, *newNode, *temp;
    head = 0;
    int choice;
    void init()
    {
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
        temp = head;
        cout << "Data in Linked List: ";
        while (temp != 0)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }
    }
    void delfrombeg()
    {
    }
};
int main()
{
}