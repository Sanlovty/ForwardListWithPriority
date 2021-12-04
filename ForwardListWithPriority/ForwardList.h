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
	~ForwardList();

	void pushBack(const int& data);
	void pushFront(const int& data);
	void popFront();
	void popBack();

	bool isEmpty() const;
	int front() const;
};

#endif
