#pragma once
using namespace std;
template<class T>
using namespace std;
template<class T>
class _array
{
private:
	T* __array;
	int count;
public:
	Array()
	{
		T* _array = new[200];
		count = 0;
	}
	void AddElementAtPosition()
	{
		int n;
		cout << "Input number of element: ";
		cin >> n;
		int b;
		cout << "Input element new first: ";
		cin >> b;
		for (int i = count; i > n; --i)
		{
			_array[count] = _array[count - 1];
		}
		_array[count] = b;
		++count;
	}
	void SubtracElement()
	{
		int n;
		cout << "Input number of element: ";
		cin >> n;
		for (int i = count; i < count-1; ++i)
		{
			_array[i] = _array[i + 1];
		}
		--count;
	}
	void Print()
	{
		for (int i = 0; i < count; ++i)
			cout << _array[i] << " ";
	}
  	~Array()
	{
		count = 0;
		delete[] __array;
	}
};
