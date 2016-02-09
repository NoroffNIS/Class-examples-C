#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

struct Node *head = NULL;
struct Node *tail = NULL;

void push(int item);
void pop();
void display();

int main()
{
    push(1);
    push(2);
    display();
    push(3);
    push(4);
    display();
    push(3);
    display();
    pop();
    display();

    return 0;
}
void push(int item){
    Node* node = (Node* )malloc(sizeof(Node));
    node->next = head;
    node->data = item;

    if(head == NULL && tail == NULL){
            head = tail = node;
    }
    printf("PUSH: %d is added.\n", node->data);
    //tail->next = node;
    head = node;
}
void pop(){
    Node* temp = head;
    if(temp == NULL)
        printf("Queue is empty!\n");
    else{
        if(head == tail)
            head = tail = NULL;
        else{
            head = temp->next;
        }
        printf("POP: %d is removed.\n", temp->data);
        free(temp);
    }
}
void display(){
    printf("Display:\n");
    Node* temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
        if(temp == NULL)
            printf("NULL");
    }
    printf("\n");
}
