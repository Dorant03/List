#pragma once
<<<<<<< HEAD
#ifdef List_EXPORTS
#define List_API __declspec(dllexport) 
#else
#define List_API __declspec(dllimport) 
#endif
using namespace std;
template<class T>
class Array
{
private:
	T* _array;
=======
using namespace std;
template<class T>
using namespace std;
template<class T>
class _array
{
private:
	T* __array;
>>>>>>> origin/Olena
	int count;
public:
	Array()
	{
<<<<<<< HEAD
		_array = new T[200];
=======
		T* _array = new[200];
>>>>>>> origin/Olena
		count = 0;
	}
	void AddElementAtPosition()
	{
		int n;
		cout << "Input number of element: ";
		cin >> n;
<<<<<<< HEAD
		T b;
		cout << "Input element new first: ";
		cin >> b;
		if(n==-1)
		{
			n=count;
		}
		for (int i = count; i  > n; --i)
		{
			_array[count] = _array[count - 1];
		}
		_array[n] = b;
		count++;
	}
	int getCount()
	{
		return count;
=======
		int b;
		cout << "Input element new first: ";
		cin >> b;
		for (int i = count; i > n; --i)
		{
			_array[count] = _array[count - 1];
		}
		_array[count] = b;
		++count;
>>>>>>> origin/Olena
	}
	void SubtracElement()
	{
		int n;
		cout << "Input number of element: ";
		cin >> n;
<<<<<<< HEAD
		if(n==-1)
		{
			n=count-1;
		}
		for (int i = n; i < count-1; ++i)
=======
		for (int i = count; i < count-1; ++i)
>>>>>>> origin/Olena
		{
			_array[i] = _array[i + 1];
		}
		--count;
	}
<<<<<<< HEAD
	void AddTwoArray(Array *array2)
	{
		for (int i = count; i < (count1 + array2->getCount()); ++i)
			array1[i] = array2[i - count1];
		count1 += count2;
	}
	void ObernArray()
=======
	void AddTwo_array(T* array2, int count2)
	{
		for (int i = count; i < (count + count2); ++i)
			_array[i] = _array[i - count];
		count += count2;
	}
	void Obern_array()
>>>>>>> origin/Olena
	{
		int c;
		for (int i = 0; i < (count / 2); ++i)
		{
			c = _array[i];
<<<<<<< HEAD
			_array[i] = _array[count - i-1];
			_array[count - i-1] = c;
		}
	}
	void SortArray()
	{
		for(int i=0; i<count-1; i++)
			{
				for(int j=0; j<count-i-1; j++)
				{
					if(_array[i]>_array[j+1])
					{
						swap(_array[i], _array[j+1]);
					}
				}
			}
	}
	int SearchElement()
=======
			_array[i] = _array[count - i];
			_array[count - i] = c;
		}
	}
	void Sort_array()
	{
		int c;
		bool ok = true;
		for (int i = 1; (i <= size) && ok; ++i)
		{
			ok = false;
			for (int j = 0; j < (size - i); ++j)
			{
				if (_array[j] > _array[j + 1])
				{
					c = _array[j];
					_array[j] = _array[j + 1];
					_array[j + 1] = c;
					ok = true;
				}
			}
		}
	}
	void SearchElement()
>>>>>>> origin/Olena
	{
		int c;
		cout << "Input element, which you want find: ";
		cin >> c;
<<<<<<< HEAD
=======
		bool ok = true;
>>>>>>> origin/Olena
		for (int i = 0; i < count; ++i)
		{
			if (_array[i] == c)
			{
<<<<<<< HEAD
				return i;
			}
		}
	}
	void Print()
	{
		for (int i = 0; i < count; i++)
		{
			cout << _array[i] << " ";
		}
		cout<<endl;
	}
	~Array()
	{
		count = 0;
		delete[] _array;
	}
};
=======
				cout << i << " ";
				ok = false;
			}
		}
		if (ok)
			cout << "There are not this element in the _array";
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
>>>>>>> origin/Olena
