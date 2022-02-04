#pragma once
#include "arr.h"
#define ull unsigned long long int

namespace PV
{
	template<typename T, ull S>
	class Stack
	{
	public:
		bool Empty();
		ull Size();
		T& Top();

		T Push(T value);
		T Pop();

	private:
		Array<T, S>stack;
		ull top = -1;
	};

	template<typename T, ull S>
	inline bool Stack<T, S>::Empty()
	{
		if (top == -1)
			return true;

		return false;
	}

	template<typename T, ull S>
	inline ull Stack<T, S>::Size()
	{
		return top + 1;
	}

	template<typename T, ull S>
	inline T& Stack<T, S>::Top()
	{
		return stack[top];
	}

	template<typename T, ull S>
	inline T Stack<T, S>::Push(T value)
	{
		++top;
		stack[top] = value;
		return stack[top];
	}

	template<typename T, ull S>
	inline T Stack<T, S>::Pop()
	{
		T value = stack[top];
		stack[top] = 0;
		--top;
		return value;
	}
}
