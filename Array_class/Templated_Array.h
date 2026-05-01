#ifndef TEMPLATED_ARRAY_H
#define TEMPLATWD_ARRAY_H
#include<iostream>
using namespace std;
template<typename T>
class Array
{
	T* data;
	int size;
	bool isValidIndex(int index)const
	{
		if (index >= 0 && index < size)
			return true;
		return false;
	}
public:
	Array()
	{
		data = nullptr;
		size = 0;
	}
	Array(initializer_list<T> list) :Array()
	{
		size = list.size();
		if (size == 0)
			return;
		data = new T[size];
		int i = 0;
		for (auto x : list)
		{
			data[i] = x;
			i++;
		}

	}

	Array(const Array<T>& x) :Array()
	{
		if (x.data == nullptr)
			return;
		else
		{
			data = new T[x.size];
			size = x.size;
			for (int i = 0; i < size; i++)
				data[i] = x.data[i];
		}
	}

	Array(int cap) :Array()
	{
		if (cap <= 0)
			return;
		else
		{
			data = new T[cap];
			size = cap;
		}
	}

	~Array()
	{
		delete[]data;
		data = nullptr;
		size = 0;
	}

	T& operator[](int index)
	{
		if (isValidIndex(index))
			return data[index];
		else
		{
			exit(0);
		}
	}
	const T& operator[](int index)const
	{
		if (isValidIndex(index))
			return data[index];
		else
		{
			exit(0);
		}
	}

	int getSize()const
	{
		return size;
	}

	void reSize(int newCapacity)
	{
		if (size <= 0)
			this->~Array();
		else
		{
			T* temp = new T[newCapacity];
			for (int i = 0; i < newCapacity && i < size; i++)
				temp[i] = data[i];
			this->~Array();
			data = temp;
			size = newCapacity;

		}
	}
	Array<T>& operator=(const Array<T>& a)
	{
		if (this == &a)
			return*this;
		this->~Array();
		size = a.size;
		data = new T[a.size];
		for (int i = 0; i < size; i++)
			data[i] = a.data[i];
		return *this;
	}
	Array<T>& operator=(Array<T>&& a)
	{
		if (this == &a)
			return *this;
		this->~Array();
		data = a.data;
		size = a.size;
		a.size = 0;
		a.data = nullptr;

	}

	Array(Array<T>&& a)
	{
		data = a.data;
		size = a.size;
		a.size = 0;
		a.data = nullptr;
	}

	const T* begin()const
	{
		if (size == 0)
			return nullptr;
		return &data[0];
	}
	const T* end()const
	{
		if (size == 0)
			return nullptr;
		return &data[size];
	}

};
template <typename T>
ostream& operator<<(ostream& os, const Array<T>& a)
{
	for (int i = 0; i < a.getSize(); i++)
	{
		os << a[i]<<" , ";
	}
	return os;
}
template <typename R>
istream& operator>>(istream& is, Array<R>& a)
{
	for (int i = 0; i < a.getSize(); i++)
	{
		is >> a[i];
	}
	return is;
}

#endif // !TEMPLATED_ARRAY_H
