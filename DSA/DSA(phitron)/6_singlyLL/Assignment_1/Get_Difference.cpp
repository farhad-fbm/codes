#include <bits/stdc++.h>
using namespace std;
class Node {
	public:
	int val;
	Node* next;

	Node(int val){
		this->val = val;
		next = nullptr;
	}
};

void takeInputs(Node*& head, Node*& tail){
	int val;
	while (true){
		cin>>val;
		if (val == -1) break;
		Node* newNode = new Node(val);
		if (head ==nullptr){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail=tail->next;
		}
	}
}
void printNodes(Node* head){
	Node* tmp = head;
	while (tmp != nullptr){
		cout<<tmp->val<<" ";
		tmp = tmp->next;
	}
}

void mnV_mxV(Node* head, int& mnV, int& mxV){
	Node* tmp =head;
	mnV=tmp->val;
	mxV=tmp->val;
	while (tmp->next != nullptr){
		tmp = tmp->next;
		if (mnV> tmp->val) mnV = tmp->val;
		if (mxV< tmp->val) mxV = tmp->val;
	}
}
int main(){
	Node* head = nullptr;
	Node* tail = nullptr;
	takeInputs(head, tail);
	// printNodes(head);
	int mnV, mxV;
	mnV_mxV(head, mnV, mxV);
	cout<<mxV - mnV<<endl;
	return 0;
}