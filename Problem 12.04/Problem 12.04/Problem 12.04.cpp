#include <iostream>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (list[i] > list[i + 1])
			return false;
		else
			return true;
	}
}

void main() {
	int intlist[] = { 4, 5, 6, 7, 8 };
	isSorted(intlist, 5);

	double doublelist[] = { 4.4, 5.5, 6.6, 7.7, 8.8 };
	isSorted(doublelist, 5);

	string stringlist[] = { "abc", "def", "zyx" };
	isSorted(stringlist, 3);

}