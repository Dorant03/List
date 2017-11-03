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
