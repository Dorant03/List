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
  	~Array()
	{
		count = 0;
		delete[] __array;
	}
};
