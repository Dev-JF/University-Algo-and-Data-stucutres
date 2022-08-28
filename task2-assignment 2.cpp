#include <list>
#include <iostream>
#include <iterator>


using namespace std;

int main() {
	
	// initiates the list
	
	list<int> nums;
	
		
	// inserts items into list
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(8);
	nums.push_back(9);
	nums.push_back(10);
	int size = 10;
	int x;
	int y;
	int i = 0;
	

	// prints the list
	list<int>::iterator pos = nums.begin();
	list<int>::iterator temp;
	
	cin >> "Please enter two numbers:" >> x >> y;

	while (i < x) {
		
		cout << i << endl;
		int ii = 0;
		int j = 0;
		pos = nums.begin();

		while (ii < size) {
			if (j != y) {
				pos++;
				ii++;
				j++;

			}
			else {
				nums.erase(pos);
				pos++;
				ii++;
				j++;
			}
			
		} 
		i++;
	}
	
	cout << endl << "After removing nodes" << endl;

	pos = nums.begin();
	while (pos != nums.end()) {

		cout << *pos << "\n"; pos++;
	}

	// deletes specified items from the lsit



	// prints the list again




}