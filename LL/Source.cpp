#include <iostream> 
#include "ll.h"

InternalList::InternalList()
{
    head = NULL;
    endpointer = NULL;
    Length = 0;
}
InternalList::~InternalList()
{ 
    if (head != NULL)
    {
        NODE* prevptr = head;
        NODE* c_pointer;
        if (prevptr->next != NULL)
            c_pointer = prevptr->next;
        else
        {
            free(prevptr);
            return;
        }
        do
        {
            free(prevptr);
            prevptr = c_pointer;
            c_pointer = c_pointer->next;
        } while (c_pointer->next != NULL);
        free(prevptr);
        free(c_pointer);
    }     
}
void InternalList::Addend(int ele)
{
    NODE* c_pointer = (NODE*)malloc(sizeof(NODE));
    c_pointer->data = ele;
    c_pointer->next = NULL;
    if (head == NULL)
    {
        head = c_pointer;
        endpointer = head;
        Length++;
    }
    else
    {
        endpointer->next = c_pointer;
        endpointer = endpointer->next;
        Length++;
    }
}
void InternalList::Insert(int ele, int index)
{
    if (index < Length)
    {
        NODE* c_pointer = (NODE*)malloc(sizeof(NODE));
        c_pointer->data = ele;
        c_pointer->next = NULL;
        NODE* prevptr = head;
        if (index == 0)
        {
            c_pointer->next = head;
            head = c_pointer;
            Length++;
            return;
        }
        for (int i = 1; i < index; i++)
        {
            prevptr = prevptr->next;
        }
        c_pointer->next = prevptr->next;
        prevptr->next = c_pointer;
        Length++;
    }
}
void InternalList::Overwrite(int ele, int index)
{
    if (index < Length)
    {
        NODE* c_pointer = head;
        for (int i = 0; i < index; i++)
        {
            c_pointer = c_pointer->next;
        }
        c_pointer->data = ele;
    }
}
int InternalList::Find(int index)
{
    if (index < Length)
    {
        NODE* c_pointer = head;
        for (int i = 0; i < index; i++)
        {
            c_pointer = c_pointer->next;
        }
        return c_pointer->data;
    }
}
void InternalList::Delete(int index)
{
    if (index < Length)
    {
        NODE* prevptr = head;
        NODE* to_be_deleted;
        if (index == 0)
        {
            head = prevptr->next;
            free(prevptr);
            Length--;
            return;
        }
        for (int i = 1; i < index; i++)
        {
            prevptr = prevptr->next;
        }
        to_be_deleted = prevptr->next;
        prevptr->next = to_be_deleted->next;
        free(to_be_deleted);
        Length--;
    }
}
void InternalList::Traverse()
{
    NODE* currptr;
    currptr = head;
    while (currptr->next != NULL)
    {
        std::cout << currptr->data << std::endl;
        //std::cout << (int)currptr->next << std::endl;
        currptr = currptr->next;
    }
    std::cout << currptr->data << std::endl;
    //std::cout << (int)currptr->next << std::endl;
}
int main()
{
}
