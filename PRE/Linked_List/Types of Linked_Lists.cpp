//linked_List
#include<iostream>
using namespace std;

int main(){
	//singly Linked_List
	struct node{			//declaring a linked list
		int data;
		struct node *next;
	};
	//doubly Linked_List
	struct node{
		int data;
		struct node*prev;
		struct node*next;
	};
	//circular Linked_List 				Note:It is same as singly Linked_List but the only difference is
	struct node{					// that the last node will point to the address of the first node
		int data;
		struct node * next;
	};
	//doubly circular Linked_List
	struct node{
		int data;
		struct node*prev;			//Note: It is the combination of doubly and circular Linked_List
		struct node*next;
		
	};
}
