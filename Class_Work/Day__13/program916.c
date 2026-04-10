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

//Time Complexity = n + n/2

int MiddleElement(PNODE first)
{
    int iCount = 0;

    PNODE temp = first;


    while(first != NULL)        // Time Complexity = n
    {
        iCount = iCount + 1;
        first = first -> next;
    }

    int iNode = (iCount / 2) + 1;

    first = temp;

    for(int i = 1; i < iNode; i++)       //Time Complexity = n/2
    {
        first = first -> next;
    }

    return (first -> data);
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
    
    iRet = MiddleElement(head);

    printf("Middle element is %d\n",iRet);

    return 0;
}
