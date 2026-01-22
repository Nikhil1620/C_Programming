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
    int writeOffset;
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
    printf("Marvellous CVFS : UAREA gets initialised successfully");
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

    printf("Marvellous CVFS : Super Block gets initialised successfully");
}

/////////////////////////////////////////////////////////////////////////
//
//   Entry Point Function of the project
//
////////////////////////////////////////////////////////////////////////

int main()
{
    

    return 0;
}