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
