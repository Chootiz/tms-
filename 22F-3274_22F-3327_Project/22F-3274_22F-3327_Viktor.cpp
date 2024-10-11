#include "pch.h"
#include "22F-3274_22F-3327_Viktor.h"
template <typename Data>
Viktor<Data>::Viktor() {
	this->length = 0;
	this->vec = nullptr;
}
template <typename Data>
Viktor<Data>::Viktor(int length) {
	if (this->vec != nullptr) delete[] this->vec;
	this->length = length;
	this->vec = new Data[length];
}
template <typename Data>
void Viktor<Data>::push_back(Data x) {
	int i;
	Data* ptr = new Data[this->length + 1];
	for (i = 0; i < this->length; i++) {
		ptr[i] = this->vec[i];
	}
	ptr[this->length] = x;
	delete[] this->vec;
	this->vec = ptr;
	this->length += 1;
}
template <typename Data>
void Viktor<Data>::push_front(Data x) {
	int i;
	Data* ptr = new Data[this->length + 1];
	ptr[0] = x;
	for (i = 1; i <= this->length; i++) {
		ptr[i] = this->vec[i - 1];
	}
	delete[] this->vec;
	this->vec = ptr;
	this->length += 1;
}
template <typename Data>
void Viktor<Data>::pop_back() {
	if (this->length > 0) {
		int i;
		Data* ptr = new Data[this->length - 1];
		for (i = 0; i < this->length - 1; i++) {
			ptr[i] = this->vec[i];
		}
		delete[] this->vec;
		this->vec = ptr;
		this->length -= 1;
	}
}
template <typename Data>
void Viktor<Data>::pop_front() {
	if (this->length > 0) {
		int i;
		Data* ptr = new Data[this->length - 1];
		for (i = 0; i < this->length - 1; i++) {
			ptr[i] = this->vec[i + 1];
		}
		delete[] this->vec;
		this->vec = ptr;
		this->length -= 1;
	}
}
template <typename Data>
int Viktor<Data>::size() {
	return this->length;
}
template <typename Data>
Data* Viktor<Data>::operator [](int n) {
	if (n >= 0 && n < this->length) {
		return &this->vec[n];
	}
}
template <typename Data>
void Viktor<Data>::clear() {
	delete[] this->vec;
	this->vec = NULL;
	this->length = 0;
}