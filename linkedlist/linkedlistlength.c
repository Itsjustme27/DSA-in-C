#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

int main() {
	struct node *head, *temp;
	head = (struct node*)malloc(sizeof(struct node*));
	temp = head;
	int count = 0;
	while(temp != 0) {
		count++;
		temp = temp->next;
	}
	printf("The length of the linked list is: %d", count);
	return 0;
}
