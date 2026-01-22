/////////////////////////////////////////////////////////////////////////
//
//   Header File Inclusion
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>


/////////////////////////////////////////////////////////////////////////
//
//   User Define Macros
//
////////////////////////////////////////////////////////////////////////

//Maximum file size that we allow in the project
#define MAXFILESIZE 50

#define MAXOPENFILES 20

#define MAXINODE 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

/////////////////////////////////////////////////////////////////////////
//
//////////////////// User Define Structures /////////////////////////////
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//   Structure Name :      BootBlock
//   Description :         Holds the information to boot the OS
//   
////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

/////////////////////////////////////////////////////////////////////////
//
//   Structure Name :      SuperBLock
//   Description :         Holds the information about the file system
//   
////////////////////////////////////////////////////////////////////////

struct SuperBLock
{
    int TotalInodes;
    int FreeInodes;
};

/////////////////////////////////////////////////////////////////////////
//
//   Structure Name :      Inode
//   Description :         Holds the information about the file 
//   
////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int RefferenceCount;
    int Permission;
    char *Buffer;             //structure of the Data Block
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode * PINODE;
typedef struct Inode ** PPINODE;

/////////////////////////////////////////////////////////////////////////
//
//   Structure Name :      FileTable
//   Description :         Holds the information about the opened file
//   
////////////////////////////////////////////////////////////////////////


struct FileTable
{
    int ReadOfset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
    
};

typedef FileTable FILETABLE;
typedef FileTable *PFILETABLE;

/////////////////////////////////////////////////////////////////////////
//
//   Structure Name :      UAREA
//   Description :         Holds the information about process
//   
////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

/////////////////////////////////////////////////////////////////////////
//
//   Global Variable or object in the project
//
////////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBLock superobj;
UAREA uareaobj;

PINODE head = NULL;

//////////////////////////////////////////////////////////////////////////
//
// FUnction Name :        InitialiseUAREA
// Description :          It is used to initialise UAREA members
// Author :               Nikhil Ramesh Ahire
// Date :                 13/01/2026
//
/////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    strcpy(uareaobj.ProcessName, "Myexe");

    int i = 0;

    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }
    printf("Marvellous CVFS : UAREA gets initialised successfully\n");
}

//////////////////////////////////////////////////////////////////////////
//
// FUnction Name :       InitialiseSuperBlock
// Description :         It is used to initialise SuperBlock members 
// Author :              Nikhil Ramesh Ahire
// Date :                13/01/2026
//
/////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super Block gets initialised successfully.\n");
}

//////////////////////////////////////////////////////////////////////////
//
// FUnction Name :       CreateDILB
// Description :         It is used to create linked list of Inodes 
// Author :              Nikhil Ramesh Ahire
// Date :                13/01/2026
//
/////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    for(i = 0; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        strcpy(newn -> FileName,"\0");
        newn -> InodeNumber = i;
        newn -> FileSize = 0;
        newn -> ActualFileSize = 0;
        newn -> RefferenceCount = 0;
        newn -> Permission = 0;
        newn -> Buffer = NULL;
        newn -> next = NULL;

        if(temp == NULL)              //LL is Empty
        {
            head = newn;
            temp = head;
        }
        else                          //LL contains atleast one node
        {
            temp -> next = newn;
            temp = temp -> next; 
        }
    }
    printf("Marvellous CVFS : DILB created successfully.\n");
}

//////////////////////////////////////////////////////////////////////////
//
// FUnction Name :       StartAuxillaryDataInitialisation
// Description :         It is used to call all such functions which are 
//                       use to initialise auxillary data
// Author :              Nikhil Ramesh Ahire
// Date :                13/01/2026
//
/////////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information,"Booting process of Marvellous CVFS is done.\n");

    printf("%s\n",bootobj.Information);

    InitialiseSuperBlock();

    CreateDILB();

    InitialiseUAREA();

    printf("Marvellous CVFS : Auxillary data initialise successfully.\n");
}

/////////////////////////////////////////////////////////////////////////
//
//   Entry Point Function of the project
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    char Command[4][20];
    int iCount = 0;
    
    StartAuxillaryDataInitialisation();

    printf("--------------------------------------------------------\n");
    printf("-----------Marvellous CVFS started Successfully---------\n");
    printf("--------------------------------------------------------\n");

    while(1)
    {
        fflush(stdin);

        strcpy(str,"");

        printf("\n Marvelloue CVFS : >");
        fgets(str,sizeof(str),stdin);
        //scanf("%s",str);
    }


    return 0;
}