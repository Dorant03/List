//
//  Header.h
//  Stack
//
//  Created by Барабаш Мирослава on 02.11.17.
//  Copyright © 2017 Барабаш Мирослава. All rights reserved.
//

#pragma once
#ifdef Stack_EXPORTS
#define Stack_API __declspec(dllexport) 
#else
#define Stack_API __declspec(dllimport) 
#endif
#include "List.h"
using namespace std;

template <typename T>
class Stack
{
private:
	Node<T> *head;
public:
	Stack()
    	{
		head=NULL;
	}
	void puchBack(T _data)
	{
		Node<T> *ptr=head;
		head=new Node<T>(_data);
		head->next=ptr;
	}
	
	void print(char *end_)const
	{
		cout<<endl;
		if(head==NULL)
		{
			cout<<"Stack is emply"<<endl;
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
#endif /* Header_h */
