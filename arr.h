#pragma once
#define ull unsigned long long int

namespace PV
{
	template <typename T,ull S>
	class Array
	{
	public:
		int Size();
		bool Empty();

		T& operator[](int index);
		T& At(int index);
		T Front();
		T Back();

	private:
		T array[S] = { 0 };
	};

	template<typename T,ull S>
	inline int Array<T, S>::Size()
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
	inline T& Array<T, S>::operator[](int index)
	{
		return array[index];
	}

	template<typename T, ull S>
	inline T& Array<T, S>::At(int index)
	{
		return array[index];
	}

	template<typename T, ull S>
	inline T Array<T, S>::Front()
	{
		return array[0];
	}

	template<typename T, ull S>
	inline T Array<T, S>::Back()
	{
		return array[S - 1];
	}
	

}