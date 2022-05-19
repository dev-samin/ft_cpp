#include <iostream>

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *array;
public:
	/*
	Construction with no parameter: creates an empty array.
	*/
	Array()
	{
		this->_size = 0;
		this->array = new T[this->_size];
	}
	/*
	Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then
	display *a.)
	*/
	Array(unsigned int n)
	{
		this->_size = n;
		this->array = new T[this->_size];
	}
	
	/*
	Construction by copy and assignment operator. In both cases, modifying one of
	the two arrays after copy/assignment won’t affect anything in the other array.
	*/
	Array(const Array<T> &origin)
	{
		this->_size = origin._size;
		this->array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->array[i] = origin.array[i];
	}

	Array<T> &operator=(const Array<T> &origin)
	{
		delete [] this->array;
		this->_size = origin._size;
		this->array = new T[this->_size]; //깊은복사 하라고 한거 같아서
		for (unsigned int i = 0; i < this->_size; i++)
			this->array[i] = origin.array[i];
		return (*this);
	}

	~Array() 
	{
		delete [] this->array;
	}

	/*
	When accessing an element with the operator[], if this element is out of the limits,
	a std::exception is thrown.
	*/
	T &operator[](int index)
	{
		/*
			음수거나 크기 너무 클때 예외/
		*/
		if (index < 0 || index >= static_cast<int>(this->_size))
			throw ArrayException();
		return (this->array[index]);
	}

	class ArrayException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "ArrayException: Array index out of bound";
		}
	};

	int size() const
	{
		return (this->_size);
	}
};
