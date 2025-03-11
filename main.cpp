#include<iostream>
#include"linklist.h"
using namespace std;
Node* AddNewNode(const int& data,Node*& current)
{
	Node* temp = new Node(data);
	current->next = temp;
    return current = temp;

}
void PrintLinkList(Node* current,Node* head)
{
	current = head;
	while (current != nullptr)
	{
		cout << current->value << endl;
		current = current->next;
	}
	
}
int main() {
	Node* head = new Node(1);
	Node* Current = new Node();
	Current = head;
	AddNewNode(2, Current);
	AddNewNode(3, Current);
	PrintLinkList(Current,head);






	return 0;
}