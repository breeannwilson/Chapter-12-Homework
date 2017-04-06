#include <iostream>
#include <string>
using namespace std;

template<typename T>
int linearSearch(T list[], T key, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		if (key == list[i]) {
			cout << "The item is found at position " << i << " in the list." << endl;
			return i;
		}
	}
		cout << "The item is not in the list." << endl;
		return -1;
	
}

void main() {

	int intlist[] = { 1, 2, 3, 4 };
	int i = linearSearch(intlist, 4, 4);

	double doublelist[] = { 1.1, 2.2, 3.3, 4.4 };
	int j = linearSearch(doublelist, 1.1, 4);

	string stringlist[] = { "A", "B", "C", "D" };
	int k = linearSearch<string>(stringlist, "C", 4);
}