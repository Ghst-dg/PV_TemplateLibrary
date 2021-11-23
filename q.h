#pragma once

namespace PV
{
	template<typename T, int S>
	class Q
	{
	private:
		Q() { front = -1; back = -1; }
		void append(T item)
		{
			if (front < 0)
				front = 0;

			back++;
			elements[back] = item;
		}
		void pop()
		{
			front++;
			if (front > back)
				Q();
		}
		T seek() { return elements[front]; }
		int size() { return back + 1; }
		int top() { return front; }
		T at(int index) { return elements[front + index]; }
		void clear() { Stack(); }
		int search(T value)
		{
			for (int i = top; i <= back; i++)
				if (elements[i] == value)
					return i;
		}

	public:
		T elements[S] = { 0 };
		int front = -1;
		int back = -1;
	};
}