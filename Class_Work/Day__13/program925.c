// Import Packeges

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InserLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)   //Linked list is empty
    {
        *first = newn;
    }
    else                 //Linked list contains atleast one node
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }

}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

//Time Complexity = N
//Space Complexity = 1

void Reverse(PPNODE first)
{
    PNODE Previous = NULL;
    PNODE Current = NULL;
    PNODE Further = NULL;
    
    if(*first == NULL)
    {
        return;
    }
    
    Current = *first;
    while(Current != NULL)
    {
        Further = Current -> Further;
        Current -> Further = Previous;
        Previous = Current;
        Current = Further;
    }

    *first = Previous;
}

int main()
{
    PNODE head = NULL;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    InserLast(&head, 11);
    InserLast(&head, 21);
    InserLast(&head, 51);
    InserLast(&head, 101);
    
    Display(head);

    Reverse(&head);

    printf("Linked list after reverse : \n");

    Display(head);
    
    return 0;
}
