#include <iostream>
#include "list.h"

#define autovariable template<typename T>

namespace PV
{
	autovariable
	Element<T>* l_CreateNode()
	{
		Element<T>* temp = new Element();
		temp->data = 0;
		temp->next = nullptr;
		temp->previous = nullptr;

		return temp;
	}

	autovariable
	Element<T>* l_CreateNode(T value)
	{
		Element<T>* temp = new Element();
		temp->data = value;
		temp->next = nullptr;
		temp->previous = nullptr;

		return temp;
	}

	autovariable
	void l_PrintList(Element<T>* node)
	{
		while (node != nullptr)
		{
			std::cout << node->data << "--->";
			node = node->next;
		}
	}

	autovariable
	void l_PrintList(Element<T>* node, int index)
	{
		for (int i = 0; i < index; i++)
		{
			std::cout << node->data << "--->";
			node = node->next;
		}
	}

	autovariable
	void l_BackPrintList(Element<T>* node)
	{
		if (node == nullptr)
			return;

		fl_BackPrintList(node->next);
		std::cout << "--->" << node->data;
	}

	autovariable
	void l_PushNode(Element<T>** head, int value)
	{
		Element<T>* temp = l_CreateNode(value);
		(*head)->previous = temp;
		temp->next = (*head);
		(*head) = temp;
	}

	autovariable
	void l_AppendNode(Element<T>** head, int value)
	{
		Element<T>* temp = l_CreateNode(value);

		if ((*head) == nullptr)
		{
			(*head) = temp;
			return;
		}

		Element<T>* var = (*head);
		while (var->next = nullptr)
			var = var->next;

		var->next = temp;
		temp->previous = var;
	}

	autovariable
	void l_InsertAt(Element<T>** head, int value, int index)
	{
		Element<T>* temp = l_CreateNode(value);

		if (index == 0)
		{
			(*head)->previous = temp;
			temp->next = (*head);
			(*head) = temp;
			return;
		}

		Element<T>* var = (*head);

		for (int i = 1; i < index; i++)
			var = var->next;

		temp->next = var->next;
		temp->previous = var;
		var->next->previous = temp;
		var->next = temp;
	}

	autovariable
	void l_InsertBefore(Element<T>** head, int value, int index)
	{
		Element<T>* temp = l_CreateNode(value);

		if (index == 0)
		{
			(*head)->previous = temp;
			temp->next = (*head);
			(*head) = temp;
			return;
		}

		Element<T>* var = (*head);

		for (int i = 2; i < index; i++)
			var = var->next;

		temp->next = var->next;
		temp->previous = var;
		var->next->previous = temp;
		var->next = temp;
	}

	autovariable
	void l_InsertAfter(Element<T>** head, int value, int index)
	{
		Element<T>* temp = l_CreateNode(value);

		if (index == 0)
		{
			(*head)->previous = temp;
			temp->next = (*head);
			(*head) = temp;
			return;
		}

		Element<T>* var = (*head);

		for (int i = 0; i < index; i++)
			var = var->next;

		temp->next = var->next;
		temp->previous = var;
		var->next->previous = temp;
		var->next = temp;
	}

	autovariable
	void l_DeleteNode(Element<T>** head, int index)
	{
		Element<T>* temp = (*head);

		if (index == 0)
		{
			(*head) = temp->next;
			delete temp;
			return;
		}

		for (int i = 1; i < index; i++)
			temp = temp->next;

		Element<T>* var = temp->next;
		var->next->previous = temp;
		temp->next = var->next;
		delete var;
	}

	autovariable
	int l_FindNode(Element<T>* node, int value)
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
	void l_ReverseList(Element<T>** head)
	{
		Element<T>* current = (*head);
		Element<T>* link = new Element();

		while (current != nullptr)
		{
			link = current->prev;
			current->prev = current->next;
			current->next = link;
			current = current->previous;
		}

		if(current != nullptr)
			(*head) = current->previous;
	}



	autovariable
	void l_JoinList(Element<T>* head1, Element<T>* head2)
	{
		Element<T>* temp = head1;

		while (temp->next != nullptr)
			temp = temp->next;

		temp->next = head2;
		head2->previous = temp;
	}
}