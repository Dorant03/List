<<<<<<< HEAD
=======
//
//  Header.h
//  Stack
//
//  Created by Барабаш Мирослава on 02.11.17.
//  Copyright © 2017 Барабаш Мирослава. All rights reserved.
//

>>>>>>> origin/Miroslava
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

<<<<<<< HEAD
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
=======
template <typename T>
class Stack
{
private:
	Node<T> *head;
public:
	Stack()
    	{
>>>>>>> origin/Miroslava
		head=NULL;
	}
	void puchBack(T _data)
	{
		Node<T> *ptr=head;
		head=new Node<T>(_data);
		head->next=ptr;
<<<<<<< HEAD
		count++;
	}
	void print(char *end_)
	{
		cout<<endl;
		if(head==NULL && count==0)
=======
	}
	
	void print(char *end_)const
	{
		cout<<endl;
		if(head==NULL)
>>>>>>> origin/Miroslava
		{
			cout<<"Stack is emply"<<endl;
			return;
		}
		Node<T> *ptr=head;
<<<<<<< HEAD
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
=======
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
	void pop()
	{
		Node<T> *ptr=head;
		head=head->next;
		delete ptr;
	}
	T getValue()
	{
		return head->data;
	}
	void del()
>>>>>>> origin/Miroslava
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
=======
	void find(T elem)
	{
		for(int i=0; i<size(); i++)
		{
			if(getValue()==elem)
			{
				return i;
			}
		}
		return -1;
	}
	void extend(Stack *stack2)
	{
		stack2->print(" ");
		int n=stack2->size();
		for(int i=0; i<n; i++)
		{
			puchBack(stack2->getValue());
			stack2->pop();
		}
	}
	
>>>>>>> origin/Miroslava
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
<<<<<<< HEAD
};
=======
	
    

};
#endif /* Header_h */
>>>>>>> origin/Miroslava
