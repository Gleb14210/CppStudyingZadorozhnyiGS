#include <string>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include "crtdbg.h"
#include "Array.h"

using namespace std;

Array arr;

void main() {

	Array arr1(5);
	Array arr2(10);
	Array arr3(333);
	//arr3 = arr1 + arr2;
	

	arr3 += arr1;
	arr3.Show();

	if( _CrtDumpMemoryLeaks() )
		cout << "Memory Leaks" << endl; 
	else  
		cout << "Ok!" << endl; 

	_getch();
}