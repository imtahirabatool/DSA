#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
class ll
{
public:
    struct Node *head, *newNode, *temp;
    void init()
    {
        head = 0;
        int choice;
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
            cout << temp->data << "  " << endl;
            temp = temp->next;
        }
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
};
int main()
{
    ll obj;
    obj.init();
    obj.len();
    return 0;
}