//
//  Header.h
//  Stack
//
//  Created by Барабаш Мирослава on 02.11.17.
//  Copyright © 2017 Барабаш Мирослава. All rights reserved.
//

#ifndef Header_h
#define Header_h
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
