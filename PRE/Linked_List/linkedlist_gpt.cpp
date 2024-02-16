#include <iostream>
using namespace std;

// Node class represents each node in the linked list
class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize a node with data and next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class manages the linked list operations
class LinkedList
{
private:
    Node *head; // Points to the first node in the list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the beginning of the list
    void insert(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        std::cout << value << " inserted into the list." << std::endl;
    }

    // Function to display the elements of the linked list
    void display()
    {
        Node *temp = head;
        std::cout << "Linked List: ";
        while (temp != nullptr)
        {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Destructor to free memory allocated for nodes
    ~LinkedList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

// Main function to demonstrate the usage of LinkedList
int main()
{
    LinkedList list;

    // Inserting elements into the linked list
    list.insert(5);
    list.insert(10);
    list.insert(15);

    // Displaying the linked list
    list.display();

    return 0;
}
