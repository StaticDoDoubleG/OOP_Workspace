#include "list.cpp"
#include <string>
int main()
{
	// Instantiation of a list object
	List <string> list;
	// Inserting six nodes in the list
	list.insert(0, "Michael");
	list.insert(1, "Jane");
	list.insert(2, "Sophie");
	list.insert(3, "Thomas");
	list.insert(4, "Rose");
	list.insert(5, "Richard");
	// Printing the values of nodes
	cout << "Printing the list" << endl;
	list.print();
	// Printing the values of three nodes
	cout << "Getting data in some nodes" << endl;
	cout << list.get(0) << endl;
	cout << list.get(3) << endl;
	cout << list.get(5) << endl;
	// Erasing three nodes from the list
	cout << "Erasing some nodes and printing after erasures" << endl ;
	list.erase(0);
	list.erase(3);
	list.print();
	// Printing the list after erasures
	cout << "Checking the list size" << endl;
	cout << "List size: " << list.size();
	return 0;
}