#include "C:\Users\Joseph\source\repos\TestList\LL\ll.h"
#include "C:\Users\Joseph\source\repos\TestList\LL\source.cpp"
#include "LinkedList.h"
InternalList* m_actuallinkedlist;
LinkedList::LinkedList()
{
    m_actuallinkedlist = new InternalList();
}

LinkedList::~LinkedList()
{
    if (nullptr != m_actuallinkedlist)
    {
        delete m_actuallinkedlist;
        m_actuallinkedlist = nullptr;
    }
}

LinkedList::!LinkedList()
{
    if (nullptr != m_actuallinkedlist)
    {
        delete m_actuallinkedlist;
        m_actuallinkedlist = nullptr;
    }
}

void LinkedList::Add(int data) 
{
    if (nullptr != m_actuallinkedlist)
    {
        m_actuallinkedlist->Addend(data);
    }
}
void LinkedList::Print()
{
    if (nullptr != m_actuallinkedlist)
    {
        m_actuallinkedlist->Traverse();
    }
}
void LinkedList::Replace(int data, int index)
{
    if (nullptr != m_actuallinkedlist)
    {
        m_actuallinkedlist->Overwrite(data, index);
    }
}
void LinkedList::Delete(int index)
{
    if (nullptr != m_actuallinkedlist)
    {
        m_actuallinkedlist->Delete(index);
    }
}
void LinkedList::Insert(int data, int index)
{
    if (nullptr != m_actuallinkedlist)
    {
        m_actuallinkedlist->Insert(data, index);
    }
}
int LinkedList::Find(int index)
{
    if (nullptr != m_actuallinkedlist)
    {
        return m_actuallinkedlist->Find(index);
    }
}