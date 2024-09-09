#include <stdio.h>
#include <stdlib.h>

void begin_insert(int item);
void last_delete();

struct node {
	int data;
	struct node *next;
};

struct node *head;

int main() {
	begin_insert(2);
	last_delete();
	return 0;
}



void begin_insert(int item) {
	struct node *ptr = (struct node*)malloc(sizeof(struct node*));
	ptr->data = item;
	ptr->next = head;
	head = ptr;
	printf("Node Inserted\n");
	printf("%d", ptr->data);
}

void last_delete() {
	struct node *temp, *ptr;
	temp = head;
	while(temp->next != NULL) {
		ptr = temp;
		temp = temp->next;
	}
	ptr->next = NULL;
	free(ptr);
	printf("Node deleted\n");
	printf("%d", ptr->data);
}
	
