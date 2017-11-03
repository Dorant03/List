#pragma once
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
	int count;
public:
	Array()
	{
		_array = new T[200];
		count = 0;
	}
	void AddElementAtPosition()
	{
		int n;
		cout << "Input number of element: ";
		cin >> n;
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
	}
	void SubtracElement()
	{
		int n;
		cout << "Input number of element: ";
		cin >> n;
		if(n==-1)
		{
			n=count-1;
		}
		for (int i = n; i < count-1; ++i)
		{
			_array[i] = _array[i + 1];
		}
		--count;
	}
	void AddTwoArray(Array *array2)
	{
		for (int i = count; i < (count1 + array2->getCount()); ++i)
			array1[i] = array2[i - count1];
		count1 += count2;
	}
	void ObernArray()
	{
		int c;
		for (int i = 0; i < (count / 2); ++i)
		{
			c = _array[i];
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
	{
		int c;
		cout << "Input element, which you want find: ";
		cin >> c;
		for (int i = 0; i < count; ++i)
		{
			if (_array[i] == c)
			{
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