#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head;

int main() {
	struct node *temp;
	head = (struct node*)malloc(sizeof(struct node*));
	head->data = 2;
	printf("Head of the node: %d", head->data);
	temp = head;
	head = head->next;
	free(temp);
	printf("Node Deleted!");
	return 0;
}
