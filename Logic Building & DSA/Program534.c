#include<stdio.h>   //copy of 533
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int MiddleElement(PNODE Head)
{
    PNODE Teacher = Head;
    PNODE Student = Head;

     while((Teacher != NULL) && (Teacher->next != NULL))
     {
        Teacher = Teacher -> next->next;
        Student = Student -> next;
     }
     return(Student->data);
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 121);
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    iRet = MiddleElement(First);

    printf("Middle element is : %d\n",iRet);

    return 0;
}