#include <iostream>
#include <ctime>
#include <vector>
#include <iostream>
using namespace std;

template<typename T>
void shuffle(vector<T>& v) {
	srand(time(0));
	for (int i = 0; i < v.size(); i++) {
		int j = rand() % v.size(); // this guarantees 0 <= j <= size
			if (i != j) { // if the two indices are not the same, swap
				T temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
	}

}

void main() {
	//asks user for tenints to be stored in vector
	int tenints;
	cout << "Enter 10 integers: " << endl;

	//create a vector of ints that stores tenints into vector slots
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		cin >> tenints;
		v.push_back(tenints);
	}
	//shuffles the fiveints within the vector
	shuffle<int>(v);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}