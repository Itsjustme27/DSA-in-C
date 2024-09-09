#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head;

void beginInsert();
void lastInsert();
void randoInsert();
void begin_delete();
void last_delete();
void display();
void search();


void main() {
    int choice = 0;
    while(choice != 9) {
        printf("\n\n***********main Menu**********\n");
        printf("\nChooseone option from the list: \n");
        printf("\n================================\n");
        printf("\n1.Insert in beginning")
    }
}