// Recursive C++ program to add 1 to a linked list
#include <bits/stdc++.h>

/* Linked list node */
struct Node {
	int data;
	Node* next;
};

/* Function to create a new node with given data */
Node* newNode(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

// Recursively add 1 from end to beginning and returns
// carry after all nodes are processed.
int addWithCarry(Node* head)
{
	// If linked list is empty, then
	// return carry
	if (head == NULL)
		return 1;

	// Add carry returned be next node call
	int res = head->data + addWithCarry(head->next);

	// Update data and return new carry
	head->data = (res) % 10;
	return (res) / 10;
}

// This function mainly uses addWithCarry().
Node* addOne(Node* head)
{
	// Add 1 to linked list from end to beginning
	int carry = addWithCarry(head);

	// If there is carry after processing all nodes,
	// then we need to add a new node to linked list
	if (carry) {
		Node* newNode = new Node;
		newNode->data = carry;
		newNode->next = head;
		return newNode; // New node becomes head now
	}

	return head;
}

// A utility function to print a linked list
void printList(Node* node)
{
	while (node != NULL) {
		printf("%d", node->data);
		node = node->next;
	}
	printf("\n");
}

/* Driver code */
int main(void)
{
	Node* head = newNode(1);
	head->next = newNode(9);
	head->next->next = newNode(9);
	head->next->next->next = newNode(9);

	printf("List is ");
	printList(head);

	head = addOne(head);

	printf("\nResultant list is ");
	printList(head);

	return 0;
}
