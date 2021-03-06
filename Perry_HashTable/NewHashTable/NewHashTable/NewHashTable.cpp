// This is the testing suite for my little contacts list manager. 
//It uses a hash table to take in names and a number & stores them in a 
//specific index within the table via a hash algorithm. 


#include "pch.h"
#include <iostream>
#include <string>
#include "NHtable.h"

using namespace std;

int main()
{
	int choice;
	//creating a do while loop for a menu
	do {

		cout << "\nWelcome to the Phone Contacts Application.  Please choose a valid option\n" << endl;
		cout << "1. Create a default Hash Table where contacts can be stored" << endl;
		cout << "2. Using a hash algorithm to create a hash key" << endl;
		cout << "3. Add a bunch of contacts(by using a hash algorithm) & obtain each contact's information" << endl;
		cout << "4. Quit" << endl;
		cin >> choice;// take user input as variable

		if (choice == 1)//if user chooses 1
		{
			HNode<string, unsigned long long int> node_array[5];//Create a table consisting of 5 indexes for nodes
			Htable<string, unsigned long long int> T1;
		}
		if (choice == 2)//if user chooses 2
		{
			HNode<string, unsigned long long int> node_array[5];//Create table with 5 indexes
			Htable<string, unsigned long long int> T1;
			HNode<string, unsigned long long int>HN1("Jak", 7);//Creating a few nodes, each with a name & a number
			HNode<string, unsigned long long int>HN2("Joe", 1);
			HNode<string, unsigned long long int>HN3("Rebecca", 5);
			cout <<"\nHere's the hashed key for entry Jak: "<<T1.HashKey("Jak")<< endl;//using hash algortihm function to show the hash key for each Node 
			cout << "\nHere's the hashed key for entry Joe: " << T1.HashKey("Joe") << endl;
			cout << "\nHere's the hashed key for entry Rebecca: " << T1.HashKey("Rebecca") << endl;
		}
		if (choice == 3)//if user chooses 3
		{
			HNode<string, unsigned long long int> node_array[5];//Create table with 5 indexes
			Htable<string, unsigned long long int> T1;
			HNode<string, unsigned long long int>HN1("Jak", 7578253232);//Creating a few nodes, each with a name & phone number
			HNode<string, unsigned long long int>HN2("Roberto",7571372689);
			HNode<string, unsigned long long int>HN3("Bill", 4012231405);
			HNode<string, unsigned long long int>HN4("Sarah", 3175631768);	
			T1.HInsert(HN1.key, HN1.value);//inserting each node into tha hash table
			T1.HInsert(HN2.key, HN2.value);
			T1.HInsert(HN3.key, HN3.value);
			T1.HInsert(HN4.key, HN4.value);
			T1.Retrieve(HN1.key);//using the retrieve fucntion to show that each node was inserted correctly
			T1.Retrieve(HN2.key);//along with their key & corresponding value by searching for the desired pair 
			T1.Retrieve(HN3.key);//via the key
			T1.Retrieve(HN4.key);
		}
		if (choice == 0)//if user chooses 3
		{
			HNode<string, unsigned long long int> node_array[5];//Create table with 5 indexes
			Htable<string, unsigned long long int> T1;
			HNode<string, unsigned long long int>HN1("Jak", 7578253232);//Creating a few nodes, each with a name & phone number
			HNode<string, unsigned long long int>HN2("rob", 123253232);//Creating a few nodes, each with a name & phone number
			T1.HInsert(HN1.key, HN1.value);
			T1.HInsert(HN2.key, HN2.value);

		}

	} while (choice != 4);//if user chooses 4, quit the program
	

	system("pause");
}

