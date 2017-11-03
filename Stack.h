#pragma once
#ifdef Stack_EXPORTS
#define Stack_API __declspec(dllexport) 
#else
#define Stack_API __declspec(dllimport) 
#endif
#include "List.h"
using namespace std;

/*template<class T>
struct Node
{
	T data;
	Node<T> *next;
	Node(T _data)
	{
		data=_data;
		next=NULL;
	}
};*/

template<class T>
class Stack
{
private:
	int count;
	Node<T> *head;
public:
	Stack()
    {
		count=0;
		head=NULL;
	}
	void puchBack(T _data)
	{
		Node<T> *ptr=head;
		head=new Node<T>(_data);
		head->next=ptr;
		count++;
	}
	void print(char *end_)
	{
		cout<<endl;
		if(head==NULL && count==0)
		{
			cout<<"Stack is emply"<<endl;
			return;
		}
		Node<T> *ptr=head;
		while (head!=NULL)
		{
			cout<<head->data<<end_;
			pop();
		}
		cout<<endl;
	}
	int getSize()const
	{
		return count;
	}
	T pop()
	{
		T value;
		if(head==NULL && count==0)
		{
			cout<<"Stack is emply"<<endl;
			return 0;
		}
		Node<T> *ptr=head;
		head=head->next;
		value=ptr->data;
		delete ptr;
		count--;
		return value;
	}
	Node<T> * getValue()
	{
		return head;
	}
	void clear()
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
	void extend(Stack *stack2)
	{
		stack2->print(" ");
		int n=stack2->getSize();
		for(int i=0; i<n; i++)
		{
			puchBack(stack2->getValue()->data);
			stack2->pop();
		}
	}
	~Stack()
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
};