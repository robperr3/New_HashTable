#pragma once
#include <iostream>
#include<functional>


using namespace std;

template <typename K, typename V>
class HNode//creating a node of key & value type
{
public:
	K key;//variables for key & value
	V value;
	HNode* next;//pointer for next Node

	HNode()//nullifying members of the Node
	{
		//K key = NULL;
		V value = NULL;
	}
	HNode(K init_K)//initializing just the key in this constructor
	{
		K key = init_K;
		V value = NULL;
	}
	HNode(K init_K, V init_V)//fully initialized Node
	{
		key = init_K;//initializing key
		value = init_V;//initializing value
	}
	K GetKey()
	{
		return key;
	}
	V GetValue()
	{
		return value;
	}
};

template <typename K, typename V>
class Htable//Creating a table class of key & value type
{
private:
	HNode<K, V> Harray[5];//creating an array of sorts made of Nodes
	
public:
	Htable()
	{
		//table = HNode<K, V> *Harray[5];Still not sure why the compiler doesnt like this
	}

	void HInsert(K key,V value)//function that takes in a key value pair as an argument & puts it into the table
	{
		HNode<K, V> temp(key, value);// Putting the pair in a temporary Node
		int index = HashKey(key);// Use the hash algorithm to hash the key you want to insert
		if (key == "") { cout << "You cannot enter an empty entry!" << endl; }// if key is empty, print error message(workaround since you cant say key==NULL)

		else//otherwise this table's node at the hashed index is now the temporary node
		{
			this->Harray[index] = temp;
		}
		
	}
	
	int HashKey(K key)//function containing hashing algorithm
	{
		hash <K> hasher;//Using C++ built in hash function object class
		int hashd_key= hasher(key)%5;//hash the desired key & divide that hash number by number of indexes in table & save as a variable 
		return hashd_key;
	}

	typename K Retrieve(K key)//function to obtain the key & value of any key inputed as argument & return it
	{	int index = HashKey(key);//save hashed key as variable
		if (this->Harray[index].key == key)//if key of node at index of hashed key is the key youre looking for
		{//then print out the pair
			cout <<"\nHeres your Contact: "<<  Harray[index].key<<"\n And their number: "<< Harray[index].value<<endl; 
			return Harray[index].key;
		}
		else if (this->Harray[index].key != key)//otherwise print error message
		{cout << "Your entry is not here!" << endl;}
	}
};