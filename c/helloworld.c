// Double linked list heap allocated stirngs
// Functions for insert, find, delete
// Mabye not ready yet and scool starts soon
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* prev;
	struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

struct node *create_node(int new_data) {
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = new_data;
	new_node->next = NULL;
	new_node->prev = NULL;
	return new_node;
}

void inster_at_head(int new_data) {
	struct node* new_node = create_node(new_data);
	if (head == NULL) {
		head = new_node;
		tail = new_node;
	} else {
		new_node->next = head;
		head->prev = new_node;
		head = new_node;
	}
}
