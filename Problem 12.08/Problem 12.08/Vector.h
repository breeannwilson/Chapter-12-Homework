#pragma once
#include <vector>
#ifndef VECTOR_H
#define VECTOR_H
using namespace std;

template<typename T>
class Vector{
private: 
	int vectorsize;
	T* data;
	int numberofitems;
	
public:
	//default vector
	Vector() {
		vectorsize = 20;
		data = new T[vectorsize];
		numberofitems = 0;
	}

	//constructs vector with initial size
	Vector(const Vector& v) {
		data = new T[v.vectorsize];
	}

	//appends the element in the vector 
	void push_back(T value) {
		if (numberofitems = vectorsize) {
			doublecapacity();
		}
		data[numberofitems++] = value;
	}

	//removes the last element in the vector
	void pop_back() {
		if(numberofitems != 0)
		--numberofitems;
	}

	//returns number of elements in vector
	int size() {
		return vectorsize;
	}

	//returns true if vector is empty
	bool empty() {
		return vectorsize == 0;
	}

	//returns the element at the specified index in the vector
	T at(int index) {
		return data[index];
	}

	//removes all elements from the vector
	int clear() {
		vectorsize = 0;
		return vectorsize;
	}

	//swaps the contents of this vector with the contents of the specified vector
	void swap(Vector& v) {
		T* temp = v.data; //temporarily hold the data array pointer for v
			v.data = this->data;
		this->data = temp;

		// swap vectorsizes
		int itemp = v.vectorsize;
		v.vectorsize = this->vectorsize;
		this->vectorsize = itemp;

		// swap numberofitems
		itemp = v.numberofitems;
		v.numberofitems = this->numberofitems;
		this->numberofitems = itemp;
	}
	
	//double capacity if the array/vector? is not large enough
	void doublecapacity() {
		int newsize = vectorsize * 2;
		int* newarray = new T[newsize];
		for (int i = 0; i < vectorsize; i++) {
			newarray[i] = data[i];
		}
		delete [] data;
		data = newarray;
	}

};

#endif