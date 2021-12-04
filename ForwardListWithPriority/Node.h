#ifndef NODE_H
#define NODE_H

class Node
{
	int data_;
	Node* next_;
public:
	Node();
	Node(const int& data);
	Node(const int& data, Node* next);

	Node* getNext() const;
	int getData() const;

	void setNext(Node* next);
	void setNext(Node& next);
	void setData(const int& data);
};

#endif
