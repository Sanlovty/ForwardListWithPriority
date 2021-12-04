#ifndef FORWARDLIST_H
#define FORWARDLIST_H
#include <exception>
#include "Node.h"

using std::exception;

class ForwardList
{
	Node* head_;
public:
	ForwardList();
	ForwardList(const ForwardList& other);
	~ForwardList();

	void pushBack(const int& data);
	void pushFront(const int& data);
	void popFront();
	void popBack();

	void pushByPriorityAsc(const int& data); // �� �����������
	void pushByPriorityDesc(const int& data); // �� ��������

	bool isEmpty() const;
	int front() const;
};

#endif
