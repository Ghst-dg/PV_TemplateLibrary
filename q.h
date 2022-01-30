#pragma once
#define ull unsigned long long int

namespace PV
{
	template<typename T, ull S>
	class Q
	{
	public:
		bool Empty();
		ull Size();

		T& First();
		T& Last();

		T Push(T value);
		T Pop();

	private:
		T q[S] = { 0 };
		ull front = -1;
		ull back = -1;
	};

	template<typename T, ull S>
	inline bool Q<T, S>::Empty()
	{
		if (front == -1 && back == -1)
			return true;

		return false;
	}

	template<typename T, ull S>
	inline ull Q<T, S>::Size()
	{
		if (front == -1 && back == -1)
			return 0;

		return back - front + 1;
	}
	template<typename T, ull S>
	inline T& Q<T, S>::First()
	{
		return q[front];
	}

	template<typename T, ull S>
	inline T& Q<T, S>::Last()
	{
		return q[back];
	}

	template<typename T, ull S>
	inline T Q<T, S>::Push(T value)
	{
		if (front == -1)
			front = 0;

		++back;
		q[back] = value;

		return q[back];
	}

	template<typename T, ull S>
	inline T Q<T, S>::Pop()
	{
		T value = q[front];

		if (front >= back)
		{
			front = -1;
			back = -1;
		}

		else
		{
			q[front] = 0;
			front++;
		}

		return value;
	}
}