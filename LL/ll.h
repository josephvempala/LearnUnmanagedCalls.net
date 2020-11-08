#pragma once
typedef struct node
{
	int data;
	node* next;
}NODE;
class InternalList {
private:
	int Length;
public:
	NODE* head;
	NODE* endpointer;
	InternalList();
	~InternalList();
	void Addend(int);
	void Traverse();
	void Insert(int, int);
	void Delete(int);
	void Overwrite(int, int);
	int Find(int);
};