#pragma once
#include <iostream>
#include <string>



using namespace std;

template <typename K, typename V>
class HNode
{
public:
	K key;
	V value;

	HNode()
	{
		K key = NULL;
		V value = NULL;
	}
	HNode(typename K init_K)
	{
		K key = init_K;
		V value = NULL;
	}
	HNode(typename K init_K, typename V init_V)
	{
		key = init_K;
		value = init_V;
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