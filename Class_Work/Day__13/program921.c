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

bool Checkloop(PNODE first)
{
    bool bFlag = false;

    PNODE fast = first;
    PNODE slow = first;

    while((fast != NULL) && (fast -> next != NULL))   //sequence is important
    {
        fast = fast -> next -> next;
        
        slow = fast -> next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    bool bRet = false;
    int iPos = 4;
    int i = 0;

    PNODE head = NULL;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    InserLast(&head, 11);
    InserLast(&head, 21);
    InserLast(&head, 51);
    InserLast(&head, 101);
    InserLast(&head, 111);
    InserLast(&head, 121);
    InserLast(&head, 151);
    
    temp1 = head;
    temp2 = head;

    for(i = 1; i < iPos; i++)
    {
        temp1 = temp1 -> next;
    }

    while(temp2 -> next != NULL)
    {
        temp2 = temp2 -> next;
    }

    temp2 -> next = temp1;  //To create a loop

    bRet = Checkloop(head);

    if(bRet == true)
    {
        printf("The linked list has a loop\n");
    }
    else
    {
        printf("The linked list has no loop\n");
    }

    return 0;
}
