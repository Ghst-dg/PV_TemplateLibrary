#pragma once
#define autovariable template<typename T>

namespace PV
{
	autovariable
	class Element
	{
	public:
		Element* next;
		Element* previous;
		T data = 0;
	};

	autovariable
	Element<T>* l_CreateNode();

	autovariable
		Element<T>* l_CreateNode(T value);

	autovariable
		void l_PrintList(Element<T>* node);

	autovariable
		void l_PrintList(Element<T>* node, int index);

	autovariable
		void l_BackPrintList(Element<T>* node);

	autovariable
		void l_PushNode(Element<T>** head, int value);

	autovariable
		void l_AppendNode(Element<T>** head, int value);

	autovariable
		void l_InsertAt(Element<T>** head, int value, int index);

	autovariable
		void l_InsertBefore(Element<T>** head, int value, int index);

	autovariable
		void l_InsertAfter(Element<T>** head, int value, int index);

	autovariable
		void l_DeleteNode(Element<T>** head, int index);

	autovariable
		void l_ReverseList(Element<T>** head);

	autovariable
		int l_FindNode(Element<T>* node, int value);

	autovariable
		void l_JoinList(Element<T>* head1, Element<T>* head2);
}
