#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

struct Node* head = NULL;
struct Node* tail = NULL;

void push (int item);
int pop ();
void display ();

int main ()
{
    display();
    push(1);
    push(2);
    display();
    push(5);
    push(6);
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();


}

void push (int item)
{
    Node* n = (Node*) malloc (sizeof(Node));
    n->data = item;
    n->next = NULL;

    if (head == NULL && tail == NULL)
    {
        head = tail = n;
    }
    tail->next = n;
    tail = n;
}

int pop()
{
    Node* temp = head;
    if(head == NULL)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        if(head == tail)
            head = tail = NULL;
        else
            head = head->next;

        int item = head->data;
        free(temp);
        return item;
    }
    return NULL;
}

void display()
{
    printf("Display queue:\n");
    struct Node* temp = head;
	while(temp != NULL) {
		printf("%d -> ",temp->data);
		temp = temp->next;
		if(temp == NULL)
            printf("NULL\n");
	}
	if(head == tail)
        printf("Queue is empty!\n");

	printf("\n");
}

