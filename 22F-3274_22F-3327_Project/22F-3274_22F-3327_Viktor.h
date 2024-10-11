#pragma once
template <typename Data> //Self Made Vector Class
class Viktor {
	Data* vec; //pointer for DMA
	int length = 0; //the length/size of the Viktor
public:
	Viktor();
	Viktor(int length);
	void push_back(Data x); //Just like it is in vectors
	void pop_back(); //classic vector function, stole for my purposes
	void push_front(Data x); //i got carried away and implemented pop_front and push_front
	void pop_front(); //but ended up not using them at all
	int size(); //returns the size
	Data* operator [](int n); //overloaded subscript operator to easily access the indices, returns the address instead of value
	void clear();
};