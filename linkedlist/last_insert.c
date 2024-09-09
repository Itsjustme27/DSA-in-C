#include <stdio.h>
#include <stdlib.h>

void last_insert(int item);

struct node {
	int data;
	struct node *next;
};

struct node *head;

int main() {
	last_insert(2);
	return 0;
}

void last_insert(int item) {
	struct node *ptr, *temp;
	head = (struct node*)malloc(sizeof(struct node*));
	ptr = (struct node*)malloc(sizeof(struct node*));
	ptr->data = item;
	temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = ptr;
	ptr->next = NULL;
	printf("Node inserted : %d", ptr->data);
}
