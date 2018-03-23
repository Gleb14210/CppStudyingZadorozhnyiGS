#include <string>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include "Array.h"
using namespace std;

Array::Array() { cout << "Default" << endl; } 
Array::Array(int size) : 
	m_size(size), // Correct space Init
	m_index(0), // Must be write down like in the class because initialization like in the class space 
	m_pArr(new int[m_size])
{ cout << "Size Constructor  " << m_index << "   " << m_size << endl;}
Array::Array(const Array& object) {    // & - copy of object is arr1 only for this method

	m_size = object.m_size;
	m_index = object.m_index;
	m_pArr = new int[m_size];

	for(int i = 0; i < m_size; i++)
		m_pArr[i] = object.m_pArr[i];
}
Array::~Array() {
	cout << "Destructor" << endl; 
	delete[] m_pArr, m_copy;
}

Array& Array::operator= (const Array& object) {

	if(this == &object) return *this;

	else {

		// 1) delete old memory
		delete[] m_pArr;

		// 2) alloc new memory
		m_size = object.m_size;
		m_index = object.m_index;
		m_pArr = new int[m_size];

		// 3) copy data
		for(int i = 0; i < m_size; i++)
			m_pArr[i] = object.m_pArr[i];

		// 4) return new object
		return *this;

	}
		
}
Array& Array::operator+ (const Array& object) {

	m_size = m_size + object.m_size;
	m_index = object.m_index;
	m_copy = new int[m_size];

	for(int i = 0; i < (m_size - object.m_size); i++)
		m_copy[i] = m_pArr[i];

	for(int i = (m_size - object.m_size); i < m_size; i++)
		m_copy[i] = object.m_pArr[i];

	m_pArr = m_copy;

	return *this;	

}
Array& Array::operator+= (const Array& object) {

	m_size = m_size + object.m_size;
	m_index = object.m_index;
	m_copy = new int[m_size];

	for(int i = 0; i < (m_size - object.m_size); i++)
		m_copy[i] = m_pArr[i];

	for(int i = (m_size - object.m_size); i < m_size; i++)
		m_copy[i] = object.m_pArr[i];

	m_pArr = m_copy;

	return *this;
}

void Array::Show() {
	cout << m_index << "   " << m_size << endl;
}
