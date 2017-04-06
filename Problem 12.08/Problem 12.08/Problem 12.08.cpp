#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	//create an object named v1 and v2 of the vector class
	Vector<int> v1;
	Vector<int> v2;

	//is v1 empty?
	v1.empty();

	//what is the size of v1?
	v1.size();

	//returns element at specified index in the vector
	v1.at(0);

	//appends the element in the vector
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	//remove the last element in the vector v1
	v1.pop_back();
	v2.pop_back();

	//swaps the elements in v1 and v2
	v1.swap(v2);
	v2.swap(v1);
	
	//clears the vector v1
	v1.clear();

	return 0;
}