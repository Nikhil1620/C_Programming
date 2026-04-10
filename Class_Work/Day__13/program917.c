// Import Packeges

#include<stdio.h>
#include<stdlib.h>

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

//Time Complexity = n/2

int MiddleElementX(PNODE first)
{
    PNODE fast = NULL;
    PNODE slow = NULL;

    fast = first;
    slow = first;

    while((fast -> next != NULL) | (fast != NULL))
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    return slow -> data;
}

int main()
{
    int iRet = 0;

    PNODE head = NULL;

    InserLast(&head, 11);
    InserLast(&head, 21);
    InserLast(&head, 51);
    InserLast(&head, 101);
    InserLast(&head, 111);
    InserLast(&head, 121);
    

    Display(head);
    
    iRet = MiddleElementX(head);

    printf("Middle element is %d\n",iRet);

    return 0;
}
