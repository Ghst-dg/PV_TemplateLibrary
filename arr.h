#pragma once

namespace PV
{
	template <typename T, int S>
	class Array
	{
	public:
		int Size() { return S; }
		T& operator[](int index) { return array[index]; }
		T Front() { return array[0]; }
		T Back() { return array[S - 1]; }
		int Search(T value)
		{
			for (int i = 0; i < S; i++)
				if (value == array[i])
					return i;

			return -1;
		}

	private:
		T array[S] = { 0 };
	};
}