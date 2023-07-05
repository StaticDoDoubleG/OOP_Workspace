#include <iostream>
#include <cassert>
#include <string>
using namespace std;

template <typename T>
struct Node
{
	T data;
	Node <T>* next;
};

// Extend the List class
template <typename T>
class List
{
private:
	Node <T>* begin;
	int count;
	Node <T>* makeNode(const T& value);
public:
	List();
	~List();
	void insert(int pos, const T& value);
	void erase(int pos);
	T& get(int pos) const;
	void print() const;
	void reversePrint() const;
	void RPHelper(Node<T>* head) const;
	int size() const;
};

int main()
{
	// Instantiation of a List object
	List <int> list1;
	// Insert six nodes in the list
	list1.insert(0, 17);
	list1.insert(1, 23);
	list1.insert(2, 11);
	list1.insert(3, 18);
	// Printing the value of list in forward direction
	cout << "Printing the list1" << endl;
	list1.print();
	cout << endl << endl;
	// Printing the value of list in reverse direction
	cout << "Printing the list1 in reverse order" << endl;
	list1.reversePrint();
	cout << endl << endl;
	// Instantiation of a List object
	List <string> list2;
	// Insert six nodes in the list
	list2.insert(0, "Michael");
	list2.insert(1, "Jane");
	list2.insert(2, "Sophie");
	list2.insert(3, "Thomas");
	list2.insert(4, "Rose");
	list2.insert(5, "Richard");
	// Printing the value of list in forward direction
	cout << "Printing the list2" << endl;
	list2.print();
	cout << endl << endl;
	// Printing the value of list in reverse direction
	cout << "Printing the list2 in reverse order" << endl;
	list2.reversePrint();
	cout << endl << endl;
	printf("\n Press Any Key to Terminate ...\n");
	getchar();
	return 0;
}

// Constructor
template <typename T>
List <T> ::List()
	:begin(0), count(0)
{
}

// Destructor
template <typename T>
List <T> :: ~List()
{
	Node <T>* del = begin;
	while (begin)
	{
		begin = begin -> next;
		delete del;
		del = begin;
	}
}

// Insert member function
template <typename T>
void List <T> ::insert(int pos, const T& value)
{
	if (pos < 0 || pos > count)
	{
		cout << "Error! The position is out of range." << endl;
		return;
	}
	Node <T>* add = makeNode(value);
	if (pos == 0)
	{
		add->next = begin;
		begin = add;
	}
	else
	{
		Node <T>* cur = begin;
		for (int i = 1; i < pos; i++)
		{
			cur = cur->next;
		}
		add->next = cur->next;
		cur->next = add;
	}
	count++;
}

// MakeNode member function (private)
template <typename T>
Node <T>* List <T> ::makeNode(const T& value)
{
	Node <T>* temp = new Node <T>;
	temp->data = value;
	temp->next = 0;
	return temp;
}

// Erase member function
template <typename T>
void List <T> ::erase(int pos)
{
	if (pos < 0 || pos >(count - 1))
	{
		cout << "Error! The position is out of range." << endl;
		return;
	}
	if (pos == 0)
	{
		Node <T>* del = begin;
		begin = begin->next;
		delete del;
	}
	else
	{
		Node <T>* cur = begin;
		for (int i = 0; i < pos - 1; i++)
		{
			cur = cur->next;
		}
		Node <T>* del = cur->next;
		cur->next = cur->next->next;
		delete del;
	}
	count--;
}

// Get member function
template <typename T>
T& List <T> ::get(int pos) const
{
	if (pos < 0 || pos > count - 1)
	{
		cout << "Error! Position out of range.";
		assert(false);
	}
	else if (pos == 0)
	{
		return begin->data;
	}
	else
	{
		Node <T>* cur = begin;
		for (int i = 0; i < pos; i++)
		{
			cur = cur->next;
		}
		return cur->data;
	}
}

// Size member function
template <typename T>
int List <T> ::size() const
{
	return count;
}

// Implement print member function
// Print member function
template <typename T>
void List <T> ::print() const
{
	if (count == 0)
	{
		cout << "List is empty!" << endl;
		return;
	}
	Node <T>* cur = begin;
	while (cur != 0)
	{
		cout << cur->data << endl;
		cur = cur->next;
	}
}
// Implement reversePrint member function
template <typename T>
void List <T> ::reversePrint() const
{
	if (count == 0)
	{
		cout << "List is empty!" << endl;
		return;
	}
	Node <T>* cur = begin;
	RPHelper(begin);
}

template <typename T>
void List <T> ::RPHelper(Node<T>* head) const {
	if (head == 0) {
		return;
	}
	RPHelper(head->next);
	cout << head->data << endl;
}