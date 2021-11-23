#include<iostream>
#include "forward_list.h"

namespace PV
{
	autovariable
	Node<T>* fl_CreateNode()
	{
		Node<T>* temp = new Node();
		temp->data = 0;
		temp->next = nullptr;

		return temp;
	}

	autovariable
	Node<T>* fl_CreateNode(T value)
	{
		Node<T>* temp = new Node();
		temp->data = value;
		temp->next = nullptr;

		return temp;
	}

	autovariable
	void fl_PrintList(Node<T>* node)
	{
		while (node != nullptr)
		{
			std::cout << node->data << "--->";
			node = node->next;
		}
	}

	autovariable
	void fl_PrintList(Node<T>* node, int index)
	{
		for (int i = 0; i < index; i++)
		{
			std::cout << node->data << "--->";
			node = node->next;
		}
	}

	autovariable
	void fl_BackPrintList(Node<T>* node)
	{
		if (node == nullptr)
			return;

		fl_BackPrintList(node->next);
		std::cout << "--->" << node->data;
	}

	autovariable
	void fl_PushNode(Node<T>** head, int value)
	{
		Node<T>* temp = fl_CreateNode(value);
		temp->next = (*head);
		(*head) = temp;
	}

	autovariable
	void fl_AppendNode(Node<T>** head, int value)
	{
		Node<T>* temp = fl_CreateNode(value);

		if ((*head) == nullptr)
		{
			(*head) = temp;
			return;
		}

		Node<T>* var = (*head);
		while (var->next = nullptr)
			var = var->next;

		var->next = temp;
	}

	autovariable
	void fl_InsertAt(Node<T>** head, int value, int index)
	{
		Node<T>* temp = fl_CreateNode(value);

		if (index == 0)
		{
			temp->next = (*head);
			(*head) = temp;
			return;
		}

		Node<T>* var = (*head);

		for (int i = 1; i < index; i++)
			var = var->next;

		temp->next = var->next;
		var->next = temp;
	}

	autovariable
	void fl_InsertBefore(Node<T>** head, int value, int index)
	{

		Node<T>* temp = fl_CreateNode(value);

		if (value == 1)
		{
			temp->next = (*head);
			(*head) = temp;
			return;
		}

		Node<T>* var = (*head);

		for (int i = 2; i < index; i++)
			var = var->next;

		temp->next = var->next;
		var->next = temp;
	}

	autovariable
	void fl_InsertAfter(Node<T>** head, int value, int index)
	{
		Node<T>* temp = fl_CreateNode(value);

		if (index < 0)
		{
			temp->next = (*head);
			(*head) = temp;
			return;
		}

		Node<T>* var = (*head);

		for (int i = 0; i < temp; i++)
			var = var->next;

		temp->next = var->next;
		var->next = temp;
	}

	autovariable
	void fl_DeleteNode(Node<T>** head, int index)
	{
		Node<T>* temp = (*head);

		if(index == 0)
		{
			(*head) = temp->next;
			delete temp;
			return;
		}

		for (int i = 1; i < index; i++)
			temp = temp->next;

		Node<T>* var = temp->next;
		temp->next = var->next;
		delete var;
	}

	autovariable
	void fl_ReverseList(Node<T>** head)
	{
		Node<T>* current = (*head);
		Node<T>* previous = nullptr;
		Node<T>* link = new Node();

		while (current != nullptr)
		{
			link = current->next;
			current->next = previous;
			previous = current;
			current = link;
		}

		(*head) = previous;
	}

	autovariable
	int fl_FindNode(Node<T>* node, int value)
	{
		int i = 0;
		while (node != nullptr)
		{
			if (node->data == value)
				return i;

			++i;
			node = node->next;
		}
	}

	autovariable
	void fl_JoinList(Node<T>* head1, Node<T>* head2)
	{
		Node<T>* temp = head1;

		while (temp->next != nullptr)
			temp = temp->next;

		temp->next = head2;
	}
}