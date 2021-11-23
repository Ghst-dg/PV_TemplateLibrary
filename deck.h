#pragma once

namespace PV
{
	template<typename T, int S>
	class Deck
	{
	public:
		Deck() { front = -1; back = -1; }
		void append(T item)
		{
			if (front < 0)
				front = 0;

			back++;
			elements[back] = item;
		}
		void push(T item)
		{
			top++;
			elements[top] = item;
		}
		void popFront()
		{
			--front;
			if (front > back)
				Deck();
		}
		void popBack()
		{
			--back;
			if (front > back)
				Deck();
		}
		void seekFront() { return elements[front]; }
		void seekBack() { return elements[back]; }
		int front() { return front; }
		int back() { return back; }
		int size() { return back + 1; }
		void clear() { Deck(); }
		T at(int index) { return elements[index]; }
		int search(T value)
		{
			for (int i = top; i <= back; i++)
				if (elements[i] == value)
					return i;
		}

	private:
		T elements[S] = { 0 };
		int front = -1;
		int back = -1;
	};
}