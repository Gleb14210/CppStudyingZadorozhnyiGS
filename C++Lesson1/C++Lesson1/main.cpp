#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

void Sort();
void Show();
void LenghtSort();
void MaxAndMinLength();
void NumberOfSpecificName();

const int n = 10;
string names[n] = {"Olga", "GLeb", "Ruslan", "Eugyn", "Fil", "Oleg", "Olga", "Sergio", "Olga", "Ruslan"};


int* CreateArray(int size);
void DeleteArray(int* parr);

void main() {

	/*cout << "Hello";
	cout << endl;
	cout << 2018;

	string name;
	name = "1 2 3 4 5";

	cout << name;
	cout << endl;

	cout << "Enter name: ";
	cin >> name;
	cout << name << endl;*/

	//string nameUser;

	//cout << "Enter your Name: ";
	//cin >> nameUser;

	//cout << nameUser + " is studying in KPI" << endl;

	//_getch();

	//string name;
	//getline(cin, name);
	
	Sort();
	Show();
	cout << endl;

	LenghtSort();
	Show();
	cout << endl;

	MaxAndMinLength();
	cout << endl;

	NumberOfSpecificName();
	cout << endl;

	int* pArray = CreateArray(5);// функція буде рахувати 5 , потім виділить таку память

	DeleteArray(pArray);

	_getch();

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






int* CreateArray(int size) {

	 int* pArr = new int[size];
		///////////////////////////////////////////////////////  *(pArr + i) = '\0';   //   pArr[i] = 0;		

	 for(int i = 0; i < size; i++) {

		 cout << "Input number: " + (i + 1);
		 cin >> *pArr + i;
	 }

	 return pArr;
}

void CopyArray() {}

void DeleteArray(int* parr) {

	delete parr;

	parr = NULL; // занулити вказівник, тобто більше не вказує на масив
}