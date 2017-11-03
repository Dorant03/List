#pragma once
#ifdef List_EXPORTS
#define List_API __declspec(dllexport) 
#else
#define List_API __declspec(dllimport) 
#endif

using namespace std;

template<class T>
struct Node
{
	T data;
	Node<T> *next;
	Node(T _data)
	{
		data=_data;
		next=NULL;
	}
};
<<<<<<< HEAD

=======
>>>>>>> origin/List1
template<class T>
class List
{
private:
	Node<T> *head;
	Node<T> *tail;
public:
	List()
    {
		head=NULL;
		tail=NULL;
	}
	void puchBack(T _data)
	{
		//(*tail).next=new Node(_data);
		if(head!=NULL)
		{
			tail->next=new Node<T>(_data);
			tail=tail->next;
		}
		else
		{
			head=new Node<T>(_data);
			tail=head;
		}
	}
	void print(char *end_)const
	{
		cout<<endl;
		if(head==NULL)
		{
			cout<<"List is emply"<<endl;
			return;
		}
		Node<T> *ptr=head;
		while (ptr!=NULL)
		{
			cout<<ptr->data<<end_;
			ptr=ptr->next;
		}
		cout<<endl;
	}
	int size()
	{
		int number=0;
		if(head==NULL)
		{
			return 0;
		}
		Node<T> *ptr=head;
		while (ptr!=NULL)
		{
			number++;
			ptr=ptr->next;
		}
		return number;
	}
	void replace(int i, int j)
	{
		Node<T> *ptr1=head;
		Node<T> *ptr2=head;
		while(i!=0)
		{
			if(ptr1==NULL)
			{
				cout<<"Error: list index out of range"<<endl;
				return;
			}
			ptr1=ptr1->next;
			i--;
		}
		while(j!=0)
		{
			if(ptr2==NULL)
			{
				cout<<"Error: list index out of range"<<endl;
				return;
			}
			ptr2=ptr2->next;
			j--;
		}
		swap(ptr1->data, ptr2->data);
	}
<<<<<<< HEAD
	void pop(int i)
=======
void pop(int i)
>>>>>>> origin/List1
	{
		if(i<0 || i+1>size())
		{
			cout<<"Error: list index out of range"<<endl;
			return;
		}
		Node<T> *ptr=head;
		while(i>0)
		{
			if(ptr->next==tail)
			{
<<<<<<< HEAD
				delete ptr->next;
=======
>>>>>>> origin/List1
				ptr->next=NULL;
				tail=ptr;
				return;
			}
			i--;
			if(i==0)
			{
<<<<<<< HEAD
				Node<T> *ptr1=ptr->next;
				ptr->next=ptr->next->next;
				delete ptr->next;
=======
				ptr->next=ptr->next->next;
>>>>>>> origin/List1
				return;
			}
			else ptr=ptr->next;
		}
<<<<<<< HEAD
		if(ptr==head && ptr==tail) clear();
		else
		{
			head=head->next;
			delete ptr;
		}
=======
		if(ptr==head && ptr==tail) del();
		else head=head->next;
>>>>>>> origin/List1
	}
	void insert(int i, T elem)
	{
		Node<T> *ptr=head;
		if(i>size())
		{
			cout<<"Error: list index out of range"<<endl;
			return;
		}
		if(i==size())
		{
			puchBack(elem);
			return;
		}
		if(i==0)
		{
			head=new Node<T>(elem);
			head->next=ptr;
			return;
		}
		Node<T> *ptr1;
		while(i!=1)
		{
			ptr=ptr->next;
			i--;
		}
		ptr1=ptr->next;
		ptr->next=new Node<T>(elem);
		ptr->next->next=ptr1;
	}
<<<<<<< HEAD
	Node<T> * getValue(int i)
=======
	T getValue(int i)
>>>>>>> origin/List1
	{
		Node<T> *ptr=head;
		for(int k=0; k<i; k++)
		{
			ptr=ptr->next;
		}
<<<<<<< HEAD
		return ptr;
=======
		return ptr->data;
>>>>>>> origin/List1
	}
	void reverse()
	{
		int n=size();
		for(int i=0; i<n/2; i++)
		{
			replace(i, n-i-1);
		}
	}
<<<<<<< HEAD
	void clear()
=======
	void del()
>>>>>>> origin/List1
	{
		if(head==NULL) return;
		Node<T> *ptr=head;
		while(ptr!=NULL)
		{
			head=head->next;
			delete ptr;
			ptr=head;
		}
<<<<<<< HEAD
		head=NULL;
=======
>>>>>>> origin/List1
		tail=NULL;
	}
	void sort(string sing)
	{
		if(sing=="+")
		{
			for(int i=0; i<size()-1; i++)
			{
				for(int j=0; j<size()-i-1; j++)
				{
					if(getValue(j)>getValue(j+1))
					{
						replace(j, j+1);
					}
				}
			}
		}
	}
<<<<<<< HEAD
	int find(T elem)
	{
		for(int i=0; i<size(); i++)
		{
			if(getValue(i)->data==elem)
=======
	void find(T elem)
	{
		for(int i=0; i<size(); i++)
		{
			if(getValue(i)==elem)
>>>>>>> origin/List1
			{
				return i;
			}
		}
		return -1;
	}
	void extend(List *list)
	{
		for(int i=0; i<list->size(); i++)
		{
<<<<<<< HEAD
			puchBack(list->getValue(i)->data);
=======
			puchBack(list->getValue(i));
>>>>>>> origin/List1
		}
	}
	~List()
	{
		if(head==NULL) return;
		Node<T> *ptr=head;
		while(ptr!=NULL)
		{
			head=head->next;
			delete ptr;
			ptr=head;
		}
	}
<<<<<<< HEAD
};
=======
};
>>>>>>> origin/List1
