#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    /* data */
};

void LinkedList(struct node* ptr){
    while(ptr!= NULL){
        printf("Element is : % d\n" , ptr->data);
        ptr = ptr->next;
    }

}
int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    head = (struct node *)malloc(sizeof(struct node) );
    second = (struct node * )malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head -> data =6;
    head -> next = second;

    second -> data = 12;
    second -> next = third;

    third -> data = 18;
    third ->next = fourth;

    fourth -> data = 24;
    fourth ->next = NULL;
    return 0;
LinkedList(head);
}