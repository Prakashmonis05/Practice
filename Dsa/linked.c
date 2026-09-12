#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node *first;
    struct Node *second;
    struct Node *third;

    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    first->data=10;
    second->data=20;
    third->data=30;

    first->next=second;
    second->next=third;
    third->next=NULL;

    struct Node *temp=first;

    while(temp!=NULL)
    {
        printf("The value of node is %d",temp->data);
        temp=temp->next;
    }

    return 0;

}