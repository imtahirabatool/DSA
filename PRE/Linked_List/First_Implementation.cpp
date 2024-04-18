// first program linked_list
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *Next;
};

// Function to insert a node at the end of the linked list
void insert(Node *&head, int value)
{
	Node *newNode = new Node;
	newNode->data = value;
	newNode->Next = nullptr;

	if (head == nullptr)
	{
		head = newNode;
		return;
	}

	Node *temp = head;
	while (temp->Next != nullptr)
	{
		temp = temp->Next;
	}
	temp->Next = newNode;
}

// Function to display the linked list elements
void display(Node *head)
{
	Node *temp = head;
	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->Next;
	}
	cout << endl;
}

int main()
{
	Node *head = nullptr;
	char choice;

	do
	{
		int data;
		cout << "Enter data for the linked list: ";
		cin >> data;
		insert(head, data);

		cout << "Do you want to add more elements? (y/n): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	cout << "Linked list elements: ";
	display(head);

	return 0;
}
