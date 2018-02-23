#include <string>
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

const int maxSits = 150;

class Plane {

	private:
		int m_sits;
		float m_speed;
		string m_destPoint;
		float m_number;

	public:
		void SetParam(int sits, float vel, string destPoint);
		void ShowDest();
		void FlyTime(float distance);
		void Passengers();
};

int main() {

	string places[10] = {"Praga", "Talin", "New York", "Moskow", "Dublin", "Kardif", "Stambul", "London", "Paris", "Berlin"};
	Plane an25;
	Plane ty120;

	an25.SetParam(13, 400.0f, "Kiev");

	cout << "Destination city is ";
	an25.ShowDest();
	cout << "flying time: ";
	an25.FlyTime(1000);
	cout << endl;

	//an25.Passengers();

	Plane* pAirport = new Plane[10];

	for(int i = 0; i < 10; i++) {

		pAirport[i].SetParam(100, 600, places[i]);

		cout << "Plane " << i + 1 << " is flying to the ";
		pAirport[i].ShowDest();
	}

	// sout << fixed << setprecision(3) << value << endl;

	_getch();

	return 0;

}

void Plane::SetParam(int sits, float speed, string destPoint) {

	m_sits = sits;
	m_speed = speed;
	m_destPoint = destPoint;
}
void Plane::ShowDest() {

	cout << m_destPoint << endl;
}
void Plane::FlyTime(float distance) {

	cout << distance/m_speed;
	cout << " hours" << endl;
}
void Plane::Passengers() {

	cout << "Enter nnumber of passenger : ";
	cin >> float(m_number);

	while(m_number > maxSits) {

		cout << "The maximum sits in plane is ";
		cout << maxSits << endl;

		cout << "Please, enter anothet number of sits: ";
		cin >> float(m_number);
	}

	cout << "Ok!";
}