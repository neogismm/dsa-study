#include <stdio.h>
#include <stdlib.h>
void Create();
void Display();
void InsFirst();
void InsVal();
void InsLast();
void DelFirst();
void DelVal();
void DelLast();
typedef struct node
{
    int data;
    struct node *next;
} list;
list *ptr1, *ptr2, *head = NULL, *newnode;
int main()
{
    int opt, ch;
    do
    {
        printf("\n1.Create\n2.DISPLAY\n3.SEARCH\n4.INSERT\n5.DELETE\n6.EXIT");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            Create();
            break;
        case 2:
            Display();
            break;
        case 4:
            printf("\n\n1.Insert at First\n2.Insert at any key value\n3.insert at last\n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                InsFirst();
                break;
            case 2:
                InsVal();
                break;
            case 3:
                InsLast();
                break;
            }

        case 5:
            printf("\n\n1.Delete at First\n2.Delete at any key value\n3.Delete at last\n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                DelFirst();
                break;
            case 2:
                DelVal();
                break;
            case 3:
                DelLast();
                break;
            }
        }

    } while (opt != 0);
}

void Create()
{
    int val, opt;

    do
    {
        printf("\nenter the value:");
        scanf("%d", &val);
        newnode = (list *)malloc(sizeof(list));
        if (head == NULL)
        {
            head = newnode;
            head->data = val;
            head->next = NULL;
        }
        else
        {
            ptr2 = head;
            while (ptr2->next != NULL)
            {
                ptr2 = ptr2->next;
            }
            ptr2->next = newnode;
            newnode->data = val;
            newnode->next = NULL;
        }
        printf("\nDo you want to continue? 0 or 1?\t");
        scanf("%d", &opt);
    } while (opt == 1);
}

void Display()
{
    ptr1 = head;
    while (ptr1 != NULL)
    {
        printf("%d\n", ptr1->data);
        ptr1 = ptr1->next;
    }
}

void InsFirst()
{
    int val;
    printf("\nenter the value:");
    scanf("%d", &val);
    newnode = (list *)malloc(sizeof(list));
    if (newnode == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        newnode->data = val;
        ptr1 = head;
        head = newnode;
        head->next = ptr1;
    }
}

void InsVal()
{
    int val, key;
    printf("\nenter the value:");
    scanf("%d", &val);
    printf("\nenter the key where you want to insert:");
    scanf("%d", &key);
    newnode = (list *)malloc(sizeof(list));
    if (newnode == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        newnode->data = val;
        ptr1 = head;
        while (ptr1 != NULL && ptr1->data != key)
        {
            ptr1 = ptr1->next;
        }
        if (ptr1 == NULL)
        {
            printf("\nelement not found:");
        }
        else
        {
            newnode->next = ptr1->next;
            ptr2 = ptr1->next;
            ptr1->next = newnode;
            newnode->next = ptr2;
        }
    }
}

void InsLast()
{
    int val;
    printf("\nEnter the value you want to insert:");
    scanf("%d", &val);
    newnode = (list *)malloc(sizeof(list));
    ptr1 = head;
    newnode->data = val;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        while (ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
        }
        ptr1->next = newnode;
    }
}

void DelFirst()
{
    int temp;
    if (head == NULL)
    {
        printf("\nEmpty list");
    }
    else
    {
        ptr1 = head;
        head = ptr1->next;
        temp = ptr1->data;
        free(ptr1);
        printf("\n First element is Deleted:");
    }
}

void DelVal()
{
    int val, temp;
    printf("\nenter the value you want to delete:");
    scanf("%d", &val);
    if (head == NULL)
    {
        printf("\nEmpty list");
    }
    if (head->data == val)
    {
        ptr1 = head;
        head = ptr1->next;
        free(ptr1);
    }
    else
    {
        ptr1 = head;
        ptr2 = head->next;

        while (ptr2->data != val)
        {
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }
        ptr1->next = ptr2->next;
        free(ptr2);
    }
}

void DelLast()
{
    if (head == NULL)
    {
        printf("\nEmptY List");
    }
    else
    {
        ptr1 = head;
        ptr2 = head->next;
        while (ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }
        ptr1->next = NULL;
        free(ptr2);
    }
}