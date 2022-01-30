#pragma once
#define ull unsigned long long int

namespace PV
{
	template <typename T,ull S>
	class Array
	{
	public:
		ull Size();
		bool Empty();

		T& operator[](ull index);
		T& At(ull index);
		T& Front();
		T& Back();

		void Fill(ull value, ull first = 0, ull last = S);
		void Swap(ull index1, ull index2);

	private:
		T array[S] = { 0 };
	};

	template<typename T,ull S>
	inline ull Array<T, S>::Size()
	{
		return S;
	}

	template<typename T, ull S>
	inline bool Array<T, S>::Empty()
	{
		if (S == 0)
			return true;

		return false;
	}

	template<typename T, ull S>
	inline T& Array<T, S>::operator[](ull index)
	{
		return array[index];
	}

	template<typename T, ull S>
	inline T& Array<T, S>::At(ull index)
	{
		return array[index];
	}

	template<typename T, ull S>
	inline T& Array<T, S>::Front()
	{
		return array[0];
	}

	template<typename T, ull S>
	inline T& Array<T, S>::Back()
	{
		return array[S - 1];
	}

	template<typename T, ull S>
	inline void Array<T, S>::Fill(ull value, ull first, ull last)
	{
		for (ull i = first; i < last; i++)
			array[i] = value;
	}

	template<typename T, ull S>
	inline void Array<T, S>::Swap(ull index1, ull index2)
	{
		array[index1] = array[index1] + array[index2];
		array[index2] = array[index1] - array[index2];
		array[index1] = array[index1] - array[index2];
	}
}