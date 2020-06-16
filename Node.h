#pragma once
#include<iostream>
using namespace std;
template<class T>
class Node
{
public:
	Node() {};
	Node(T data_, Node* pred_, Node* succ_)
	{
		this->data = data_;
		this->pred = pred_;
		this->succ = succ_;
	};
	T data;
	Node* pred;
	Node* succ;
};
