#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
class CircularLinkedList
{
private:
    Node *tail;

public:
    CircularLinkedList() : tail(NULL) {}
    void insert()
    {
        int choice = 1;
        do
        {
            Node *newnode = new Node;
            cout << "Enter data: ";
            cin >> newnode->data;
            newnode->next = NULL;

            if (tail == NULL)
            {
                tail = newnode;
                tail->next = tail;
            }
            else
            {
                newnode->next = tail->next;
                tail->next = newnode;
                tail = newnode;
            }
            cout << "Do you want to continue...? (1/0)";
            cin >> choice;
        } while (choice);
    }
    void deleteFromBeg()
    {
        if (tail == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = tail->next;
        if (temp->next == temp)
        {
            delete temp;
            tail = NULL;
        }
        else
        {
            tail->next = temp->next;
            delete temp;
        }
    }
    void deleteFromEnd()
    {
        if (tail == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *curr = tail->next;
        if (curr->next == curr)
        {
            delete curr;
            tail = NULL;
        }
        else
        {
            Node *prev;
            while (curr->next != tail->next)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = tail->next;
            tail = prev;
            delete curr;
        }
    }
    void deleteFromPos(int pos)
    {
        if (tail == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        int l = len();
        if (pos < 1 || pos > l)
        {
            cout << "Invalid Position" << endl;
            return;
        }
        if (pos == 1)
        {
            deleteFromBeg();
            return;
        }
        Node *curr = tail->next;
        Node *prev = NULL;
        for (int i = 1; i < pos; ++i)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }
    void display()
    {
        if (tail == NULL)
        {
            cout << "No list exists!" << endl;
            return;
        }

        Node *temp = tail->next;
        cout << "Data in Linked List: " << endl;
        do
        {
            cout << temp->data << "  ";
            temp = temp->next;
        } while (temp != tail->next);
        cout << endl;
    }
    int len()
    {
        if (tail == NULL)
        {
            return 0;
        }
        int count = 0;
        Node *temp = tail->next;
        do
        {
            count++;
            temp = temp->next;
        } while (temp != tail->next);
        cout << "Total number of nodes: " << count << endl;
        return count;
    }
};
int main()
{
    CircularLinkedList obj;
    obj.insert();
    obj.display();
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    obj.deleteFromPos(pos);
    cout << "-------- Updated List -------" << endl;
    obj.display();
    return 0;
}