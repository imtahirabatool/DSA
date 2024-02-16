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
    struct Node *head, *newnode, *temp;
    void init()
    {
        int choice = 1;
        head = nullptr;
        while (choice)
        {
            Node *newnode = new Node;
            cout << "Enter data: ";
            cin >> newnode->data;
            newnode->next = 0;
            if (head == nullptr)
            {
                head = temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            temp->next = head;
            cout << "Do you want to continue...?";
            cin >> choice;
        }
    }
    void display()
    {
        if (head == nullptr)
        {
            cout << "No list Exists!";
        }
        else
        {
            temp = head;
            cout << "Data in Linked List: " << endl;
            while (temp->next != head)
            {
                cout << temp->data << "  " << endl;
                temp = temp->next;
            }
            cout << temp->data << " " << endl;
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