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
class Queue
{
private:
	int count;
	Node<T> *head;
	Node<T> *tail;
public:
	Queue()
    {
		head=NULL;
		tail=NULL;
		count=0;
	}
	void puchBack(T _data)
	{
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
		count++;
	}
	void print(char *end_)
	{
		cout<<endl;
		if(head==NULL && count==0)
		{
			cout<<"Queue is empty"<<endl;
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
	int getSize()
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
	Node<T> * getHead()
	{
		return head;
	}
	Node<T> * getTail()
	{
		return tail;
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
	void extend(Queue *queue2)
	{
		queue2->print(" ");
		int n=queue2->getSize();
		for(int i=0; i<n; i++)
		{
			puchBack(queue2->getHead()->data);
			queue2->pop();
		}
	}
	~Queue()
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
