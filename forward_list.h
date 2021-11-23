#pragma once
#define autovariable template<typename T>

namespace PV
{
	autovariable
	class Node
	{
	public:
		Node* next;
		T data = 0;
	};

	autovariable
	Node<T>* fl_CreateNode();

	autovariable
	Node<T>* fl_CreateNode(T value);

	autovariable
	void fl_PrintList(Node<T>* node);

	autovariable
	void fl_PrintList(Node<T>* node, int index);

	autovariable
	void fl_BackPrintList(Node<T>* node);

	autovariable
	void fl_PushNode(Node<T>** head, int value);

	autovariable
	void fl_AppendNode(Node<T>** head, int value);

	autovariable
	void fl_InsertAt(Node<T>** head, int value, int index);

	autovariable
	void fl_InsertBefore(Node<T>** head, int value, int index);

	autovariable
	void fl_InsertAfter(Node<T>** head, int value, int index);

	autovariable
	void fl_DeleteNode(Node<T>** head, int index);

	autovariable
	void fl_ReverseList(Node<T>** head);

	autovariable
	int fl_FindNode(Node<T>* node, int value);

	autovariable
	void fl_JoinList(Node<T>* head1, Node<T>* head2);
}