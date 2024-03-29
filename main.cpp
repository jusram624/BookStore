
/**
 * You don't need to edit this file, although you can if you wish.
 * This source file will not be graded.
 * 
 * This is a live TUI for the BookStore you're working on. You can
 * use it to manually play around in your store.
 */

//
#include "BookStore.hpp"

//#include "DoublyLinkedList.hpp"

//
#include <iostream>
#include <string>


//
using std::cout, std::cin, std::endl;
using std::string;


//
using CPSC131::BookStore::BookStore, CPSC131::BookStore::Book;


//	PROTO

void menuLoop();
void purchaseInventory();
void viewInventory();
void sellToCustomer();
string getLine();

//	Globals: Not a great practice, but very good for a lazy professor making starter code :)
//BookStore store;


//
int main()
{
	//
	//menuLoop();
	
	/*
	::CPSC131::DoublyLinkedList::DoublyLinkedList<int> list;


	
	
	//list.push_front(3);
	//list.push_front(1);
	//list.push_front(8);
	if(list.empty())
		cout << "Is empty";
	else 
		cout << "Not empty";

	cout << endl;
	cout << "Size: " << list.size() << endl;
	//cout << "Head element: " << list.head()->getElement() << endl;
	//cout << "Tail element: " << list.tail()->getElement() << endl;
	cout<<endl;
	//cout <<list.at(0) << " " << list.at(1) << " " << list.at(2) << " " << endl;
	CPSC131::DoublyLinkedList::DoublyLinkedList<int>::Iterator listItr = list.begin();

	list.insert_after(listItr , 5);
	CPSC131::DoublyLinkedList::DoublyLinkedList<int>::Iterator listItr2 = list.end();
	list.insert_after(listItr2, 6);
	CPSC131::DoublyLinkedList::DoublyLinkedList<int>::Iterator listItr3 = list.begin();
	//listItr3++;

	list.insert_after(listItr3, 8);
	if(list.empty())
		cout << "Is empty";
	else 
		cout << "Not empty";

	cout << endl;
	cout << "Size: " << list.size() << endl;

	for (size_t i = 0; i < list.size(); i++)
	{
		cout << list.at(i) << " ";
	}
	cout <<endl <<endl;
	list.insert_after(1, 2);
	for (size_t i = 0; i < list.size(); i++)
	{
		cout << list.at(i) << " ";
	}
	cout << endl;
	if(list.empty())
		cout << "Is empty";
	else 
		cout << "Not empty";

	cout << endl;
	cout << "Size: " << list.size() << endl;



	CPSC131::DoublyLinkedList::DoublyLinkedList<int>::Iterator listItr4 = list.begin();
	listItr4++;
	//list.erase(listItr4);
	list.push_back(7);
	for (size_t i = 0; i < list.size(); i++)
	{
		cout << list.at(i) << " ";
	}
	cout << endl;
	if(list.empty())
		cout << "Is empty";
	else 
		cout << "Not empty";

	cout << endl;
	cout << "Size: " << list.size() << endl;
	//cout << list.head()->getNext()->getElement();


	
	
	cout << endl;
	// list.clear();
	// if(list.empty())
	// 	cout << "Is empty";
	// else 
	// 	cout << "Not empty";
	// cout << endl << list.size() << endl;
	// cout << list.tail()<< endl << list.head() << endl;

	::CPSC131::DoublyLinkedList::DoublyLinkedList<int> list2;
list2.push_back(5);
list2.push_back(8);
list2.push_back(2);
list2.push_back(6);
list2.push_back(7);
//list2.reverse();
for (size_t i = 0; i < list2.size(); i++)
	{
		cout << list2.at(i) << " ";
	}
	cout << endl;
if(list2 == list){
	cout<< "list are the same" <<endl;
}
else{
	cout << "list are diff" << endl;
}

if(list2 != list){
	cout<< "list are different" <<endl;
}
else{
	cout << "list are same" << endl;
}
*/
//-----------------------------------------------------------------------------------------------------
	//CPSC131::BookStore::BookStore store;
	//Book("How to Enjoy Your Weeds", "Audrey Wynne Hatfield", "080693042X", 1200, 3);
	//Book* book = new Book("How to Enjoy Your Weeds", "Audrey Wynne Hatfield", "080693042X", 1200);
	



	//cout << "Program exiting" << endl;
	/*
	CPSC131::DoublyLinkedList::DoublyLinkedList<int> list1;
	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);
	list1.push_back(4);
	list1.push_back(5);
	//cout << list1.size();
	for(size_t i = 0; i < list1.size(); i++){
		cout << list1.at(i) << endl;
	}
	for(auto it = list1.begin(); it != list1.end(); it++){
		cout << (*it) << endl;
	}
	*/
	
	
	// CPSC131::DoublyLinkedList::DoublyLinkedList<int> list1;
	// for ( size_t i = 0; i < 20; i++ ) {
	// 	int value = (i * 3) - 30;
	// 	list1.push_back(value);
	// 	// std::cout << "value at  " << i << " is " << value << std::endl;
	// }
	// CPSC131::DoublyLinkedList::DoublyLinkedList<int> list2(list1);
	// cout << list2.at(20) << endl;
	// cout << list2.at(19) << endl;
	// for ( size_t i = 0; i < 20; i++ ) {
	// 	cout << list2.at(i) << endl;
	// }
	// auto list2 = list1;
				

	CPSC131::DoublyLinkedList::DoublyLinkedList<int> list1;
				list1.push_front(8);
				list1.push_front(4);
				list1.push_front(3);
				list1.push_front(9);
				list1.push_front(1);
				list1.push_front(5);
				list1.push_front(7);
	 auto list2 = list1;
	 for(size_t i = 0; i < list1.size(); i++){
	 	cout << list1.at(i) << " " ;
	 }
	 cout << endl;
	 cout << "_________________" << endl;
	 cout << "list 1 size: " << list1.size() << endl;
	 cout << "list 2 size: " << list2.size() << endl;
	 for(size_t i = 0; i < list2.size(); i++){
		cout << list2.at(i) << " ";
	 }
	 cout << endl;
	  cout << "_________________" << endl;
	for ( size_t i = 0; i < 20; i++ ) {
	 	int value = (i * 3) - 30;
	 	list1.push_back(value);
	}
	for(size_t i = 0; i < list1.size(); i++){
	 	cout << list1.at(i) << " " ;
	 }
	 cout << endl;
	 cout << "_________________" << endl;
	 cout << "list 1 size: " << list1.size() << endl;
	
	list2.clear();
	for(size_t i = 0; i < list2.size(); i++){
		cout << list2.at(i) << " ";
	 }
	 list2.push_back(27);
	 list2.push_back(24);
	 list2.push_back(21);
	 list2.push_back(18);
	 list2.push_back(15);
	 list2.push_back(12);
	 list2.push_back(9);
	list2.push_back(6);
	list2.push_back(3);
	list2.push_back(0);
	list2.push_back(-3);
	list2.push_back(-6);
	list2.push_back(-9);
	list2.push_back(-12);
	list2.push_back(-15);
	list2.push_back(-18);
	list2.push_back(-21);
	list2.push_back(-24);
	list2.push_back(-27);
	list2.push_back(-30);
	 cout<<"--------------list 2---------------------"<<endl;
	 for(size_t i = 0; i < list2.size(); i++){
		cout << list2.at(i) << " ";
	 }
	 cout <<endl;

	//list1.reverse();
	cout << "list 1 size: "<< list1.size() << endl;
	for ( size_t i = 0; i < list1.size(); i++ ) {
		cout << list1.at(i) << " ";
	}
	cout << endl;
	 cout << "list 1 size: "<< list1.size() << endl;
	// for ( int i = 0; i < 100; i++ ) {
	// 				list1.push_front(i * 2);
	// 				list1.push_back(i * 2);
	// 			}
	
	
	cout << "list 1 size: "<< list1.size() << endl;
	for ( int i = 0; i < 10; i++ ) {
					list1.pop_front();
					list1.pop_back();
				}
	cout << endl;
	cout << "list 1 size: "<< list1.size() << endl;
	for ( size_t i = 0; i < list1.size(); i++ ) {
		cout << list1.at(i) << " ";
	}
	cout << endl;
	 cout << "list 1 size: "<< list1.size() << endl;

	cout << list1.size() << endl;
	cout << list1.empty() << endl;
	for ( int i = 0; i < 3; i++ ) {
					list1.pop_front();
					list1.pop_back();
					cout << "Popped " << i << endl;
				}
	 cout << "................................" << list1.size() << endl;
	 list1.pop_back();
	 cout << list1.empty() << endl;
	 std::cout << "list is ( 0false, 1 true) " << list1.empty() << std::endl;
	 cout << list2.size() <<endl;
	 auto itr = list2.begin();
	 itr++;
	 cout << *itr << endl;
	++itr;
	cout << *itr << endl;
	itr += 10;
	cout << *itr << endl;
	itr -= 4;
	cout << *itr << endl;
	itr--;
	cout << *itr << endl;
	--itr;
	cout << *itr << endl;
	 auto itr2 = itr;
	 cout << "True is 1: " << (itr == itr2) << endl;
	 itr2++;
	 cout << "True is 1: " <<(itr != itr2) << endl;
	 list1.push_front(10);
	 list1.push_front(9);
	 list1.push_front(8);
	 list1.push_front(7);
	 list1.push_front(6);
	 list1.push_front(5);
	for (size_t i = 0; i < list1.size(); i++)
	{
		cout << list1.at(i) << " ";
	}
	cout <<endl;
	list2.clear();
	list1.reverse();
	for (size_t i = 0; i < list1.size(); i++)
	{
		cout << list1.at(i) << " ";
	}
	//list1.clear();
	 
	//  itr += 5000;
	//  cout << (itr == list1.end()) << endl;


	// cout << list2.at(0) << endl;
	// cout << list2.at(3) << endl;
	// cout << list2.at(16) << endl;
	// cout << " size" <<   list2.size() << endl;
	//   list1.insert_after(7, 119);
	//   cout << list2.at(8) << " Should be 119" << endl;
	// for ( int i = 0; i < 20; i++ ) {
	// 	cout << list1.at(i) << endl;
	// }
	//  list1.insert_after(13, 181);
	//  cout << list1.size() << " Should be 22" << endl;
	//  cout << list1.at(8) << " Should be 119" << endl;
	//  cout << list1.at(14) << " Should be 181" << endl;
	// list.push_front(1011);
	// list.push_back(1012);
	// cout << list.size() << " Should be 24" << endl;
	// cout << list.at(0) << " Should be 1011" << endl;
	// cout << list.at(list.size() - 1) << " Should be 1012" << endl;
	// cout << list.front() << " Should be 1011" << endl;
	// cout << list.back() << " Should be 1012" << endl;
	// CPSC131::DoublyLinkedList::DoublyLinkedList<int> list2;
	// list2.push_front(19);
	


	// std::cout << "SIZE is " << list.head_k() << std::endl;
	// for ( size_t i = 0; i < 20; i++ ) {
	// 	//std::cout << "Checking after at  " << i << " it is " << list.at(i) << std::endl;
	// }
	// std::cout << "SIZE is " << list.size() << std::endl;
	// list.assign(22, 50504);
	// std::cout << "SIZE is " << list.size() << std::endl;
	// std::cout << "element is " << list.at(0) << std::endl;
	// // auto itr = list.begin();
	// // std::cout << (*itr) << std::endl;
	// // itr++;
	// // ++itr;
	// // --itr;
	// // std::cout << (*itr) << std::endl;
	

	// std::cout << "SIZE is " << list.size() << std::endl;
	// //std::cout << "Last is " << list.front() << std::endl;
	// list.push_front(100);
	// std::cout << "SIZE is " << list.size() << std::endl;
	// std::cout << "Last is " << list.front() << std::endl;
	// list.clear();
	// std::cout << "SIZE is " << list.size() << std::endl;
	// std::cout << "Last is " << list.front() << std::endl;
	return 0;
}


/*
void menuLoop()
{
	//
	while (true)
	{
		//
		auto balance = store.getAccountBalance();
		
		//
		cout
			<< endl << endl << endl
			<< "*** Book Store - Main Menu ***" << endl
			<< endl
			<< "Account balance: " << balance << " cents" << (balance >= 0 ? "" : " (Oh nyo)") << endl
			<< endl
			<< "1. Purchase inventory (add Book to store)" << endl
			<< "2. View inventory" << endl
			<< "3. Sell to customer" << endl
			<< endl
			<< "Q. Quit" << endl
			<< endl
			<< "Enter your selection ==> "
			;
		
		//
		string choice = getLine();
		cout << endl;
		
		//
		if ( choice == "1" ) {
			purchaseInventory();
		}
		else if ( choice == "2" ) {
			viewInventory();
		}
		else if ( choice == "3" ) {
			sellToCustomer();
		}
		else if ( choice == "Q" || choice == "q" ) {
			break;
		}
		else {
			cout << "Invalid choice: " << choice << endl;
		}
	}
}

//
void purchaseInventory()
{
	string title, author, isbn;
	size_t price_cents, quantity;
	
	//
	cout
		<< "Purchasing inventory ..." << endl
		<< endl
		<< "Enter book ISBN: "
		;
	isbn = getLine();
	
	//
	if ( !store.bookExists(isbn) ) {
		cout << "Enter title: ";
		title = getLine();
		cout << "Enter author: ";
		author = getLine();
	}
	
	//
	cout << "Enter wholesale price (in cents): ";
	price_cents = stoi(getLine());
	cout << "Enter quantity: ";
	quantity = stoi(getLine());
	
	//
	store.purchaseInventory(
		title, author, isbn,
		price_cents,
		quantity
	);
}


//
void viewInventory()
{
	store.printInventory();
}


//
void sellToCustomer()
{
	cout << "Selling to customer ..." << endl;
	
	string isbn;
	cout << "Enter the ISBN of the book to sell: ";
	isbn = getLine();

	size_t price;
	cout << "Enter the price per copy, in cents: ";
	price = stoi(getLine());
	
	size_t quantity;
	cout << "Enter the quantity to sell: ";
	quantity = stoi(getLine());
	
	try
	{
		store.sellToCustomer(isbn, price, quantity);
		cout << "Sale was successful" << endl;
		cout << "Sold " << quantity << " copies of ISBN:" << isbn << " at " << price << " cents each" << endl;
	}
	catch( const std::exception& e )
	{
		cout << "Failed to sell to customer: " << e.what() << endl;
	}
}

//
string getLine()
{
	const size_t BUFFER_SIZE = 8192;
	char buffer[BUFFER_SIZE];
	
	cin.clear();
	cin.getline(buffer, BUFFER_SIZE);
	
	string s = buffer;
	
	return s;
}

*/

