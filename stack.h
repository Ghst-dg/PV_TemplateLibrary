#pragma once

namespace PV
{
	template<typename T, int S>
	class Stack
	{
	public:
		Stack(){ top = -1;}
		void push(T item)
		{
			top++;
			elements[top] = item;
		}
		void pop() { --top; }
		T seek() { return elements[top]; }
		int size() { return top + 1; }
		T at(int index) { return elements[index]; }
		void clear() { Stack() }
		int search(T value)
		{
			for (int i = 0; i <= top; i++)
				if (elements[i] == value)
					return i;
		}

	private:
		T elements[S] = { 0 };
		int top = -1;
	};
}
