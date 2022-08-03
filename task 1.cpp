#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <stack> 

using namespace std;

void stringToChar(string str, queue<char>& t);
void stringReverse(queue<char>& q, queue<char>& t);
void removeElem(queue<char>& str);

int main() {

	string input;
	queue<char> inChar;
	queue<char> outString;
	string output;




	getline(cin, input);


	stringToChar(input, inChar);


	stringReverse(inChar, outString);


	cout << "Input: " << input << endl;



	removeElem(outString);

}

// reverse the queue and stores it in another queue
void stringReverse(queue<char>& q, queue<char>& t) {

	if (q.empty()) {
		return;
	}
	else {
		char data = q.front();

		q.pop();

		stringReverse(q, t);
		t.push(data);

	}


};

// removes required elementss and prints output
void removeElem(queue<char>& str) {

	int strLength = str.size();
	int i = 0;
	cout << "output: ";
	while (i < strLength) {

		char temp = str.front();

		if (str.front() == ',' || str.front() == '.') {


			str.pop();
			i++;

		}
		else {

			cout << str.front();
			str.pop();
			i++;
		}

	}

	cout << endl;

}


// convert string to  char queue
void stringToChar(string str, queue<char>& t) {

	int length = str.length();

	for (int i = 0; i < length; i++) {




		t.push(str[i]);


	}


}