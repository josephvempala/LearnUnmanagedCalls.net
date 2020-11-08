#pragma once
public ref class LinkedList {
public:
	LinkedList();
	~LinkedList();
	!LinkedList();
	void Add(int);
	void Print();
	void Insert(int, int);
	void Delete(int);
	void Replace(int, int);
	int Find(int);
};