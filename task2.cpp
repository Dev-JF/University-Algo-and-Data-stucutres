#include <bits/stdc++.h>
#include <iostream>


using namespace std;

class Node {
 public:
	int value;
	Node* next;

};

int main() {
	
	// iniates the notes in the linked lsit
	Node* head;
	Node* temp;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	Node* four = NULL;
	Node* five = NULL;
	Node* six = NULL;
	Node* seven = NULL;
	Node* eight = NULL;
	Node* nine = NULL;
	Node* ten = NULL;

	int i = 0;
	int j = 0;
	int inputOne;
	int inputTwo;

	// creates the actual node
	one = new Node();
	two = new Node();
	three = new Node();
	four = new Node();
	five = new Node();
	six = new Node();
	seven = new Node();
	eight = new Node();
	nine = new Node();
	ten = new Node();


	// assigns the value to the nodes
	one->value = 1;
	two->value = 2;
	three->value = 3;
	four->value = 4;
	five->value = 5;
	six->value = 6;
	seven->value = 7;
	eight->value = 8;
	nine->value = 9;
	ten->value = 10;


	// links the nodes to eachother
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;
	five->next = six;
	six->next = seven;
	seven->next = eight;
	eight->next = nine;
	nine->next = ten;
	ten->next = NULL;

	// takes user input
	cout << "Please enter num one: ";
	cin >> inputOne;
	if (inputOne > 10) {
		cout << "Please enter a valid value: ";
		cin >> inputOne;
	}
	
	cout << "Please put in num two: ";
	cin >> inputTwo;

	if (inputOne > (10 - inputOne)) {
		cout << "Please enter a valid value: ";
		cin >> inputTwo;
	}


	// prints the untouched list
	head = one;
	while (head != NULL) {
		cout << head->value;
		cout << " ";
		head = head->next;
	}
	cout << endl; 

	// removes the specified elemetns and prints the list
	head = one;
	while (head != NULL) {

		i++;

		temp = head;
		if (i == (inputOne + 2)) {

			while (j < (inputTwo - 1)) {

				temp = temp->next;
				j++;
			}
			head = temp;
		}
		head = one;
		while (head != NULL) {
			cout << head->value;
			cout << " ";
			head = head->next;
		}
	}
}