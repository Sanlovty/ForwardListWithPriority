#include "Node.h"

Node::Node() : data_(int()), next_(nullptr)
{
}

Node::Node(const int& data) : data_(data), next_(nullptr)
{
}

Node::Node(const int& data, Node* next) : data_(data), next_(next)
{
}

Node* Node::getNext() const
{
	return next_;
}

int Node::getData() const
{
	return data_;
}

void Node::setNext(Node* next)
{
	next_ = next;
}

void Node::setNext(Node& next)
{
	next_ = &next;
}

void Node::setData(const int& data)
{
	data_ = data;
}
