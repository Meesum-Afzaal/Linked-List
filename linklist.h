#pragma once
struct Node {
	int value;
	Node* next; 
	Node()
	{
		value = 0;
		next = nullptr;
	}
	Node(const int& data)
	{
		value = data;
		next = nullptr;
	}
};