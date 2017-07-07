#include<stdio.h>
//defining structure of linked list
struct Node
{
    int data;
    struct Node *next;
};
void printlinkedlist(struct Node *n)
{
    while(n!=NULL)
    {
        //printing the data
        printf("%d",n->data);
        n=n->next;
    }
}
int main()
{   
    //define variable of struct node(Linked list) format:data-->pointer to next data
    struct Node* head=NULL;
    struct Node* first=NULL;
    struct Node* second=NULL;
    
    //allocate memory for the linked list
    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    
    //data entry
    head->data=1;
    head->next=first;
    
    first->data=2;
    first->next=second;
    
    second->data=3;
    second->next=NULL;
    
    printlinkedlist(head);
    return 0;
}
