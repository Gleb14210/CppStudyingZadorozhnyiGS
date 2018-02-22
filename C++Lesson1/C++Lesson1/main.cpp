#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

void Sort();
void Show();
void LenghtSort();
void MaxAndMinLength();
void NumberOfSpecificName();

void FirstLesson();
void FirstHomework();

int* CreateArray(int size);
void DeleteArray(int* parr);
void FullArrayByNumbers(int* parr, int size);
int TheSizeOfNewArray(int* parr, int size);
int* Input();

void SecondLesson();
void SecondHomework();


const int n = 10;
string names[n] = {"Olga", "GLeb", "Ruslan", "Eugyn", "Fil", "Oleg", "Olga", "Sergio", "Olga", "Ruslan"};

void main() {}


void FirstLesson() {

	cout << "Hello";
	cout << endl;
	cout << 2018;

	string name;
	name = "1 2 3 4 5";

	cout << name;
	cout << endl;

	cout << "Enter name: ";
	cin >> name;
	cout << name << endl;

	string nameUser;

	cout << "Enter your Name: ";
	cin >> nameUser;

	cout << nameUser + " is studying in KPI" << endl;

	_getch();

	string name1;
	getline(cin, name1);
}

void FirstHomework() {

	// Сортування по алфавіту
	Sort();
	Show();
	cout << endl;

	// Сортування по довжині слова
	LenghtSort();
	Show();
	cout << endl;

	// Знаходження слова з мінімальною та максимально з довжиною
	MaxAndMinLength();
	cout << endl;

	// Знаходження кількості слів, заданого користувачем
	NumberOfSpecificName();
	cout << endl;

}

void SecondLesson() {

	const int size = 5;

	int* pArray = CreateArray(size);

	FullArrayByNumbers(pArray, size);
	int newSize = TheSizeOfNewArray(pArray, size);
	DeleteArray(pArray);

	int* newPArray = CreateArray(newSize);
	DeleteArray(newPArray);

	_getch();
}

void SecondHomework() {

	int* input = Input();

}



// Функції першого заняття та першого Д/З

void MaxAndMinLength() {

	LenghtSort();

	cout << names[0] << endl;
	cout << names[n - 1] << endl;

}

void NumberOfSpecificName() {

	int count = 0;
	string userName;
	
	cout << "Enter name that you want to count : ";
	cin >> userName;

	for(int i = 0; i < n; i++) {

		if(names[i] == userName)
			count++;
	}

	cout << count;

}

void Sort(){

	string tmpName;

	for(int j = 0; j <= n - 1; j++) {

		for(int i = 0; i < n - 1; i++) {

			if(names[i] > names[i + 1]) {

				tmpName = names[i];
				names[i] = names[i + 1];
				names[i + 1] = tmpName;
			}
		}
	}
}

void Show() {

	for(int i = 0; i < n; i++)

		cout << names[i] << endl;
}

void LenghtSort() {

	string nameLenght;

	for(int i = 0; i < n - 1; i++) {

		for(int j = 0; j < n - 1; j++) {

			if(names[j].length() > names[j + 1].length()) { 

				nameLenght = names[j];
				names[j] = names[j + 1];
				names[j + 1] = nameLenght;
			}
		}
	}
}


// Функції другого заняття та другого Д/З

int* CreateArray(int size) {

	int* parr = new int[size];	

	for(int i = 0; i < size; i++) 
		*(parr + i) = '\0'; // pArr[i] = 0;

	return parr;
}

void FullArrayByNumbers(int* parr, int size) {

	for(int i = 0; i < size; i++) {
		cout << "Enter array value: ";
		cin >> *(parr + i);
	}
}

void DeleteArray(int* parr) {

	delete parr;

	//parr = NULL; // занулити вказівник, тобто більше не вказує на масив
}

int TheSizeOfNewArray(int* parr, int size) {

	int number = 0;
	int count = 0;

	cout << "Enter the number that will be the size of new array: ";
	cin >> number;

	for(int i = 0; i < size; i++)
		if(*(parr + i) == number)
			count++;

	return count;
}

int* Input() {

	string* newSymbols;
	string* symbols;
	int symbol;
	bool Enter;
	int count = 0;

	cout << "Enter text :" << endl;

	do {
		symbol = _getch();
		
		if(symbol == 13)
			Enter = true;

		else {

			if(count == 0) {
				symbols = CreateArray(1)
				*symbols = symbol;
				count = 1;
				Enter = false;
			}

			else {
				newSymbols = CrateArray(count + 1);

				for(int i = 0; i < count; i ++)
					*(newSymbols + i) = *(symbols + i);

				*(newSymbols + count) = symbol;
			
				symbols = newSymbols;
				count++;
				Enter = false;

				newSymbols = NULL;
				DeleteArray(newSymbols);
			}
		}

	} while(Enter == false);

	return symbols;
}

