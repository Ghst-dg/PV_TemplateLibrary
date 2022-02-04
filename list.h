#pragma once
#define ull unsigned long long int

namespace PV
{
	template <typename T>
	class List
	{
	public:
		List(T value = 0);
		~List();

		T& Front();
		T& Back();

		T PushBack(T value);
		T PushFront(T value);
		T PopBack();
		T PopFront();
		T Insert(T value, ull index);
		T Erase(ull index);
		void Swap(ull index1, ull index2);

		void Reverse();

	private:
		class Node
		{
		public:
			Node* next;
			T data;
		};
		Node* node = new Node();
	};

	template<typename T>
	inline List<T>::List(T value)
	{
		node->next = nullptr;
		node->data = value;
	}

	template<typename T>
	inline List<T>::~List()
	{
		while (node != nullptr)
		{
			Node* temp = node;
			node = node->next;
			delete temp;
		}
	}

	template<typename T>
	inline T& List<T>::Front()
	{
		return node->data;
	}

	template<typename T>
	inline T& List<T>::Back()
	{
		Node* temp = node;

		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		return temp->data;
	}

	template<typename T>
	inline T List<T>::PushBack(T value)
	{
		Node* head = node;
		Node* temp = new Node();
		temp->data = value;
		temp->next = nullptr;

		while(head->next != nullptr)
		{
			head = head->next;
		}

		head->next = temp;

		return value;
	}

	template<typename T>
	inline T List<T>::PushFront(T value)
	{
		Node* temp = new Node();
		temp->data = value;
		temp->next = node;
		node = temp;
		return value;
	}

	template<typename T>
	inline T List<T>::PopBack()
	{
		Node* temp = node;
		while (temp->next->next != nullptr)
			temp = temp->next;

		T value = temp->next->data;
		delete temp->next;
		temp->next = nullptr;
		return value;
	}

	template<typename T>
	inline T List<T>::PopFront()
	{
		Node* temp = node;
		node = node->next;
		T value = temp->data;
		delete temp;
		return value;
	}

	template<typename T>
	inline T List<T>::Insert(T value, ull index)
	{
		if (index == 0)
			PushFront(value);

		else
		{
			Node* temp = node;
			while (temp->next != nullptr && index > 1)
			{
				temp = temp->next;
				--index;
			}
			Node* var = new Node();
			var->next = temp->next;
			var->data = value;
			temp->next = var;
		}

		return value;
	}
	template<typename T>
	inline T List<T>::Erase(ull index)
	{
		if (index == 0)
			return PopFront();

		Node* temp = node;
		while (temp->next != nullptr && index > 1)
		{
			temp = temp->next;
			--index;
		}

		Node* var = temp->next;
		temp->next = var->next;
		T value = var->data;
		delete var;
		return value;
	}

	template<typename T>
	inline void List<T>::Swap(ull index1, ull index2)
	{
		Node* temp1 = node;
		Node* temp2 = node;

		while (index1 > 0)
		{
			temp1 = temp1->next;
			--index1;
		}

		while (index2 > 0)
		{
			temp2 = temp2->next;
			--index2;
		}

		temp1->data = temp1->data + temp2->data;
		temp2->data = temp1->data - temp2->data;
		temp1->data = temp1->data - temp2->data;
	}

	template<typename T>
	inline void List<T>::Reverse()
	{
		Node* prev = nullptr;
		Node* current = node;
		Node* link = new Node();

		while (current != nullptr)
		{
			link = current->next;
			current->next = prev;
			prev = current;
			current = link;
		}

		node = prev;
	}
}
